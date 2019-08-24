#include "health.h"
#include<QFont>
#include<QString>
Health::Health()
{
    this->setPos(0,28);
    score=4;
    setPlainText(QString("Health ")+ QString::number(score));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));

}

void Health::decrease()
{
 score--;
 setPlainText(QString("Health ")+ QString::number(score));

}

int Health::gethealth()
{
    return score;
}
