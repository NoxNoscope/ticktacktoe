/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ticktacktoe/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 6), // "doLoss"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 10), // "checkIfWin"
QT_MOC_LITERAL(4, 30, 16), // "on_btn11_clicked"
QT_MOC_LITERAL(5, 47, 16), // "on_btn12_clicked"
QT_MOC_LITERAL(6, 64, 16), // "on_btn13_clicked"
QT_MOC_LITERAL(7, 81, 16), // "on_btn21_clicked"
QT_MOC_LITERAL(8, 98, 16), // "on_btn22_clicked"
QT_MOC_LITERAL(9, 115, 16), // "on_btn23_clicked"
QT_MOC_LITERAL(10, 132, 16), // "on_btn31_clicked"
QT_MOC_LITERAL(11, 149, 16), // "on_btn32_clicked"
QT_MOC_LITERAL(12, 166, 16), // "on_btn33_clicked"
QT_MOC_LITERAL(13, 183, 21) // "on_pushButton_clicked"

    },
    "MainWindow\0doLoss\0\0checkIfWin\0"
    "on_btn11_clicked\0on_btn12_clicked\0"
    "on_btn13_clicked\0on_btn21_clicked\0"
    "on_btn22_clicked\0on_btn23_clicked\0"
    "on_btn31_clicked\0on_btn32_clicked\0"
    "on_btn33_clicked\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       3,    0,   77,    2, 0x08 /* Private */,
       4,    0,   78,    2, 0x08 /* Private */,
       5,    0,   79,    2, 0x08 /* Private */,
       6,    0,   80,    2, 0x08 /* Private */,
       7,    0,   81,    2, 0x08 /* Private */,
       8,    0,   82,    2, 0x08 /* Private */,
       9,    0,   83,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doLoss((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->checkIfWin(); break;
        case 2: _t->on_btn11_clicked(); break;
        case 3: _t->on_btn12_clicked(); break;
        case 4: _t->on_btn13_clicked(); break;
        case 5: _t->on_btn21_clicked(); break;
        case 6: _t->on_btn22_clicked(); break;
        case 7: _t->on_btn23_clicked(); break;
        case 8: _t->on_btn31_clicked(); break;
        case 9: _t->on_btn32_clicked(); break;
        case 10: _t->on_btn33_clicked(); break;
        case 11: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
