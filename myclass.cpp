#include "myclass.h"

MyClass::MyClass(QObject *parent)
    : QObject(parent)
{
    // UUSI connect-syntaksi
    connect(this, &MyClass::mySignal,
            this, &MyClass::mySlot);
}

void MyClass::raiseMySignal()
{
    emit mySignal();
}

void MyClass::mySlot()
{
    qDebug() << "mySlot:ia kutsuttiin";
}
