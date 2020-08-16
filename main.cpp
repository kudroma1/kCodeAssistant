#include <QQmlApplicationEngine>
#include <QFile>

#include "app.h"
#include "parser.h"

#include <QDir>

#include <cstdint>

using namespace kudroma::code_assistant;

int main(int argc, char *argv[])
{
    App::setAttribute(Qt::AA_EnableHighDpiScaling);

    App app(argc, argv);

    qDebug() << "message";

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    Parser p;
    p.parse("P:/KudromaCodeAssistant/resources/sample_package_structure_1");

    return app.exec();
}
