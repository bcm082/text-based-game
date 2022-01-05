#pragma once
#include "Room.h"
#include "Hero.h"
struct Game {
  Room* currentRoom;
  Hero* Heroname = new Hero(5, 3, 4, 1);
  void run();
  void createMap();
  Game() { createMap(); }
};

