#pragma once
#include <string>
class Gun
{
private:
    int _bullet_count;
    std::string _type;
public:
    Gun(std::string type);
    void addbullet(int bulletnum);
    bool shoot();
    ~Gun();
};


