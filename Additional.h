#pragma once
#include "Game.h"
void show_room_info(Room* currentRoom) {
  std::cout << "= Room's information =" << std::endl;
  std::cout << "Name: " << currentRoom->getName() << std::endl;
  if (currentRoom->getRoomMonster() == NULL)
    std::cout << "Monster: None " << std::endl;
  else
    std::cout << "Monster: HP/" << currentRoom->getRoomMonster()->getHP()
              << " AP/" << currentRoom->getRoomMonster()->getAttackPower()
              << std::endl;
  if (currentRoom->getRoomItem() == nullptr)
    std::cout << "Item: None " << std::endl;
  else {
    if (currentRoom->getRoomItem()->getType() == 0)
      std::cout << "Item: Type/HP Value/"
                << currentRoom->getRoomItem()->getValue() << std::endl;
    else
      std::cout << "Item: Type/Defense Value/"
                << currentRoom->getRoomItem()->getValue() << std::endl;
  }
}

void draw(Room* currentRoom) {
  std::string name = currentRoom->getName();
  std::string d3 = "      []  ";
  std::string b2_d2 = "  []  []  ";
  std::string a1_b1_c1_d1_e1 = "[][][][][]";
  std::string c2 = "    []    ";
  if (name == "D3")
    d3 = "      [x]  ";
  else if (name == "B2")
    b2_d2 = "  [x]  []  ";
  else if (name == "D2")
    b2_d2 = "  []  [x]  ";
  else if (name == "Start room")
    a1_b1_c1_d1_e1 = "[x][][][][]";
  else if (name == "B1")
    a1_b1_c1_d1_e1 = "[][x][][][]";
  else if (name == "C1")
    a1_b1_c1_d1_e1 = "[][][x][][]";
  else if (name == "D1")
    a1_b1_c1_d1_e1 = "[][][][x][]";
  else if (name == "E1")
    a1_b1_c1_d1_e1 = "[][][][][x]";
  else if (name == "C2")
    c2 = "    [x]    ";

  std::cout << "Lolo's adventure!" << std::endl;
  std::cout << "=========================================" << std::endl;
  std::cout << d3 << std::endl;
  std::cout << b2_d2 << std::endl;
  std::cout << a1_b1_c1_d1_e1 << std::endl;
  std::cout << c2 << std::endl;
}
void show_hero_status(Hero* Heroname) {
  std::cout << "\n* Lolo: HP/" << Heroname->getHP() << " : AP/"
            << Heroname->getAttackPower() << " : DP/"
            << Heroname->getDefensePower() << " : RC/"
            << Heroname->getRetreatCount() << std::endl;
}
void show_monster_status(Monster* m) {
  std::cout << "\n* Monster: HP/" << m->getHP() << " : AP/"
            << m->getAttackPower() << std::endl;
}

