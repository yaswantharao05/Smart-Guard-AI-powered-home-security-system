#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <Windows.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->profileFrame->setVisible(false);
    ui->authenticationFrame->setVisible(false);
    ui->StatusFrame->setVisible(false);
    ui->MainClickPictureFrame->setVisible(false);
    loadCSVFile(entrylogiotsecurity);
    loadHouseMateFile(houseMateCSVpath);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::loadCSVFile(const QString& filePath) {

    QStandardItemModel* model = new QStandardItemModel(this);

    // Read the CSV file
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QList<QStringList> lines;
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            QStringList fields = line.split(",");
            lines.prepend(fields);
        }
        for(int i=0; i<lines.length(); ++i)
        {
            QStringList fields = lines[i];
            qDebug()<<fields;
            QList<QStandardItem*> items;
            for (const QString& field : fields)
            {
                items.append(new QStandardItem(field));
            }
            model->appendRow(items);
        }
        file.close();
    }

    // Set the model to the QTableView
    ui->tableView->setModel(model);

    // Set the vertical header labels
    QStringList horizontalHeaders;
    horizontalHeaders << "Name" << "Date" << "Time";
    model->setHorizontalHeaderLabels(horizontalHeaders);

    // Fit the table to the view
    ui->tableView->resizeColumnsToContents();
    ui->tableView->resizeRowsToContents();

    // Update column headers
    QHeaderView* horiHeader = ui->tableView->horizontalHeader();
    horiHeader->setSectionResizeMode(QHeaderView::Stretch);
    horiHeader->setStretchLastSection(true);
}

void MainWindow::loadHouseMateFile(const QString& filePath) {

    QStandardItemModel* model = new QStandardItemModel(this);

    // Read the CSV file
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QList<QStringList> lines;
        while (!in.atEnd())
        {
            QString line = in.readLine();
            QStringList fields = line.split(",");
            lines.prepend(fields); // prepend each line to reverse the order
        }
        file.close();

        // Populate the model with reversed lines
        foreach(const QStringList &fields, lines) {
            QList<QStandardItem*> items;
            items.append(new QStandardItem(fields[1]));
            model->appendRow(items);
        }
    }

    // Set the model to the QTableView
    ui->houseMateTableView->setModel(model);

    // Set the vertical header labels
    QStringList horizontalHeaders;
    horizontalHeaders << "Housemate Name";
    model->setHorizontalHeaderLabels(horizontalHeaders);

    // Fit the table to the view
    ui->houseMateTableView->resizeColumnsToContents();
    ui->houseMateTableView->resizeRowsToContents();

    // Update column headers
    QHeaderView* horiHeader = ui->houseMateTableView->horizontalHeader();
    horiHeader->setSectionResizeMode(QHeaderView::Stretch);
    horiHeader->setStretchLastSection(true);

    QHeaderView* veriHeader = ui->houseMateTableView->verticalHeader();
    veriHeader->setSectionResizeMode(QHeaderView::Stretch);
    veriHeader->setStretchLastSection(true);

}

void MainWindow::on_profilePushButton_clicked()
{
    ui->profileFrame->setVisible(!ui->profileFrame->isVisible());
}

void MainWindow::on_ExitPushButton_clicked()
{
    ui->FirstWindowFrame->setVisible(true);
    ui->MainClickPictureFrame->setVisible(false);
    ui->profileFrame->setVisible(!ui->profileFrame->isVisible());
}

void MainWindow::on_NewMatePushButton_clicked()
{
    ui->MainClickPictureFrame->setVisible(true);
}

void MainWindow::on_passwordOK_button_clicked()
{
    QString enteredPassword = ui->password_lineEdit->text();
    ui->password_lineEdit->clear();
    successful = false;
    ui->authenticationFrame->setVisible(false);
    // Compare the entered password with the correct password
    ui->StatusFrame->setVisible(true);
    if (enteredPassword == correctPassword) {
        // Password is correct, display a success message
        ui->MainStatusFrame->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(0, 184, 0);border-radius:25px;");
        ui->MainStatusLabel->setText("Authentication successful! You are now logged in.");
        ui->MainStatusLogoLabel->setStyleSheet("border-image: url(:/images/accept.png);");
        successful = true;
    } else {
        // Password is incorrect, display an error message
        ui->MainStatusFrame->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(170, 0, 0);border-radius:25px;");
        ui->MainStatusLabel->setText("Authentication failed! Please check your password and try again.");
        ui->MainStatusLogoLabel->setStyleSheet("border-image: url(:/images/cross.png);");
    }
    // Create a QTimer object
    QTimer* timer = new QTimer(this);

    // Set the single-shot mode and interval to 5000 milliseconds (5 seconds)
    timer->setSingleShot(true);
    timer->setInterval(2500);

    // Connect the timeout signal of the timer to a slot for the operation
    connect(timer, &QTimer::timeout, this, &MainWindow::closeStatusFrame);

    // Start the timer
    timer->start();

}

void MainWindow::closeStatusFrame()
{
    ui->StatusFrame->setVisible(false);
    if(successful){
        ui->FirstWindowFrame->setVisible(false);
        // ui->MainClickPictureFrame->setVisible(true);
        successful = false;
    }
}

void MainWindow::on_takePhoto_button_clicked()
{
    QString scriptPath = "python -u \"d:/RAO/IoT/IOT project/click_picture.py\"";

    QProcess process;
    process.startCommand(scriptPath);
    qApp->processEvents(QEventLoop::AllEvents);

    // Check if the process started successfully
    if (process.error() == QProcess::FailedToStart) {
        qWarning() << "Failed to start the process.";
        return;
    }

    // Wait for the process to finish (optional)
    if (!process.waitForFinished()) {
        qWarning() << "Failed to wait for the process to finish.";
        return;
    }
    // Read the output of the process (if needed)
    QString errorOutput = process.readAllStandardError();

    qDebug() << "Output: " << errorOutput;

    QPixmap image(newImagePath);
    ui->newImageLabel->setPixmap(image);

    // Adjust the size of the QLabel to fit the image
    ui->newImageLabel->setFixedSize(image.size());

    // Show the QLabel
    ui->newImageLabel->show();
    imageClicked = true;
    return;
}

void MainWindow::on_photoOK_button_clicked()
{
    if(imageClicked){
        QString imagePath = newImagePath; // Path to the original image
        QString newName = ui->houseMateName_lineEdit->text(); // New name for the image
        if(newName.length()!=0)
        {
            QString newNameFile = newName+".jpg";
            // Get the directory path of the original image
            QDir imageDir = QFileInfo(imagePath).absoluteDir();

            // Create a new file path with the desired name
            QString newImagePath = imageDir.filePath(newNameFile);
            if (QFile::exists(newImagePath)) {
                if (!QFile::remove(newImagePath)) {
                    qDebug() << "Failed to remove existing file:" << newImagePath;
                    // Handle error, e.g., inform the user or take appropriate action
                    return;
                }
            }
            // Rename the image file
            bool success = QFile::rename(imagePath, newImagePath);

            // Add new housemate to photos directory
            QFile file(photosPath);
            if (file.open(QIODevice::Append | QIODevice::Text)) {
                // Create a QTextStream to write to the file
                QTextStream out(&file);

                // Append the variable values to the CSV file
                out<< "\n" << newImagePath << "," << newName;

                // Close the file
                file.close();
            }
            loadHouseMateFile(houseMateCSVpath);
            on_cancelPhoto_button_clicked();
            if (success) {
                qDebug()<< "New Housemate saved. Image renamed successfully";
            } else {
                qDebug()<< "New Housemate failed to save. Failed to rename the image";
            }

            ui->MainClickPictureFrame->setVisible(false);
        } else {
            ui->houseMateName_lineEdit->setPlaceholderText("Name can't be empty");
            qDebug()<< "Housemate name can't be empty.";
        }

    }
}

void MainWindow::on_cancelPhoto_button_clicked()
{
    ui->newImageLabel->setPixmap(QPixmap());
    ui->houseMateName_lineEdit->clear();
    ui->houseMateName_lineEdit->setPlaceholderText(" Housemate name");
    ui->newImageLabel->show();
    ui->MainClickPictureFrame->setVisible(false);
    return;
}

void MainWindow::on_ProfilePushButton_clicked()
{
    ui->authenticationFrame->setVisible(true);
    ui->profileFrame->setVisible(!ui->profileFrame->isVisible());
}

void MainWindow::verify()
{
    LPCWSTR command = L"/c cd /D \"D:/RAO/IoT/IOT project\" && call myenv\\Scripts\\activate.bat && python -u \"D:/RAO/IoT/IOT project/main.py\"";
    ShellExecute(NULL, L"open", L"cmd.exe", command, NULL, SW_SHOWNORMAL);

    return;
}

void MainWindow::waitForFileCreation(const QString& folderPath) {
    QDir dir(folderPath);
    while (true) {
        QStringList fileList = dir.entryList(QDir::Files);
        if (!fileList.isEmpty()) {
            qDebug() << "File created in" << folderPath;
            return; // Exit the function once a file is created
        } else {
            qDebug() << "File not created.";
        }
        QCoreApplication::processEvents(); // Allow events to be processed during the loop
        QThread::msleep(1000); // Sleep for 1 second before checking again
    }
}

void MainWindow::on_VerifyButton_clicked()
{
    verify();

    QString folderPath = "D:/RAO/IoT/IOT project/result"; // Replace with your folder path

    // waitForFileCreation(folderPath);
    QDir dir(folderPath);
    while (true) {
        QStringList fileList = dir.entryList(QDir::Files);
        if (!fileList.isEmpty()) {
            qDebug() << "File created";
            break; // Exit the function once a file is created
        } else {
            qDebug() << "File not created.";
            QThread::msleep(2000);
        }
    }
    QThread::msleep(2000); // Sleep for 1 second before checking again
    QString filePath = folderPath+"/result.txt"; // Specify the path to your text file
    QFile file(filePath);

    // Open the file in read-only mode
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file:" << file.errorString();
        return;
    }

    QTextStream in(&file);
    QString content = in.readAll(); // Read all contents of the file

    // Check if the content matches 'Housemate' or 'Intruder'
    if (content.trimmed() == "Housemate") {
        qDebug() << "The person is a Housemate.";
        ui->StatusFrame->setVisible(true);
        ui->MainStatusFrame->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(0, 184, 0);border-radius:25px;");
        ui->MainStatusLabel->setText("Verification successful! Welcome.");
        ui->MainStatusLogoLabel->setStyleSheet("border-image: url(:/images/accept.png);");
        loadCSVFile(entrylogiotsecurity);
    } else if (content.trimmed() == "Intruder") {
        qDebug() << "The person is an Intruder.";
        ui->StatusFrame->setVisible(true);
        ui->MainStatusFrame->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(170, 0, 0);border-radius:25px;");
        ui->MainStatusLabel->setText("Verification failed! Sending mail to House owner, Please wait till confirmation.");
        ui->MainStatusLogoLabel->setStyleSheet("border-image: url(:/images/cross.png);");
    }

    file.close(); // Close the file when done

    if (QFile::remove(filePath)) {
        qDebug() << "File" << filePath << "deleted successfully.";
    } else {
        qDebug() << "Failed to delete file:" << filePath;
    }

    // Create a QTimer object
    QTimer* timer = new QTimer(this);

    // Set the single-shot mode and interval to 5000 milliseconds (5 seconds)
    timer->setSingleShot(true);
    timer->setInterval(6000);

    // Connect the timeout signal of the timer to a slot for the operation
    connect(timer, &QTimer::timeout, this, &MainWindow::closeStatusFrame);

    // Start the timer
    timer->start();
}
