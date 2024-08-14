#include <QApplication>
#include "RacingGame.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // MainWindow w;
    // w.show();
    RacingGame rg;
    rg.show();
    return a.exec();
}
