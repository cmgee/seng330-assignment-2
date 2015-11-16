// Main.cpp
#include "GameEntity.h"
#include "Factory.h"

#include <iostream>
#include <vector>
#include <string>


int main (int argc, char* argv[]) {

	int user_input;
	std::string entity_name;
	std::vector<GameEntity*> game_entities;


//	while (true) {
		std::cout << "Choose from the following options:" << std::endl;
		std::cout << "1. Make a room" << std::endl;
		std::cout << "2. Make a player" << std::endl;
		std::cout << "0. Go" << std::endl;

		std::cin >> user_input;

		if (user_input == 0) {
	//		break;
		} else {
			
			std::cout << "Enter a name for the object: ";
			std::cin >> entity_name;

			GameEntity* Entity = Factory::make_game_entity(user_input);	
			Entity->SetDescription(entity_name);

			game_entities.push_back(Entity);	


			for (int i=0; i < game_entities.size(); i++) {
				game_entities[i]->Print();
			}

			//for (int i=0; i < game_entities.size(); i++) {
			//	delete game_entities[i];
			//}

			/*
			// DEBUG
			if (user_input == 1) {
				std::cout << "Making a room called " << entity_name << std::endl;

			} else if (user_input == 2) {
				std::cout << "Making a player called " << entity_name << std::endl;
			} */

		}

		







//	}


}