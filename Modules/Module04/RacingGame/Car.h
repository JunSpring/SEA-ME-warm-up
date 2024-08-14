#ifndef CAR_H
#define CAR_H


#include <QObject>

class Car : public QObject
{
    Q_OBJECT

public:
    int position;
    int speed;
    int direction;

    void move();

signals:
    void positionChanged(int newPosition);
};


#endif //CAR_H
