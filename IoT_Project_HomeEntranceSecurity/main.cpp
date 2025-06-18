#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowState(Qt::WindowMaximized);
    w.setWindowIconText("GUI");
    w.setWindowTitle("Smart-Guard: AI-powered Home Security System – IoT Project");
    w.setWindowIcon(QIcon(":/images/logo.jpg"));

    // Customize the QToolTip font and background color
    QPalette palette = a.palette();
    palette.setColor(QPalette::ToolTipBase, Qt::white); // Background color
    palette.setColor(QPalette::ToolTipText, Qt::black); // Text color
    QFont font;
    font.setBold(true); // Make the font bold]
    a.setPalette(palette);
    QToolTip::setFont(font);
    QToolTip::setPalette(palette);
    w.show();
    return a.exec();
}
