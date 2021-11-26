#include <QTimer>
#include <list>
#include <QGraphicsItem>
#include <diskscene.h>
#include <QKeyEvent>
#include <QDebug>



DiskItem::DiskItem(QObject *parent )
{
    setActive(true) ;
    setFlag(QGraphicsItem::ItemIsFocusScope) ;
    setFlag(QGraphicsItem::ItemIsFocusable) ;
    setFlag(QGraphicsItem::ItemIsSelectable) ;
    disk1 = new disk(1) ;
    disk2 = new disk(2) ;
    disk3 = new disk(3) ;

    //    setSceneRect(0,0,1000,1000);
    //    addItem(disk1) ;

    //    addItem(disk2) ;
    //    addItem(disk3) ;


//    disk1->setPos(150, 400) ;
//    disk2->setPos(300, 400) ;
//    disk3->setPos(450, 400) ;

}

void DiskItem::KeyPressEvent(QKeyEvent *event1){

    qDebug() << "KEY RECEIVED BITCH" ;
    if (event1->key() == Qt::Key_Left){
        qWarning() << "found" ;
        disk1->shoot();
    }
    else if (event1->key() == Qt::Key_Down){
        disk1->shoot();
    }
    else if (event1->key() == Qt::Key_Right){
        disk1->shoot();
    }

}
