#include "myobject.h"
#include<QDebug>
#include<QThread>
#include"myobject.h"
MyObject::MyObject(QObject *parent) : QObject(parent)
{

}
void MyObject::myslot()
{
    qDebug()<<QThread::currentThreadId();
    QThread::currentThread()->quit();
}
