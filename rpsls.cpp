//Libraries requires for the game including the header file
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "rpsls.hpp" //The function declarations

//Declarations - moved to header file

//The game loop
bool rpsls::game_loop(bool game){
  bool get_instructions = false;
  std::cout<<"Would you like to see the game instructions once again? (1=Yes, 0=No): ";
  std::cin >> get_instructions;
  if(get_instructions){
      game_instructions();
  }
  int computer = rand() % 5 + 1;
  int user = 0;
  std::cout << "=================================\n
                rock paper scissors lizard spock!\n
                =================================\n";

  std::cout << "When you get the 'GO' pick one of the options below:\n
                1) ROCK\n
                2) PAPER\n
                3) SCISSORS\n
                4) LIZARD\n
                5) SPOCK\n";
  
  std::cout << "Rock, Paper, Scissors, Lizard, Spock, GO!\n
                Enter number: ";
  std::cin>> user;
  switch(user){
    case 1:
        rock(computer);
        break;
    case 2:
        paper(computer);
        break;
    case 3:
        scissors(computer);
        break;
    case 4:
        lizard(computer);
        break;
    case 5:
        spock(computer);
        break;
    default:
        std::cout <<"Invalid Input!<<std::endl";
        break;
  }
  std::cout<<"Play again? (1=Yes, 0=No): ";
  std::cin >> game;
  return game;
}

void rpsls::game_instructions(){
  std::cout<< "\tROCK PAPER SCISSORS LIZARD SPOCK\n
  \t\tWelcome to the Rock-Paper-Scissors-Lizard-Spock text-based video game\n
  You will play against the PC and you get to choose either rock, paper, scissors, lizard or spock.\n
  The rules are simple:\n
  \ta.\tThere are 5 options(1 to 5).\n
  \tb.\tYou can only pick one option during a match.\n
  \tc.\tWhen prompted, you will enter its number (position on the list) into the console.\n
 \t\t\t For example, if your choice is LIZARD, you will enter 4.\n
  \t1)\tRock\t\t- Crushes Scissors and crushes Lizard\n
  \t2)\tPaper\t\t- Covers Rock and disproves Spock\n
  \t3)\tScissors\t\t- Cuts paper and decapitates lizard\n
  \t4)\tLizard\t\t- Poisons Spock and eats Paper\n
  \t5)\tSpock\t\t- Smashes Scissors and vaporizes Rock\n\n
  Both you and the PC will pick a 'hand' and the winner will be announced\n
  You are allowed to play as many times as possible;there will be a prompt where you enter 1 for YES and 0 for NO\n
  \t\t\tENJOY!!\n\n\n
  Based on Notes from SAM KASS (http://www.samkass.com/theories/RPSSL.html)
  "
}
void rpsls::counter(){
  game_count++;
}
int rpsls::game_count(){
  return game_count;
}
void rpsls::rock(int computer);
void rpsls::paper(int computer);
void rpsls::scissors(int computer);
void rpsls::lizard(int computer);
void rpsls::spock(int computer);
void rpsls::count(int count)