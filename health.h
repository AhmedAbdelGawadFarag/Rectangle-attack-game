#ifndef HEALTH_H
#define HEALTH_H
#include<QGraphicsItem>
#include<QGraphicsTextItem>
class Health:public QGraphicsTextItem
{
public:
    Health();
    void decrease();
    int gethealth();
private:
    int score;
};

#endif // HEALTH_H
