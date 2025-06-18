#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolTip>
#include <QFile>
#include <QStringListModel>
#include <QStandardItemModel>
#include <QTimer>
#include <QProcess>
#include <QFile>
#include <QDir>
#include <QThread>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void loadCSVFile(const QString& filePath);
    void loadHouseMateFile(const QString& filePath);
    void verify();
    QString entrylogiotsecurity = "..\\entrylogiotsecurity.csv", newImagePath = "D:/RAO/IoT/IOT project/photos/new_person.jpg", photosPath = "D:/RAO/IoT/IOT project/photos.csv", houseMateCSVpath = "D:/RAO/IoT/IOT project/photos.csv";
    QString correctPassword = "12345";
    bool successful = false, imageClicked = false;
    void waitForFileCreation(const QString& folderPath);
    void closeStatusFrame();
    ~MainWindow();

private slots:
    void on_profilePushButton_clicked();

    void on_ExitPushButton_clicked();

    void on_NewMatePushButton_clicked();

    void on_passwordOK_button_clicked();

    void on_takePhoto_button_clicked();

    void on_photoOK_button_clicked();

    void on_ProfilePushButton_clicked();

    void on_VerifyButton_clicked();

    void on_cancelPhoto_button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
