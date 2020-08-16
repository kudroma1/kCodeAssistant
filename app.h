#ifndef APP_H
#define APP_H

#include <QGuiApplication>

class App : public QGuiApplication
{
    Q_OBJECT
public:
    App(int &argc, char **argv);

    virtual ~App();

private:
    void debugOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg);
};

#endif // APP_H
