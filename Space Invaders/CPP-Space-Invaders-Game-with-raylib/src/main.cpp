#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include "game.hpp"
#include <string>
#include <iostream>

std::string FormatWithLeadingZeros(int number, int width) {
    std::string numberText = std::to_string(number);
    int leadingZeros = width - numberText.length();
    return std::string(leadingZeros, '0') + numberText;
}

int main()
{
    sf::Color grey(29, 29, 27);
    sf::Color yellow(243, 216, 63);
    int offset = 50;
    int windowWidth = 750;
    int windowHeight = 700;

    // Create the main window
    sf::RenderWindow window(sf::VideoMode(windowWidth + offset, windowHeight + 2 * offset), "C++ Space Invaders");
    window.setFramerateLimit(60);

    // Load font
    sf::Font font;
    if (!font.loadFromFile("Font/monogram.ttf")) {
        std::cerr << "Error loading font!" << std::endl;
        return -1;
    }

    // Load spaceship texture
    sf::Texture spaceshipTexture;
    if (!spaceshipTexture.loadFromFile("Graphics/spaceship.png")) {
        std::cerr << "Error loading spaceship texture!" << std::endl;
        return -1;
    }

    Game game;

    // Game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Update game
        game.HandleInput();
        game.Update();

        // Clear the window
        window.clear(grey);

        // Draw rounded rectangle border (simplified as regular rectangle for now)
        sf::RectangleShape border(sf::Vector2f(780, 780));
        border.setPosition(10, 10);
        border.setFillColor(sf::Color::Transparent);
        border.setOutlineColor(yellow);
        border.setOutlineThickness(2);
        window.draw(border);

        // Draw line
        sf::RectangleShape line(sf::Vector2f(750, 3));
        line.setPosition(25, 730);
        line.setFillColor(yellow);
        window.draw(line);

        // Draw level text
        sf::Text levelText;
        levelText.setFont(font);
        levelText.setCharacterSize(34);
        levelText.setFillColor(yellow);
        levelText.setPosition(570, 740);
        
        if (game.run) {
            levelText.setString("LEVEL 01");
        } else {
            levelText.setString("GAME OVER");
        }
        window.draw(levelText);

        // Draw lives
        float x = 50.0f;
        for (int i = 0; i < game.lives; i++) {
            sf::Sprite lifeSprite(spaceshipTexture);
            lifeSprite.setPosition(x, 745);
            lifeSprite.setScale(0.5f, 0.5f); // Scale down the sprite
            window.draw(lifeSprite);
            x += 50;
        }

        // Draw score
        sf::Text scoreLabel;
        scoreLabel.setFont(font);
        scoreLabel.setCharacterSize(34);
        scoreLabel.setFillColor(yellow);
        scoreLabel.setString("SCORE");
        scoreLabel.setPosition(50, 15);
        window.draw(scoreLabel);

        sf::Text scoreText;
        scoreText.setFont(font);
        scoreText.setCharacterSize(34);
        scoreText.setFillColor(yellow);
        std::string scoreString = FormatWithLeadingZeros(game.score, 5);
        scoreText.setString(scoreString);
        scoreText.setPosition(50, 40);
        window.draw(scoreText);

        // Draw high score
        sf::Text highscoreLabel;
        highscoreLabel.setFont(font);
        highscoreLabel.setCharacterSize(34);
        highscoreLabel.setFillColor(yellow);
        highscoreLabel.setString("HIGH-SCORE");
        highscoreLabel.setPosition(570, 15);
        window.draw(highscoreLabel);

        sf::Text highscoreText;
        highscoreText.setFont(font);
        highscoreText.setCharacterSize(34);
        highscoreText.setFillColor(yellow);
        std::string highscoreString = FormatWithLeadingZeros(game.highscore, 5);
        highscoreText.setString(highscoreString);
        highscoreText.setPosition(655, 40);
        window.draw(highscoreText);

        // Draw game elements
        game.Draw(window);

        // Display everything
        window.display();
    }

    return 0;
}