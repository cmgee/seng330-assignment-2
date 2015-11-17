#ifndef __GAMEENTITY_H__
#define __GAMEENTITY_H__

#include <string>
#include <iostream>

class GameEntity {

private:
    int id_;
    std::string name_;
    std::string description_;

public:
    GameEntity();
    GameEntity(int id, std::string name);
    GameEntity(int id, std::string name, std::string description);
    ~GameEntity();
    
    virtual GameEntity* Clone() = 0;

    void Print();
    void SetDescription(std::string description);

};

#endif // __GAMEENTITY_H__
