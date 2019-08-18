#include "bullet.h"

Bullet::Bullet()
{
    QTimer *timer=new QTimer();



    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(40);



}

void Bullet::move()
{
    this->setPos(this->x(),this->y()-10);

}
