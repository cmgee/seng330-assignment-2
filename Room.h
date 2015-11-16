#ifndef __ROOM_H__
#define __ROOM_H__

#include <iostream>
#include "GameEntity.h"

class Room : public GameEntity {

private:

public:
	Room(int id, std::string name);
	Room(int id, std::string name, std::string description);
	~Room(  );

};

#endif // __ROOM_H__