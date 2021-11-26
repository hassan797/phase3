#ifndef BADDISK_H
#define BADDISK_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>

class baddisk:  public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    baddisk();

public slots:
    void move() ;
};

#endif // BADDISK_H
