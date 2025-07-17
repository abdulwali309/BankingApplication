/**
 * @file main.cpp
 * @brief Main entry point for the Banking Application
 * 
 */

#include <QApplication>
#include "../gui/mainwindow.h"

/**
 * @brief Main function that launches the application
 * @param argc Argument count
 * @param argv Argument vector
 * @return int Application exit code
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}