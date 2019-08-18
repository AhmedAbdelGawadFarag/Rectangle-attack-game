#include <QApplication>
#include<QGraphicsRectItem>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<rectangle.h>
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    QGraphicsScene *scene=new QGraphicsScene();

    Rectangle *rect=new Rectangle();

    rect->setRect(0,0,100,100);

    rect->setFlag(QGraphicsItem::ItemIsFocusable);

    rect->setFocus();

    QGraphicsView *view=new QGraphicsView();

    scene->addItem(rect);

    view->setScene(scene);

    view->show();



    return a.exec();
}
