#pragma once
#include <string>
#include <Gun.h>

class Soldier {
    private:
        std::string name;
        Gun *_ptr_gun;
    public:
        Soldier(std::string type);
        ~Soldier();
        void addGun(Gun *ptr_gun);
        void addBullet(int num);
        bool fire();
    };