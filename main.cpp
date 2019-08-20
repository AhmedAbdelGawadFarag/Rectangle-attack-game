#include <QApplication>
#include<QGraphicsRectItem>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<rectangle.h>
#include<enemy.h>
#include<QObject>
int main(int argc, char *argv[])
{


    QApplication a(argc, argv);


    QGraphicsScene *scene=new QGraphicsScene();


    Rectangle *rect=new Rectangle();


    Enemy *enemy=new Enemy();


    scene->addItem(enemy);


    rect->setFlag(QGraphicsItem::ItemIsFocusable);


    rect->setFocus();


    QGraphicsView *view=new QGraphicsView();


    scene->addItem(rect);


    rect->setRect(0,0,100,100);


    view->setScene(scene);


    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    view->show();


    view->setFixedSize(800,600);


    scene->setSceneRect(0,0,800,600);


    rect->setPos(view->width()/2,view->height()-rect->rect().height());

    QTimer *timer=new QTimer();

    QObject::connect(timer,SIGNAL(timeout()),rect,SLOT(SpawnEnemies()));



    timer->start(2000);

    return a.exec();
}
