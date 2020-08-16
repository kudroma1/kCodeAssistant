#ifndef TEST_DESCRIPTOR_H
#define TEST_DESCRIPTOR_H

//! [0]
#include <QtTest/QtTest>

class TestQString: public QObject
{
    Q_OBJECT
private slots:
    void toUpper();
};
//! [0]

//! [1]
void TestQString::toUpper()
{
    QString str = "Hello";
    QCOMPARE(str.toUpper(), QString("HELLO"));
}
//! [1]

//! [2]
QTEST_MAIN(TestQString)
#include "testqstring.moc"
//! [2]

#endif // DESCRIPTORTEST_H
