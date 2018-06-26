#include "mythread.h"
#include<QThread>
#include<QDebug>
#include"myobject.h"
MyThread::MyThread()
{

}
void MyThread::run()
{
    qDebug()<<QThread::currentThreadId();
    MyObject * o=new MyObject();
    QObject::connect(o,SIGNAL(mysig()),o,SLOT(myslot()));
    o->mysig();
    this->exec();
}
