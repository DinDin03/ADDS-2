#ifndef HUMAN_H
#define HUMAN_H
#include <string>
using namespace std;
#include "Player.h"

class Human : public Player{
    private:
        string name;
    public:
        Human(const string& name = "Human");
        char makeMove() override;
        string getName() override;

};

#endif