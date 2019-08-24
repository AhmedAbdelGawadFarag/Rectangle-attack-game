#ifndef ENEMY_H
#define ENEMY_H
#include<QGraphicsRectItem>
#include<QGraphicsScene>
#include<QObject>
#include<QTimer>
#include<health.h>
extern Health *health;
class Enemy:public QObject,public QGraphicsRectItem
{
    Q_OBJECT
public:
    Enemy();
public slots :
    void move();
};

#endif // ENEMY_H
