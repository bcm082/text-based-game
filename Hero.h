#pragma once
#include "Character.h"
#include <vector>
#include "Item.h"
#include "Monster.h"
struct Hero : public Character {
  int defensePower_;
  // Item* bag = new Item[3];
  std::vector<Item*> bag;
  int retreatCount_;
  int getDefensePower() const;
  void decreaseDefensePower(); 
  void setDefensePower(int dP);
  int getRetreatCount() const;
  void decreaseRetreatCount() ;
  bool anyItems() const; 
  bool isAlive() const; 
  int operator*(Monster& m) ;
  Hero(int hp, int aP, int dP, int rC); 
};

