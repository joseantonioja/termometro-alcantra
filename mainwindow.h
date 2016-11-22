#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "temperaturereader.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    TemperatureReader *tempReader;
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_new_read(int);
};

#endif // MAINWINDOW_H
