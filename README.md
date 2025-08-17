# Space Invaders Game

A classic Space Invaders game implementation with multiple versions and build options.

## 🎮 Game Versions

### 1. Web Version (Recommended - Easy to Run)
The web version is a fully functional Space Invaders game that runs in any modern web browser.

**Features:**
- Smooth 60 FPS gameplay
- Responsive controls
- Score tracking and lives system
- Enemy AI with movement and shooting
- Collision detection and explosions
- Win/lose conditions
- No compilation required

**How to Run:**
1. Simply open `index.html` in any modern web browser
2. Use arrow keys to move left/right
3. Press Space to shoot
4. Destroy all enemies to win
5. Avoid enemy bullets to survive

**Controls:**
- **Arrow Left/Right**: Move player ship
- **Space**: Fire bullet
- **R**: Restart game (when game over)

### 2. C++ Version with SFML
The C++ version uses SFML (Simple and Fast Multimedia Library) for cross-platform compatibility.

**Prerequisites:**
- macOS with Homebrew installed
- SFML 2.x library

**Installation:**
```bash
# Install SFML 2.x
brew install sfml@2

# Set environment variables (if needed)
export LDFLAGS="-L/usr/local/opt/sfml@2/lib"
export CPPFLAGS="-I/usr/local/opt/sfml@2/include"
```

**Building:**
```bash
cd "Space Invaders/CPP-Space-Invaders-Game-with-raylib"
make
```

**Running:**
```bash
./space_invaders
```

**Controls:**
- **Arrow Left/Right**: Move player ship
- **Space**: Fire bullet
- **R**: Restart game (when game over)

### 3. Original C++ Version with raylib (Deprecated)
The original version used raylib but had compatibility issues on macOS ARM64.

**Issues:**
- Architecture mismatch (x86_64 vs ARM64)
- C++ standard library header problems
- Complex dependency management

## 🚀 Quick Start

### Option 1: Web Version (Easiest)
1. Navigate to the project directory
2. Open `index.html` in your web browser
3. Start playing immediately!

### Option 2: C++ SFML Version
1. Install SFML: `brew install sfml@2`
2. Build: `make`
3. Run: `./space_invaders`

## 🎯 Game Features

- **Player Ship**: Green rectangle that moves horizontally
- **Enemies**: Three rows of colored invaders that move side-to-side
- **Bullets**: Player shoots white bullets, enemies shoot red bullets
- **Scoring**: 10 points per enemy destroyed
- **Lives**: Start with 3 lives
- **Progressive Difficulty**: Enemies move down when hitting screen edges
- **Collision Detection**: Accurate hit detection for all game objects
- **Visual Effects**: Explosion animations when enemies are destroyed

## 🛠️ Technical Details

### Web Version
- **Technology**: HTML5 Canvas + JavaScript
- **Performance**: 60 FPS with requestAnimationFrame
- **Compatibility**: Works in all modern browsers
- **No Dependencies**: Pure web technologies

### C++ SFML Version
- **Language**: C++14
- **Graphics**: SFML 2.6.2
- **Compiler**: Clang++ (macOS default)
- **Build System**: Make

## 📁 Project Structure

```
Space-Invaders/
├── README.md                           # This file
├── index.html                          # Web version of the game
└── Space Invaders/
    └── CPP-Space-Invaders-Game-with-raylib/
        ├── src/                        # C++ source files
        │   ├── main.cpp                # Main game loop
        │   ├── simple_space_invaders.cpp # SFML version
        │   ├── game.hpp                # Game class header
        │   └── ...                     # Other game classes
        ├── Graphics/                   # Game graphics
        ├── Fonts/                      # Game fonts
        ├── Sounds/                     # Game audio
        ├── Makefile                    # Build configuration
        └── README.md                   # Original project README
```

## 🔧 Troubleshooting

### Web Version Issues
- **Game not loading**: Ensure JavaScript is enabled in your browser
- **Controls not working**: Click on the game canvas first to focus it
- **Performance issues**: Close other browser tabs to free up resources

### C++ SFML Issues
- **SFML not found**: Ensure SFML 2.x is installed via Homebrew
- **Compilation errors**: Check that environment variables are set correctly
- **Runtime errors**: Ensure all asset files (fonts, graphics) are in the correct locations

### Common macOS Issues
- **Architecture mismatch**: Use SFML 2.x instead of SFML 3.x
- **Header not found**: Set CPPFLAGS to point to SFML include directory
- **Library not found**: Set LDFLAGS to point to SFML library directory

## 🎨 Customization

### Web Version
- Modify colors in the JavaScript code
- Adjust game speed by changing timing values
- Add new enemy types or power-ups
- Implement sound effects using Web Audio API

### C++ Version
- Modify game parameters in the source code
- Add new game mechanics
- Implement additional visual effects
- Add configuration file support

## 📱 Platform Support

- **Web Version**: All platforms with modern browsers
- **C++ SFML Version**: macOS, Linux, Windows
- **Mobile**: Web version works on mobile browsers

## 🤝 Contributing

Feel free to:
- Report bugs or issues
- Suggest new features
- Submit improvements
- Create new game modes

## 📄 License

This project is open source and available under the MIT License.

Copyright (c) 2025 Tony Oganda

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

## 🙏 Acknowledgments

- Original Space Invaders arcade game by Taito
- SFML library for C++ multimedia support
- HTML5 Canvas API for web graphics
- Modern web technologies for cross-platform compatibility

---

**Happy Gaming! 🚀👾**
