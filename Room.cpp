#include "Room.h"


Room::Room() {
	std::cout << "Created a room..." << std::endl;
}

Room::Room(int id, std::string name) : GameEntity(id, name) {
	std::cout << "Created a room..." << std::endl;
}

Room::Room(int id, std::string name, std::string description) : GameEntity(id, name, description) {
	std::cout << "Created a room..." << std::endl;
}

Room::~Room(  ) {
	std::cout << "Destroyed a room..." << std::endl;
}

Room* Room::Clone() {
	std::cout << "Cloned a room" << std::endl;
	return new Room;
}
