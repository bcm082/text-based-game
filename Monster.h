#pragma once
#include "Character.h"
struct Monster : public Character {
  void decreaseAttackPower();
  Monster(int hp, int aP);
};

