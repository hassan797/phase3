#include "disk.h"
#include "laser.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QDebug>

disk::disk(int i )
{

    if (i ==1 ){
         setPixmap((QPixmap(":/images/green plate.jfif")).scaled(100,100)); }
    else if (i == 2 ){
        setPixmap((QPixmap(":/images/blue plate.jfif")).scaled(110,110));
     }
    else if (i == 3 ){
            setPixmap((QPixmap(":/images/plate.jfif")).scaled(110,110));
     }

}

void disk::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Space){
            // create a bullet
            laser *laser1 = new laser();
            laser1->setPos(x(),y());
            scene()->addItem(laser1);
        }
}

void disk::shoot(){
    qDebug() << "KEY IN DISK RECEIVED BITCH" ;
    laser *laser1 = new laser();

    scene()->addItem(laser1);
    laser1->setPos(x(),y());

}
