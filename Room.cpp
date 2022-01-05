#include "Room.h"

void Room::find_paths() {  // method that finds all available paths from current
                           // room
  if (this->getEastRoom() != NULL)
    available_rooms["East"] = this->getEastRoom()->getName();
  if (this->getWestRoom() != NULL)
    available_rooms["West"] = this->getWestRoom()->getName();
  if (this->getNorthRoom() != NULL)
    available_rooms["North"] = this->getNorthRoom()->getName();
  if (this->getSouthRoom() != NULL)
    available_rooms["South"] = this->getSouthRoom()->getName();
}
void Room::setName(std::string name) { name_ = name; }
std::string Room::getName() const { return name_; }
void Room::setEastRoom(Room* e) { east = e; }
void Room::setWestRoom(Room* w) { west = w; }
void Room::setNorthRoom(Room* n) { north = n; }
void Room::setSouthRoom(Room* s) { south = s; }
Room* Room::getEastRoom() { return east; }
Room* Room::getWestRoom() { return west; }
Room* Room::getNorthRoom() { return north; }
Room* Room::getSouthRoom() { return south; }
void Room::setRoomMonster(Monster* m) { roomMonster_ = m; }
Monster* Room::getRoomMonster() const { return roomMonster_; }
void Room::setRoomItem(Item* i) { roomItem_ = i; }
Item* Room::getRoomItem() const { return roomItem_; }
bool Room::isExit() { return exit; }  // mozda greska
Room::Room(std::string name, Room* e, Room* w, Room* s, Room* n, Monster* m,
           Item* i) {
  name_ = name;
  east = e;
  west = w;
  south = s;
  north = n;
  roomMonster_ = m;
  roomItem_ = i;
}
Room::Room(std::string name, Room* e, Room* w, Room* s, Room* n, Monster* m) {
  name_ = name;
  east = e;
  west = w;
  south = s;
  north = n;
  roomMonster_ = m;
}
Room::Room(std::string name, Room* e, Room* w, Room* s, Room* n, Item* i) {
  name_ = name;
  east = e;
  west = w;
  south = s;
  north = n;
  roomItem_ = i;
}
Room::Room(std::string name, Room* e, Room* w, Room* s, Room* n, bool exit) {
  name_ = name;
  east = e;
  west = w;
  south = s;
  north = n;
}

