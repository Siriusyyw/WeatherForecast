#include "weatherview.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CWeatherView w;
    w.show();
    return a.exec();
}
