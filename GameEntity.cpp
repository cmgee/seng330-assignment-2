#include "GameEntity.h"

#include <iostream>
#include <string>

GameEntity::GameEntity() {
    id_ = 0;
    name_ = "";
    description_ = "";

    std::cout << "Created an entity..." << std::endl;
}

GameEntity::GameEntity(int id, std::string name) {
    id_ = id;
    name_ = name;
    description_ = "";

    std::cout << "Created an entity..." << std::endl;
}

GameEntity::GameEntity(int id, std::string name, std::string description) {
    id_ = id;
    name_ = name;
    description_ = description;

    std::cout << "Created an entity..." << std::endl;
}

GameEntity::~GameEntity() {
    std::cout << "Destroyed an entity..." << std::endl;
}

int GameEntity::GetId() {
    return id_;
}

std::string GameEntity::GetName() {
	return name_;
}

std::string GameEntity::GetDescription() {
    return description_;
}

void GameEntity::SetDescription(std::string description) {
    description_ = description;
}

void GameEntity::Print() {
    //std::cout << description_ << std::endl;
    std::cout << "The description_ for the thing" << std::endl;
}

