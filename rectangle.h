#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<QGraphicsRectItem>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QKeyEvent>

class Rectangle : public QGraphicsRectItem
{
public:
    Rectangle();
    void keyPressEvent(QKeyEvent *event);
};

#endif // RECTANGLE_H
