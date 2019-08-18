#include "rectangle.h"
#include<bullet.h>
#include<QDebug>
Rectangle::Rectangle()
{


}
void Rectangle::keyPressEvent(QKeyEvent *event){
    if(event->key()==Qt::Key_Right){
        this->setPos(this->x()+10,this->y());

    }else if(event->key()==Qt::Key_Left){
        this->setPos(this->x()-10,this->y());


    }else if(event->key()==Qt::Key_Space){
    Bullet *bull=new Bullet;
    bull->setRect(0,0,10,30);

    this->scene()->addItem(bull);
qDebug()<<"rect x"<<this->x()<<" "<<this->y();

    bull->setPos(this->x(),this->y());

    qDebug()<<bull->x();




    }




}
