#include "mainwindow.h"
#include <QApplication>
#include "Snake.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Snake window;

    window.setWindowTitle("Snake");
    window.show();

    return a.exec();
}
