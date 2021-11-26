#ifndef DISK_H
#define DISK_H

#include <QObject>
#include <QGraphicsItem>

class disk : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    disk(int i);
    void keyPressEvent(QKeyEvent* event);
    void shoot() ;
};

#endif // DISK_H
