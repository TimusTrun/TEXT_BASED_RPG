#ifndef __SILKPANTS_H__
#define __SILKPANTS_H__

#include "armor.h"
#include <string>

class SilkPants : public Armor {
        private:
                string name;
        public:
                SilkPants() : Armor(){ name = " ";}
                SilkPants(int lvl, int rarity, string n) : Armor(lvl, rarity, 1){ name = n;}
                string getName() { return name;}
};

#endif //__SILKPANTS_H__

