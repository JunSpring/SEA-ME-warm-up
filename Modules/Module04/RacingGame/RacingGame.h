#ifndef RACINGGAME_H
#define RACINGGAME_H


#include <QMainWindow>
#include "ui_racingGameWindow.h"
#include "Car.h"
#include "RaceTrack.h"
#include "CarThread.h"

QT_BEGIN_NAMESPACE

namespace Ui
{
    class RacingGameWindow;
}

QT_END_NAMESPACE

class RacingGame : public QMainWindow
{
private
slots:
    void startRace();

    void pauseRace();

    void exitGame();

private:
    Ui::RacingGameWindow *ui;

    RaceTrack *raceTrack;
    QList<Car *> carList;
    QList<QThread *> threadList;

public:
    RacingGame(QWidget *parent = nullptr);

    ~RacingGame();
};


#endif //RACINGGAME_H
