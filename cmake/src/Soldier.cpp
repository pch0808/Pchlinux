#include <Soldier.h>

Soldier::Soldier(std::string type){
    this->name=type;
    this->_ptr_gun=nullptr;
}

void Soldier::addGun(Gun *ptr_gun){
    this->_ptr_gun=ptr_gun;
}

void Soldier::addBullet(int num){
    this->_ptr_gun->addbullet(num);
}

bool Soldier::fire(){
    return this->_ptr_gun->shoot();
}

Soldier::~Soldier(){
    if (this->_ptr_gun==nullptr)
    {
        return;
    }
    delete this->_ptr_gun;
    this->_ptr_gun=nullptr;
    return ;
    
}