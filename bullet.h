#ifndef BULLET_H
#define BULLET_H
#include<QGraphicsRectItem>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QKeyEvent>
#include<QObject>
#include<QTimer>
#include<score.h>
extern Score *score;

class Bullet :public QObject,public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bullet();

public slots:
    void move();
};

#endif // BULLET_H
