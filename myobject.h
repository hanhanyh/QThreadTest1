#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>

class MyObject : public QObject
{
    Q_OBJECT
public:
    explicit MyObject(QObject *parent = 0);

signals:
  void  mysig();
public slots:
  void myslot();
};

#endif // MYOBJECT_H
