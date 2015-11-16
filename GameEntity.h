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
    GameEntity(int id, std::string name);
    GameEntity(int id, std::string name, std::string description);
    ~GameEntity();
    
    void Print();

    int GetId();
	std::string GetName();
    std::string GetDescription();
    
    void setId(int id);
    void setName(std::string name);
    void SetDescription(std::string description);

};

#endif // __GAMEENTITY_H__
