#pragma once
#include <iostream>
#include <map>
#include "Item.h"
#include "Monster.h"
struct Room {
  std::string name_;
  Room* east;
  Room* west;
  Room* north;
  Room* south;
  Monster* roomMonster_;
  Item* roomItem_;
  bool exit;

  std::map<std::string, std::string> available_rooms;
  void find_paths();  // method that finds all available paths from current room
  void setName(std::string name);
  std::string getName() const;
  void setEastRoom(Room* e);
  void setWestRoom(Room* w);
  void setNorthRoom(Room* n);
  void setSouthRoom(Room* s);
  Room* getEastRoom();
  Room* getWestRoom();
  Room* getNorthRoom();
  Room* getSouthRoom();
  void setRoomMonster(Monster* m);
  Monster* getRoomMonster() const;
  void setRoomItem(Item* i);
  Item* getRoomItem() const;
  bool isExit();
  Room(std::string name, Room* e, Room* w, Room* s, Room* n, Monster* m,
       Item* i);
  Room(std::string name, Room* e, Room* w, Room* s, Room* n, Monster* m);
  Room(std::string name, Room* e, Room* w, Room* s, Room* n, Item* i);
  Room(std::string name, Room* e, Room* w, Room* s, Room* n, bool exit);
};
