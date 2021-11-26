#include "baddisk.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QList>
#include <stdlib.h> // rand() -> really large int

baddisk::baddisk(): QObject(), QGraphicsPixmapItem() {

    setPixmap((QPixmap(":/images/blue plate.jfif")).scaled(50,50));

    //set random position
    int random_number = rand() % 500;
    setPos(random_number,0);

    // drew the rect


    // connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void baddisk::move(){
    // move enemy down
    setPos(x(),y()+20);
    if (pos().y() > scene()->height() ){
        scene()->removeItem(this);
        delete this;
    }
}
