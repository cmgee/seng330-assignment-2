#include "Factory.h"


GameEntity* Factory::game_entity_prototypes[] = { 0, new Room, new Item };

GameEntity* Factory::make_game_entity(int user_input) {
	return game_entity_prototypes[user_input]->Clone();
} 


