#include "Monster.h"

void Monster::decreaseAttackPower() {
  attackPower_--;
  if (attackPower_ < 1) attackPower_ = 1;
}
Monster::Monster(int hp, int aP) {
  hp_ = hp;
  attackPower_ = aP;
}
