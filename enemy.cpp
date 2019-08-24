#include "enemy.h"
#include<stdlib.h>
#include<QDebug>
Enemy::Enemy()
{
this->setRect(0,0,100,100);

this->setPos(rand()%700,0);

QTimer *timer=new QTimer();


connect(timer,SIGNAL(timeout()),this,SLOT(move()));


timer->start(100);



}


void Enemy::move()
{

    if(this->y()>=this->scene()->height()){
        this->scene()->removeItem(this);
        delete this;
        if(health->gethealth()==0){

        }
        health->decrease();

        return;
    }else{

        this->setPos(this->x(),this->y()+10);
    }
}
