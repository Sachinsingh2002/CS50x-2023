# Flappy Bird Game

This is a simple Flappy Bird game developed in Lua using the LÖVE game engine. The objective of the game is to control a bird and navigate it through a series of pipes without colliding with them.


* Video Demo: https://youtu.be/wuOanPZ2Fg4


## Getting Started

* To play the game, you will need to have LÖVE installed on your computer. LÖVE is a cross-platform game engine that allows you to create games using the Lua programming language. You can download LÖVE from the official website at https://love2d.org/.

* Once you have installed LÖVE, you can run the game by navigating to the game's directory in the terminal and running the command:

* Alternatively, you can also run the game by dragging the game directory onto the LÖVE application icon.

## Game Controls

To control the bird, use the left click of your mouse to make the bird flap its wings and fly upwards. Release the left click to let the bird fall.

### Files

The game is built using several Lua files, including:

* main.lua

This file contains the main game loop and is responsible for updating the game state and rendering the graphics. It also contains the keyboard and mouse input handling code.

* conf.lua

This file contains the configuration settings for the game, such as the window dimensions and the title of the game. we can modify these settings to customize the game to our liking.

* font.lua

This file contains the font used in the game. We can replace this file with our own font if you wish.

* audio.lua

This file contains the audio files used in the game. The game currently uses six audio files:

a sound effect for when the bird flaps its wings,
a background music track,
a crash sound,
a sound for when you make scores,
a switch sound
a play sound.

We  can  also replace these files with our own audio files if we wish.

* image.lua

This file contains the image files used in the game. The game currently uses several image files for the bird,

The pipes
The cover 
The clouds
The background. 

* class.lua

This file contains the class system used in the game. It provides a simple way to define objects with properties and methods. This file is used by the object.lua file.

* object.lua

This file contains the code for the objects used in the game, such as the bird and the pipes. It defines their properties and methods. we can modify this file to change the behavior of the objects in the game.

### Credits

This game is based on the original Flappy Bird game by Dong Nguyen. The graphics and audio used in the game were sourced from various online resources.

















