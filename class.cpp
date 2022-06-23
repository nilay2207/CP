#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
    int health;
    int level;

    Hero(){
        
    }

    Hero(int health,int level){

        this->health=health;
        this->level=level;

    }

    void setHealth(int h){
        health=h;
    }

    int getHealth(){
        return health;
    }

    void setLevel(int l){
        level=l;
    }

    int getLevel(){
        return level;
    }


};



int main(){

    // Hero h1;

    // h1.setHealth(5);
    // cout<<h1.getHealth();
    

    // Hero *b= new Hero;
    // (*b).setHealth(7);
    // cout<<b->getHealth();



    Hero h1(5,5);
    cout<<h1.getHealth()<<h1.getLevel();

    Hero *b=new Hero;

    b->setHealth(6);
    b->setLevel(6);
    cout<<b->getHealth()<<b->getLevel();

    
}