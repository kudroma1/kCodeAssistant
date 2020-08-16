#include "app.h"

#include <QDebug>
#include <QFile>
#include <QIODevice>
#include <QTime>

namespace
{
    QFile logFile;
}

App::App(int &argc, char **argv)
    : QGuiApplication(argc, argv)
{
    logFile.setFileName("kCodeAssistant.log");
    logFile.open(QIODevice::OpenModeFlag::WriteOnly | QIODevice::OpenModeFlag::Text);
    qInstallMessageHandler([](QtMsgType type, const QMessageLogContext &context, const QString &msg){
        using namespace std;
        QByteArray localMsg = msg.toLocal8Bit();
        const char *file = context.file ? context.file : "";
        const char *function = context.function ? context.function : "";
        QString logMessage = QString("%1 %2 %3").arg(QString(file)).arg(QString(function)).arg(msg);
        switch (type) {
        case QtDebugMsg:
            logFile.write(QString("Debug %1\n").arg(logMessage).toUtf8());
            break;
        case QtInfoMsg:
            logFile.write(QString("Info %1\n").arg(logMessage).toUtf8());
            break;
        case QtWarningMsg:
            logFile.write(QString("Warning %1\n").arg(logMessage).toUtf8());
            break;
        case QtCriticalMsg:
            logFile.write(QString("Critical %1\n").arg(logMessage).toUtf8());
            break;
        case QtFatalMsg:
            logFile.write(QString("Fatal %1\n").arg(logMessage).toUtf8());
            break;
        }
    });
    qDebug() << "Message 2";
}

App::~App()
{
    logFile.close();
}
