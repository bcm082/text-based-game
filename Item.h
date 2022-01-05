#pragma once
struct Item {
  int type_;  // 0-hp, 1-defense
  int value_;
  bool isHP() const;
  bool isDefense() const;
  int getValue() const ;
  int getType() const ;
  Item(int type, int value) : type_(type), value_(value) {}
  Item() {}
};


