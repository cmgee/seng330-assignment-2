#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "GameEntity.h"
#include "Room.h"
#include "Item.h"

class Factory {

public:
	static GameEntity* make_game_entity(int user_input);

private:
	static GameEntity* game_entity_prototypes[3];

};

#endif // __FACTORY_H__