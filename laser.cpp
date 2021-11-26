#include "laser.h"
#include <QList>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <baddisk.h>


laser::laser():QObject(), QGraphicsPixmapItem()
   {
        // drew the rect
        setPixmap((QPixmap(":/images/vertlaser.jpg")).scaled(10,200));

        // connect
        QTimer * timer = new QTimer(this);
        connect(timer,SIGNAL(timeout()),this,SLOT(move()));
        timer->start(5);

}

 void laser::move(){
        // if bullet collides with enemy, destroy both
        QList<QGraphicsItem *> colliding_items = collidingItems();
        for (int i = 0, n = colliding_items.size(); i < n; ++i){

            if (typeid(*(colliding_items[i])) == typeid(baddisk)){
                // remove them both
                scene()->removeItem(colliding_items[i]);
                scene()->removeItem(this);
                // delete them both
                delete colliding_items[i];
                delete this;
                return;
            }

        }

        // move bullet up
        setPos(x(),y()-50);
        if (pos().y()  < -200){
            scene()->removeItem(this);
            delete this;
        }

 }

