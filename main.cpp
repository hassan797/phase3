#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QTimer>
#include "disk.h"
#include "diskscene.h"




int main(int argc, char *argv[]){

    QApplication a(argc, argv);

    // create a scene
    QGraphicsScene * scene = new QGraphicsScene();
    DiskItem *item = new DiskItem() ;
//    disk *disc1 = new disk(1) ;
//    disk *disc2 = new disk(2) ;
//    disk *disc3 = new disk(3) ;
    item->setPos(0,0) ;
    scene->setSceneRect(0,0,1000,1000);
    scene->addItem(item) ;
    item->setPos(0,0) ;
    scene->addItem(item->disk1) ;
    scene->addItem(item->disk2) ;
    scene->addItem(item->disk3) ;


    item->disk1->setPos(150, 400) ;
    item->disk2->setPos(300, 400) ;
    item->disk3->setPos(450, 400) ;

//    MyRect * player = new MyRect();
//    player->setRect(0,0,100,100); // change the rect from 0x0 (default) to 100x100 pixels

    // add the item to the scene
//    scene->addItem(player);

    // make rect focusable
//    item->disk1->setFlag(QGraphicsItem::ItemIsFocusable);
//    item->disk1->setFocus();

    item->setFlag(QGraphicsItem::ItemIsFocusable);
    item->setFocus();

//    scene->setFocusOnTouch(true);

    // create a view to visualize the scene
    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
//    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    view->show();
    view->setFixedSize(1400,1400);


//    player->setPos(view->width()/2,view->height() - player->rect().height());

    // spawn enemies
//    QTimer * timer = new QTimer();
//    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
//    timer->start(2000);

    return a.exec();
}
