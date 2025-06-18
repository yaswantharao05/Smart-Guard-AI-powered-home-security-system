/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QFrame *profileFrame;
    QPushButton *ProfilePushButton;
    QPushButton *pushButton_2;
    QPushButton *ExitPushButton;
    QPushButton *profilePushButton;
    QFrame *frame;
    QTableView *tableView;
    QLabel *label_3;
    QPushButton *NewMatePushButton;
    QFrame *MainClickPictureFrame;
    QLabel *label_7;
    QPushButton *takePhoto_button;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *cancelPhoto_button;
    QLabel *label_10;
    QPushButton *photoOK_button;
    QLabel *label_11;
    QLabel *newImageLabel;
    QLineEdit *houseMateName_lineEdit;
    QLabel *label_12;
    QLabel *label_13;
    QFrame *frame_2;
    QTableView *houseMateTableView;
    QLabel *label_6;
    QFrame *FirstWindowFrame;
    QFrame *authenticationFrame;
    QLineEdit *password_lineEdit;
    QLabel *label_5;
    QFrame *frame_3;
    QLabel *label_4;
    QPushButton *passwordOK_button;
    QFrame *StatusFrame;
    QFrame *MainStatusFrame;
    QLabel *MainStatusLabel;
    QLabel *MainStatusLogoLabel;
    QPushButton *VerifyButton;
    QLabel *label_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1714, 954);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(59, 59, 59);\n"
"background-color: rgb(50, 50, 50);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1711, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"/*background-color: rgb(49, 41, 90);*/"));
        label->setMargin(10);
        label->setIndent(100);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(35, 20, 51, 51));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/prodlogo.jpg);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 10px;"));
        profileFrame = new QFrame(centralwidget);
        profileFrame->setObjectName("profileFrame");
        profileFrame->setGeometry(QRect(1510, 90, 161, 211));
        profileFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(106, 106, 106);\n"
"border-radius: 10px;"));
        profileFrame->setFrameShape(QFrame::StyledPanel);
        profileFrame->setFrameShadow(QFrame::Raised);
        ProfilePushButton = new QPushButton(profileFrame);
        ProfilePushButton->setObjectName("ProfilePushButton");
        ProfilePushButton->setGeometry(QRect(5, 5, 151, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font1.setPointSize(12);
        ProfilePushButton->setFont(font1);
        ProfilePushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	qproperty-icon: url(:/images/user.png);\n"
"	qproperty-iconSize: 24px;\n"
"	color: rgb(255, 255, 255);\n"
"	text-align:center;\n"
"	border-radius: 7px;\n"
"}\n"
"QPushButton:enabled{\n"
"	background-color:  rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(63, 63, 63);\n"
"}"));
        pushButton_2 = new QPushButton(profileFrame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(5, 75, 151, 61));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	qproperty-icon: url(:/images/setting.png);\n"
"	qproperty-iconSize: 24px;\n"
"	color: rgb(255, 255, 255);\n"
"	text-align:center;\n"
"	border-radius: 7px;\n"
"}\n"
"QPushButton:enabled{\n"
"	background-color:  rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(63, 63, 63);	\n"
"}"));
        ExitPushButton = new QPushButton(profileFrame);
        ExitPushButton->setObjectName("ExitPushButton");
        ExitPushButton->setGeometry(QRect(5, 145, 151, 61));
        ExitPushButton->setFont(font1);
        ExitPushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	qproperty-icon: url(:/images/switch.png);\n"
"	qproperty-iconSize: 32px;\n"
"	color: rgb(255, 255, 255);\n"
"	text-align:center;\n"
"	border-radius: 7px;\n"
"}\n"
"QPushButton:enabled{\n"
"	background-color: rgb(255, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(156, 0, 0);\n"
"}"));
        profilePushButton = new QPushButton(centralwidget);
        profilePushButton->setObjectName("profilePushButton");
        profilePushButton->setGeometry(QRect(1565, 20, 51, 51));
        profilePushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/images/profile.png);\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(100, 150, 551, 401));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tableView = new QTableView(frame);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 80, 551, 321));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Century Gothic")});
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setUnderline(false);
        tableView->setFont(font2);
        tableView->setStyleSheet(QString::fromUtf8("color: rgb(29, 29, 29);\n"
"background-color: white; /*rgb(211, 211, 211);*/\n"
"text-align:center;"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setGridStyle(Qt::DashLine);
        tableView->setSortingEnabled(false);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 551, 81));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setUnderline(true);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 167, 1);\n"
"color: rgb(50, 46, 27);"));
        label_3->setAlignment(Qt::AlignCenter);
        NewMatePushButton = new QPushButton(centralwidget);
        NewMatePushButton->setObjectName("NewMatePushButton");
        NewMatePushButton->setGeometry(QRect(900, 270, 281, 91));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font4.setPointSize(14);
        NewMatePushButton->setFont(font4);
        NewMatePushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	qproperty-icon: url(:/images/new-user.png);\n"
"	qproperty-iconSize: 24px;\n"
"	color: rgb(255, 255, 255);\n"
"	text-align:center;\n"
"	border-radius: 7px;\n"
"}\n"
"QPushButton:enabled{\n"
"	background-color:  rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(63, 63, 63);\n"
"}"));
        MainClickPictureFrame = new QFrame(centralwidget);
        MainClickPictureFrame->setObjectName("MainClickPictureFrame");
        MainClickPictureFrame->setGeometry(QRect(670, 130, 951, 781));
        MainClickPictureFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(18, 22, 31);\n"
"color: rgb(255, 255, 255);"));
        MainClickPictureFrame->setFrameShape(QFrame::StyledPanel);
        MainClickPictureFrame->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(MainClickPictureFrame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 560, 641, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font5.setPointSize(13);
        label_7->setFont(font5);
        label_7->setStyleSheet(QString::fromUtf8(""));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_7->setWordWrap(true);
        takePhoto_button = new QPushButton(MainClickPictureFrame);
        takePhoto_button->setObjectName("takePhoto_button");
        takePhoto_button->setGeometry(QRect(280, 710, 141, 51));
        takePhoto_button->setFont(font1);
        takePhoto_button->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(44, 57, 74);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(36, 47, 61);\n"
"}"));
        label_8 = new QLabel(MainClickPictureFrame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(480, 595, 351, 31));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Bahnschrift SemiLight")});
        font6.setPointSize(11);
        label_8->setFont(font6);
        label_8->setStyleSheet(QString::fromUtf8(""));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_8->setWordWrap(true);
        label_9 = new QLabel(MainClickPictureFrame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 630, 421, 31));
        label_9->setFont(font6);
        label_9->setStyleSheet(QString::fromUtf8(""));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_9->setWordWrap(true);
        cancelPhoto_button = new QPushButton(MainClickPictureFrame);
        cancelPhoto_button->setObjectName("cancelPhoto_button");
        cancelPhoto_button->setGeometry(QRect(600, 710, 141, 51));
        cancelPhoto_button->setFont(font1);
        cancelPhoto_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(197, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"	background-color: rgb(241, 0, 0);\n"
"}"));
        label_10 = new QLabel(MainClickPictureFrame);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(50, 600, 421, 31));
        label_10->setFont(font6);
        label_10->setStyleSheet(QString::fromUtf8(""));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_10->setWordWrap(true);
        photoOK_button = new QPushButton(MainClickPictureFrame);
        photoOK_button->setObjectName("photoOK_button");
        photoOK_button->setGeometry(QRect(440, 710, 141, 51));
        photoOK_button->setFont(font1);
        photoOK_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 165, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	\n"
"	background-color: rgb(0, 239, 0);\n"
"}"));
        label_11 = new QLabel(MainClickPictureFrame);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(50, 670, 831, 31));
        label_11->setFont(font6);
        label_11->setStyleSheet(QString::fromUtf8(""));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_11->setWordWrap(true);
        newImageLabel = new QLabel(MainClickPictureFrame);
        newImageLabel->setObjectName("newImageLabel");
        newImageLabel->setGeometry(QRect(150, 30, 640, 480));
        houseMateName_lineEdit = new QLineEdit(MainClickPictureFrame);
        houseMateName_lineEdit->setObjectName("houseMateName_lineEdit");
        houseMateName_lineEdit->setGeometry(QRect(240, 530, 261, 31));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Arial")});
        font7.setPointSize(11);
        houseMateName_lineEdit->setFont(font7);
        houseMateName_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-radius:0;"));
        houseMateName_lineEdit->setEchoMode(QLineEdit::Normal);
        label_12 = new QLabel(MainClickPictureFrame);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(40, 520, 191, 41));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font8.setPointSize(11);
        label_12->setFont(font8);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_13 = new QLabel(MainClickPictureFrame);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(480, 630, 451, 31));
        label_13->setFont(font6);
        label_13->setStyleSheet(QString::fromUtf8(""));
        label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_13->setWordWrap(true);
        label_11->raise();
        label_7->raise();
        takePhoto_button->raise();
        label_8->raise();
        label_9->raise();
        cancelPhoto_button->raise();
        label_10->raise();
        photoOK_button->raise();
        newImageLabel->raise();
        houseMateName_lineEdit->raise();
        label_12->raise();
        label_13->raise();
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(100, 560, 371, 351));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        houseMateTableView = new QTableView(frame_2);
        houseMateTableView->setObjectName("houseMateTableView");
        houseMateTableView->setGeometry(QRect(0, 80, 371, 271));
        houseMateTableView->setFont(font2);
        houseMateTableView->setStyleSheet(QString::fromUtf8("color: rgb(29, 29, 29);\n"
"background-color: white; /*rgb(211, 211, 211);*/\n"
"text-align:center;"));
        houseMateTableView->setLineWidth(2);
        houseMateTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        houseMateTableView->setGridStyle(Qt::DashLine);
        houseMateTableView->setSortingEnabled(true);
        houseMateTableView->horizontalHeader()->setCascadingSectionResizes(true);
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 0, 371, 81));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 167, 1);\n"
"color: rgb(50, 46, 27);"));
        label_6->setAlignment(Qt::AlignCenter);
        FirstWindowFrame = new QFrame(centralwidget);
        FirstWindowFrame->setObjectName("FirstWindowFrame");
        FirstWindowFrame->setGeometry(QRect(-1, 99, 1711, 831));
        FirstWindowFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);"));
        FirstWindowFrame->setFrameShape(QFrame::StyledPanel);
        FirstWindowFrame->setFrameShadow(QFrame::Raised);
        authenticationFrame = new QFrame(FirstWindowFrame);
        authenticationFrame->setObjectName("authenticationFrame");
        authenticationFrame->setGeometry(QRect(600, 210, 501, 281));
        authenticationFrame->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"border-radius:10px;"));
        authenticationFrame->setFrameShape(QFrame::StyledPanel);
        authenticationFrame->setFrameShadow(QFrame::Raised);
        password_lineEdit = new QLineEdit(authenticationFrame);
        password_lineEdit->setObjectName("password_lineEdit");
        password_lineEdit->setGeometry(QRect(200, 140, 261, 31));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Arial")});
        font9.setPointSize(13);
        password_lineEdit->setFont(font9);
        password_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-radius:0;"));
        password_lineEdit->setEchoMode(QLineEdit::Password);
        label_5 = new QLabel(authenticationFrame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 140, 151, 31));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        frame_3 = new QFrame(authenticationFrame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 0, 501, 91));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 30, 161, 41));
        label_4->setFont(font5);
        label_4->setStyleSheet(QString::fromUtf8(""));
        label_4->setAlignment(Qt::AlignCenter);
        passwordOK_button = new QPushButton(authenticationFrame);
        passwordOK_button->setObjectName("passwordOK_button");
        passwordOK_button->setGeometry(QRect(200, 220, 111, 41));
        passwordOK_button->setFont(font1);
        passwordOK_button->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(44, 57, 74);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(36, 47, 61);\n"
"}"));
        frame_3->raise();
        password_lineEdit->raise();
        label_5->raise();
        passwordOK_button->raise();
        StatusFrame = new QFrame(FirstWindowFrame);
        StatusFrame->setObjectName("StatusFrame");
        StatusFrame->setGeometry(QRect(640, 230, 431, 241));
        StatusFrame->setFrameShape(QFrame::StyledPanel);
        StatusFrame->setFrameShadow(QFrame::Raised);
        MainStatusFrame = new QFrame(StatusFrame);
        MainStatusFrame->setObjectName("MainStatusFrame");
        MainStatusFrame->setGeometry(QRect(10, 20, 411, 211));
        MainStatusFrame->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 0, 0);\n"
"border-radius:25px;"));
        MainStatusFrame->setFrameShape(QFrame::StyledPanel);
        MainStatusFrame->setFrameShadow(QFrame::Raised);
        MainStatusLabel = new QLabel(MainStatusFrame);
        MainStatusLabel->setObjectName("MainStatusLabel");
        MainStatusLabel->setGeometry(QRect(50, 20, 311, 81));
        MainStatusLabel->setFont(font4);
        MainStatusLabel->setStyleSheet(QString::fromUtf8(""));
        MainStatusLabel->setAlignment(Qt::AlignCenter);
        MainStatusLabel->setWordWrap(true);
        MainStatusLogoLabel = new QLabel(MainStatusFrame);
        MainStatusLogoLabel->setObjectName("MainStatusLogoLabel");
        MainStatusLogoLabel->setGeometry(QRect(180, 110, 61, 61));
        MainStatusLogoLabel->setStyleSheet(QString::fromUtf8("border-image: url(:/images/cross.png);"));
        VerifyButton = new QPushButton(FirstWindowFrame);
        VerifyButton->setObjectName("VerifyButton");
        VerifyButton->setGeometry(QRect(720, 290, 291, 101));
        VerifyButton->setFont(font4);
        VerifyButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 166, 0);\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	\n"
"	background-color: rgb(171, 111, 0);\n"
"}"));
        label_14 = new QLabel(FirstWindowFrame);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(600, 100, 601, 101));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Bahnschrift SemiLight")});
        font10.setPointSize(16);
        font10.setWeight(QFont::ExtraBold);
        font10.setUnderline(false);
        label_14->setFont(font10);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_14->setWordWrap(true);
        VerifyButton->raise();
        authenticationFrame->raise();
        StatusFrame->raise();
        label_14->raise();
        MainWindow->setCentralWidget(centralwidget);
        NewMatePushButton->raise();
        label->raise();
        label_2->raise();
        profilePushButton->raise();
        frame->raise();
        frame_2->raise();
        FirstWindowFrame->raise();
        profileFrame->raise();
        MainClickPictureFrame->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1714, 19));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Home-Secure: Smart home security system with facial recognition and entrance surveillance", nullptr));
        label_2->setText(QString());
        ProfilePushButton->setText(QCoreApplication::translate("MainWindow", "    Profile", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "  Settings", nullptr));
        ExitPushButton->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        profilePushButton->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Main Entrance - Entry Details", nullptr));
        NewMatePushButton->setText(QCoreApplication::translate("MainWindow", "   Add New Housemate", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Click \"Take Photo\" when new housemate is ready to take picture", nullptr));
        takePhoto_button->setText(QCoreApplication::translate("MainWindow", "Take Photo", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\342\200\242 Ensure sufficient light is falling on the face", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\342\200\242 Make sure the photo covers maximum amount of your face", nullptr));
        cancelPhoto_button->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\342\200\242 Position the camera properly for better quality of images", nullptr));
        photoOK_button->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\342\200\242 Click \"Take Photo\" again to take a new picture. Click \"OK\" to confirm image. Click \"Cancel\" to cancel the operation", nullptr));
        newImageLabel->setText(QString());
        houseMateName_lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", " Housemate name", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Enter Housemate Name:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\342\200\242 Taking photo might take few seconds, so please wait patiently for the image to display", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Housemate Names", nullptr));
        password_lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Enter Password :", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Authentication!", nullptr));
        passwordOK_button->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        MainStatusLabel->setText(QCoreApplication::translate("MainWindow", "Authentication successful! You are now logged in.", nullptr));
        MainStatusLogoLabel->setText(QString());
        VerifyButton->setText(QCoreApplication::translate("MainWindow", "Verify", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Namaste!  Click \"Verify\" to authenticate and enter House", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
