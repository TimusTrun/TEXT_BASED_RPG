#ifndef __ATTACKSTRATEGY_TEST_H__
#define __ATTACKSTRATEGY_TEST_H__


#include "../AttackStrategy/ArcherAttack.h"
#include "../AttackStrategy/KnightAttack.h"
#include "../AttackStrategy/MageAttack.h"
#include "../Character/Archer.h"
#include "../Character/Knight.h"
#include "../Character/Mage.h"

class ArcherAttack;
class KnightAttack;
class MageAttack;


TEST(AttackStrategyTest, AttackStrategyArcherLv1vsdrake) {
  Drake* drake1 = new Drake(1); //def = 3
  Archer* archer1 = new Archer("Scott", ARCHER);
  EXPECT_EQ(archer1->attack(drake1), 4);
}

TEST(AttackStrategyTest, AttackStrategyMageLv1vstroll) {
  Troll* troll1 = new Troll(1); //def = 4
  Mage* mage1 = new Mage("Scott", MAGE);
  EXPECT_EQ(mage1->attack(troll1), 2);
}

TEST(AttackStrategyTest, AttackStrategyKnightLv1vswolf) {
  Wolf* wolf1 = new Wolf(1); //def = 2
  Knight* knight1 = new Knight("Scott", KNIGHT);
  EXPECT_EQ(knight1->attack(wolf1), 2);
}

TEST(AttackStrategyTest, AttackStrategyArcherLv5vswolf) {
  Wolf* wolf1 = new Wolf(1); //def = 2
  Archer* archer1 = new Archer("Scott", ARCHER);
  archer1->setcurrXP(550);
  EXPECT_EQ(archer1->attack(wolf1), 41);
}

TEST(AttackStrategyTest, AttackStrategyMageLv5vsyeti) {
  Yeti* yeti1 = new Yeti(1); //def = 2
  Mage* mage1 = new Mage("Scott", MAGE);
  mage1->setcurrXP(550);
  EXPECT_EQ(mage1->attack(yeti1), 13);
}

TEST(AttackStrategyTest, AttackStrategyKnightLv5vstroll) {
  Troll* troll1 = new Troll(1); //def = 4
  Knight* knight1 = new Knight("Scott", KNIGHT);
  knight1->setcurrXP(550);
  EXPECT_EQ(knight1->attack(troll1), 3);
}

#endif
