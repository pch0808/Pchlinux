#include "Gun.h"
#include "Soldier.h"

void test(){
    Soldier s("pch");
    s.addGun(new Gun("ak47"));
    s.addBullet(20);
    s.fire();

}

int main(){
    test();
    return 0;
}