#include "bullet.h"
#include<QList>
#include<enemy.h>
Bullet::Bullet()
{
    QTimer *timer=new QTimer();



    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(30);



}

void Bullet::move()
{
    QList<QGraphicsItem *> m=collidingItems();
    for(int i=0;i<collidingItems().size();i++){
        if(typeid (*(m[i]))==typeid (Enemy)){
            this->scene()->removeItem(m[i]);
            this->scene()->removeItem(this);
            delete this;
            delete m[i];
            return;
        }

    }


    this->setPos(this->x(),this->y()-10);
    if(this->y()<0-this->rect().height()){
       this->scene()->removeItem(this);
        delete this;

    }



}
