
all: GameEntity

GameEntity: GameEntity.o
	g++ GameEntity.o -o GameEntity
    
GameEntity.o:GameEntity.cpp GameEntity.h Factory.h
	g++ -c -g GameEntity.cpp
    
clean: 
	-rm GameEntity.o GameEntity GameEntity.exe