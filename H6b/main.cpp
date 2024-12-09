#include "exampleclass.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass objExamleClass;
    objExamleClass.startToWait();

    return a.exec();
}
