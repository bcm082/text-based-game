#include "Hero.h"

int Hero ::getDefensePower() const { return defensePower_; }
void Hero ::decreaseDefensePower() {
  defensePower_--;
  if (defensePower_ < 1) defensePower_ = 1;
}
void Hero:: setDefensePower(int dP) { defensePower_ = dP; }
int Hero ::getRetreatCount() const { return retreatCount_; }
void Hero:: decreaseRetreatCount() {
  retreatCount_--;
  if (retreatCount_ < 0) retreatCount_ = 0;
}
bool Hero:: anyItems() const {
  for (int i = 0; i < 3; ++i)
    if (bag[i]->getValue() != 0) return true;  // mozda greska
  return false;
}
bool Hero:: isAlive() const {
  if (hp_ > 0)
    return true;
  else
    return false;
}
int Hero :: operator*(Monster& m) {
  m.hp_ = m.hp_ - attackPower_ < 0 ? 0 : m.hp_ - attackPower_;
  hp_ = hp_ - m.attackPower_ / defensePower_;
  m.decreaseAttackPower();
  this->decreaseDefensePower();
  if (hp_ == 0)
    return -1;  // hero died
  else if (m.hp_ == 0)
    return 1;  // monster died;
  else
    return 0;  // no one died
}
Hero :: Hero(int hp, int aP, int dP, int rC) {
  hp_ = hp;
  attackPower_ = aP;
  defensePower_ = dP;
  retreatCount_ = rC;
  Item* item = new Item();
  for (auto i = 0; i < 3; ++i) bag.push_back(item);
}

