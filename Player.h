#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player{
    public:
        virtual ~Player();
        virtual char makeMove() = 0;
        virtual string getName() = 0;
        
};

#endif PLAYER_H