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

    string name = human.getName();
    Player* winner = ref.refGame(&human,&computer);
    if(winner == nullptr){
        cout <<"It's a Tie" << endl;
    }
    else if (winner == &human) {
        cout << name << " Wins" << endl;
    }
    else if (winner == &computer) {
        cout << "Computer Wins" << endl;
    }


    return 0;
}