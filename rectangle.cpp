#include "rectangle.h"
#include<bullet.h>
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
    bull->setRect(this->x(),this->y(),10,30);
    this->scene()->addItem(bull);


    }




}
