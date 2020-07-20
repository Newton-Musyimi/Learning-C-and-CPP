# Learning-C-and-CPP
This repository contains some of the programs I am developing while learning C and C++ in school and online.

## Compiling and Running
To compile the file, `g++ <filename.cpp>`

This compiles to a **a.exe** file

To run the file `./a.exe`

To compile with a custom executable file name, `g++ -o <customname.exe> <filename.cpp>`

## PROJECT A: ROCK, PAPER, SCISSORS ++

### Program 1: Rock, Paper, Scissors, Go!
I made the standard version of Rock, Paper, Scissors(RPS)

The rules are simple:
1.  There are 3 options(1 to 3)
2.  You can only pick one option during a match
3.  When prompted, you will enter its number into the console

The options and their abilities are:
1. Rock - Crushes Scissors
2. Paper - Covers Rock
3. Scissors - Cuts paper

### Program 2: Rock, Paper, Scissors + Lizard + Spock (EXTENDED)
This is an extended version of RPS based on notes from [Sam Kass](http://www.samkass.com/theories/RPSSL.html).

It introduces *Lizard* and *Spock* to the standard version.

The rules stay the same but there are 2 additional options and abilities:
4. Lizard - Poisons Spock and eats Paper
5. Spock - Smashes Scissors and vaporizes Rock

### Program 3: Rock, Paper, Scissors (EXTENDED) using a Class
For the third and final version of the game, I switched up gears a bit and split it into 3 files:
1. [The main file](https://github.com/Newton-Musyimi/Learning-C-and-CPP/blob/master/Rock%20Paper%20Scissors%20Extended/rpslsGAME.cpp) which initializes the game and starts it.
2. [The header file](https://github.com/Newton-Musyimi/Learning-C-and-CPP/blob/master/Rock%20Paper%20Scissors%20Extended/rpsls.hpp) which contains the class definition and the class members' declaration. 
3. [The logic file](https://github.com/Newton-Musyimi/Learning-C-and-CPP/blob/master/Rock%20Paper%20Scissors%20Extended/rpsls.cpp) Where the game logic is coded. Also where the methods in the header file are defined.

I also moved the code to its own [folder](https://github.com/Newton-Musyimi/Learning-C-and-CPP/tree/master/Rock%20Paper%20Scissors%20Extended) to make it easier to differentiate from Program 2.