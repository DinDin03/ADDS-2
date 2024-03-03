#include "Human.h"
#include <iostream>
#include <string>
using namespace std;

Human::Human(const string &name){
    this->name = name;
    //cout << "Human created" << endl;
}

char Human::makeMove(){
    cout << "Enter move: ";
    char move;
    cin >> move;
    cout << endl;
    return move;
}

string Human::getName(){
    cout << "Enter player name: ";
    cin >> name;
    cout << endl;
    return name;
}

