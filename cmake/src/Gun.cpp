#include "Gun.h"
#include "iostream"
using namespace std;


void Gun::addbullet(int bulletnum){
    this->_bullet_count+=bulletnum;
}

bool Gun::shoot(){
    if(this->_bullet_count==0){
        cout<<"there is no bullet"<<endl;
        return false;
    }else{
        this->_bullet_count--;
        cout<<"Sucessfully"<<endl;
        return true;
    }
    
}
Gun::Gun(std::string type)
{
    this->_type=type;
    this->_bullet_count=0;
}

Gun::~Gun()
{
}