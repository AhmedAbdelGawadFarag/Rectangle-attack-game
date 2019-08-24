#ifndef SCORE_H
#define SCORE_H

#include<QGraphicsRectItem>
#include<QGraphicsItem>
#include<QGraphicsScene>
class Score : public QGraphicsTextItem
{
public:
    Score(QGraphicsItem *parent=nullptr);
    void increase();
    int getscore();
private:
    int score;
};

#endif // SCORE_H
