#include <QCoreApplication>
#include<iostream>
#include<QDebug>
#include<QThread>
#include"myobject.h"
#include"mythread.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //   cout<<QThread::currentThreadId()<<endl;
    qDebug()<<QThread::currentThreadId();
    MyObject *m=new MyObject();
    //QObject::connect(m,SIGNAL(mysig()),m,SLOT(myslot()));
   // QThread * t=new QThread();
   // m->moveToThread(t);
    //t->start();
   // m->mysig();
    MyThread * mt=new MyThread();
    mt->start();
    return a.exec();
}
