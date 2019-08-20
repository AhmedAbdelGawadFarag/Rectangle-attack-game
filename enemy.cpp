#include "enemy.h"
#include<stdlib.h>
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
    this->setPos(this->x(),this->y()+10);
}
