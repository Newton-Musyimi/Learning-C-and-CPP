/*
This is Rock-Papers-Scissors-Lizard-Spock;a spin-off ot the original RPS game that reduces the chance of player's having a tie.
*/

//Libraries requires for the game
#include <iostream>
#include <cstdlib>
#include <ctime>

//Declare some of the game functions
bool game_loop(bool game);
void rock(int computer);
void paper(int computer);
void scissors(int computer);
void lizard(int computer);
void spock(int computer);

int main(){
  srand(time(NULL));
  bool game = true;
  while(game){
    game = game_loop(game);
  }
}

//The game loop
bool game_loop(bool game){
  
  int computer = rand() % 5 + 1;
  int user = 0;
  std::cout << "=================================\n";
  std::cout << "rock paper scissors lizard spock!\n";
  std::cout << "=================================\n";

  std::cout << "1) ROCK\n";
  std::cout << "2) PAPER\n";
  std::cout << "3) SCISSORS\n";
  std::cout << "4) LIZARD\n";
  std::cout << "5) SPORK\n";

  std::cout << "shoot! ";
  std::cin>> user;
  std::cout<<computer<<std::endl;
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