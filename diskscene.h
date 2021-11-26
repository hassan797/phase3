#ifndef DISKSCENE_H
#define DISKSCENE_H

#include <QObject>
#include <QGraphicsSceneMouseEvent>
#include <QTimer>
#include <disk.h>
#include <iostream>
#include <QGraphicsItem>
#include <QKeyEvent>
using namespace std;

class DiskItem :public QObject ,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    DiskItem(QObject = nullptr) ;
    disk * disk1;
    disk * disk2;
    disk * disk3;

    void KeyPressEvent(QKeyEvent *event1);


//public slots:
//    void update();
};



#endif // MAINSCENE_H
