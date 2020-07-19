#include "rpsls.hpp"

int main(){
  srand(time(NULL));
  bool game = true;
  while(game){
    game = game_loop(game);
  }
}