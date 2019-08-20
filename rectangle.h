#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<QGraphicsRectItem>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QKeyEvent>
#include<QObject>
#include<enemy.h>
class Rectangle :public QObject ,public QGraphicsRectItem
{
    Q_OBJECT
public:
    Rectangle();

    void keyPressEvent(QKeyEvent *event);
public slots:
    void SpawnEnemies();
};

#endif // RECTANGLE_H
