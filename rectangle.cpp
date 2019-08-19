#include "rectangle.h"
#include<bullet.h>
#include<QDebug>
Rectangle::Rectangle()
{


}
void Rectangle::keyPressEvent(QKeyEvent *event){
    if(event->key()==Qt::Key_Right){
        if(this->x()<=this->scene()->width()-this->rect().width()){
            qDebug()<<this->x();

            this->setPos(this->x()+10,this->y());
        }

    } if(event->key()==Qt::Key_Left){
        if(this->x()>0){
            this->setPos(this->x()-10,this->y());

        }


    } if(event->key()==Qt::Key_Space){
    Bullet *bull=new Bullet;
    bull->setRect(0,0,10,30);

    this->scene()->addItem(bull);
qDebug()<<"rect x"<<this->x()<<" "<<this->y();

    bull->setPos(this->x(),this->y());

    qDebug()<<bull->x();




    }




}
