#include "Human.h"
#include <iostream>
#include <string>
using namespace std;

Human::Human(string &name){
    this->name = name;
}

char Human::makeMove(){
    cout << "Enter move: " << endl;
    char move;
    cin >> move;
    return move;
}

string Human::getName(){
    cout << "Enter name: " << endl;
    
}
