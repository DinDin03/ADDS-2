#include "Referee.h"
#include "Computer.h"
#include "Player.h"
#include "Human.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

    Human human; 
    Computer computer;
    Referee ref;

    human.getName();
    human.makeMove(); //human makes the first move

    Player* winner = ref.refGame(&human,&computer);\
    if(winner == nullptr){
        cout <<"It's a Tie" << endl;
    }
    else {
        cout << winner->getName() << " Wins" << endl;
    }


    return 0;
}