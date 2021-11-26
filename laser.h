#ifndef LASER_H
#define LASER_H


#include <QObject>
#include <QGraphicsPixmapItem>

class laser:  public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    laser();

public slots:
    void move() ;

};

#endif // LASER_H
