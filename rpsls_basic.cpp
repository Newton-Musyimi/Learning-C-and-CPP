/*
This is Rock-Papers-Scissors-Lizard-Spock;a spin-off ot the original RPS game that reduces the chance of player's having a tie.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
void rock(int computer);
void paper(int computer);
void scissors(int computer);
void lizard(int computer);
void spock(int computer);
bool game_loop(bool game);

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
  std::cout << "rock paper scissors lizard spock!\n";
  std::cout << "=================================\n";

  std::cout << "1) ROCK\n";
  std::cout << "2) PAPER\n";
  std::cout << "3) SCISSORS\n";
  std::cout << "4) LIZARD\n";
  std::cout << "5) SPOCK\n";

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
    case 4:
        outcome = "You have won, congratulations!";
        pc = "Lizard";
        break;
    case 5:
        outcome = "Computer wins!";
        pc = "Spock";
        break;
    default:
        std::cout <<"Invalid Input!<<std::endl";
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
    case 4:
        outcome = "Computer wins";
        pc = "Lizard";
        break;
    case 5:
        outcome = "You have won, congratulations!";
        pc = "Spock";
        break;
    default:
        std::cout <<"Invalid Input!<<std::endl";
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
    case 4:
        outcome = "You have won, congratulations!";
        pc = "Lizard";
        break;
    case 5:
        outcome = "Computer wins";
        pc = "Spock";
        break;
    default:
        std::cout <<"Invalid Input!<<std::endl";
        break;
  }
  std::cout <<"You picked Scissors and the computer picked "<<pc<<"\n"<<outcome<<std::endl;
}//When user is scissors
void lizard(int computer){
  std::string outcome;
  std::string pc;
  switch(computer){
    case 1:
        outcome = "Computer wins";
        pc = "Rock";
        break;
    case 2:
        outcome = "You have won, congratulations!";
        pc = "Paper";
        break;
    case 3:
        outcome = "Computer wins";
        pc = "Scissors";
        break;
    case 4:
        outcome = "It is a tie";
        pc = "Lizard";
        break;
    case 5:
        outcome = "You have won, congratulations!";
        pc = "Spock";
        break;
    default:
        std::cout <<"Invalid Input!<<std::endl";
        break;
  }
  std::cout <<"You picked Lizard and the computer picked "<<pc<<"\n"<<outcome<<std::endl;
}//When user is lizard

void spock(int computer){
  std::string outcome;
  std::string pc;
  switch(computer){
    case 1:
        outcome = "You have won, congratulations!";
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
    case 4:
        outcome = "Computer wins";
        pc = "Lizard";
        break;
    case 5:
        outcome = "It is a tie";
        pc = "Spock";
        break;
    default:
        std::cout <<"Invalid Input!<<std::endl";
        break;
  }
  std::cout <<"You picked Spock and the computer picked "<<pc<<"\n"<<outcome<<std::endl;
}//When the user is spock
