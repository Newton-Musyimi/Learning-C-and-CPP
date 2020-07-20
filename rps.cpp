/*
This is Rock-Papers-Scissors
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
void rock(int computer);
void paper(int computer);
void scissors(int computer);

int main(){
  srand(time(NULL));
  bool game = true;
  while(game){
    game = game_loop(game);
  }
  
}

bool game_loop(bool game){
  
  int computer = rand() % 5 + 1;
  int user = 0;
  std::cout << "=================================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "=================================\n";

  std::cout << "1) ROCK\n";
  std::cout << "2) PAPER\n";
  std::cout << "3) SCISSORS\n";

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
    default:
        std::cout <<"Invalid Input!<<std::endl";
        break;    
  }
  std::cout<<"Play again? (1=Yes, 0=No): ";
  std::cin >> game;
  return game;
}

void rock(int computer){
  std::string outcome;
  std::string pc;
  switch(computer){
    case 1:
        outcome = "It is a tie";
        pc = "Rock";
        break;
    case 2:
        outcome = "Computer wins";
        pc = "Paper";
        break;
    case 3:
        outcome = "You have won, congratulations!";
        pc = "Scissors";
        break;
    default:
        std::cout <<"Invalid Input!"<<std::endl;
        break;
  }
  std::cout <<"You picked Rock and the computer picked "<<pc<<"\n"<<outcome<<std::endl;
}//When user is rock

void paper(int computer){
  std::string outcome;
  std::string pc;
  switch(computer){
    case 1:
        outcome = "You have won, congratulations!";
        pc = "Rock";
        break;
    case 2:
        outcome = "It is a tie";
        pc = "Paper";
        break;
    case 3:
        outcome = "Computer wins!";
        pc = "Scissors";
        break;
    default:
        std::cout <<"Invalid Input!"<<std::endl;
        break;
  }
  std::cout <<"You picked Paper and the computer picked "<<pc<<"\n"<<outcome<<std::endl;
}//When user is paper

void scissors(int computer){
  std::string outcome;
  std::string pc;
  switch(computer){
    case 1:
        outcome = "Computer Wins";
        pc = "Rock";
        break;
    case 2:
        outcome = "You have won, congratulations!";
        pc = "Paper";
        break;
    case 3:
        outcome = "It is a tie";
        pc = "Scissors";
        break;
    default:
        std::cout <<"Invalid Input!"<<std::endl;
        break;
  }
  std::cout <<"You picked Scissors and the computer picked "<<pc<<"\n"<<outcome<<std::endl;
}//When user is scissors

