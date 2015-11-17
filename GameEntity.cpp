#include "GameEntity.h"
#include "Factory.h"

#include <iostream>
#include <string>
#include <vector>


GameEntity::GameEntity() {
    id_ = 0;
    name_ = "";
    description_ = "";
// DEBUG   std::cout << "Created an entity..." << std::endl;
}

GameEntity::GameEntity(int id, std::string name) {
    id_ = id;
    name_ = name;
    description_ = "";
// DEBUG   std::cout << "Created an entity..." << std::endl;
}

GameEntity::GameEntity(int id, std::string name, std::string description) {
    id_ = id;
    name_ = name;
    description_ = description;
// DEBUG   std::cout << "Created an entity..." << std::endl;
}

GameEntity::~GameEntity() {
    std::cout << "Destroyed an entity..." << std::endl;
}

void GameEntity::SetDescription(std::string description) {
    description_ = description;
}

void GameEntity::Print() {
    std::cout << description_ << std::endl;    
}



int main (int argc, char* argv[]) {

    int user_input;
    std::string entity_name;
    std::vector<GameEntity*> game_entities;


    while (true) {
        std::cout << "Choose from the following options:" << std::endl;
        std::cout << "1. Make a room" << std::endl;
        std::cout << "2. Make an item" << std::endl;
        std::cout << "0. Go" << std::endl;
        std::cin >> user_input;

        if (user_input == 0) {
            break;
        } else {            
            std::cout << "Enter a name for the object: ";
            std::cin >> entity_name;

            GameEntity* Entity = Factory::make_game_entity(user_input); 
            Entity->SetDescription(entity_name);

            game_entities.push_back(Entity);   
        } 
    }

    std::cout << "---------------------------------------------\n";

    for (int i=0; i < game_entities.size(); i++) {
        game_entities[i]->Print();
    }
}



Room::Room() {
// DEBUG   std::cout << "Created a room..." << std::endl;
}

Room::Room(int id, std::string name) : GameEntity(id, name) {
    std::cout << "Created a room..." << std::endl;
}

Room::~Room(  ) {
    std::cout << "Destroyed a room..." << std::endl;
}

Room* Room::Clone() {
    std::cout << "* * * Cloned a room * * *" << std::endl;
    return new Room;
}



Item::Item() {
// DEBUG   std::cout << "Created an item..." <<std::endl;
}

Item::Item(int id, std::string description) : GameEntity(id, description) {
    std::cout << "Created an item..." << std::endl;
}

Item* Item::Clone() {
    std::cout << "* * * Cloned an item * * *" << std::endl;
    return new Item;
}



GameEntity* Factory::game_entity_prototypes[] = { 0, new Room, new Item };

GameEntity* Factory::make_game_entity(int user_input) {
    return game_entity_prototypes[user_input]->Clone();
} 





