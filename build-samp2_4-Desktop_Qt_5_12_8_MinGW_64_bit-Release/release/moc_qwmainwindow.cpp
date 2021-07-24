/****************************************************************************
** Meta object code from reading C++ file 'qwmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../samp2_4/qwmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWMainWindow_t {
    QByteArrayData data[13];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWMainWindow_t qt_meta_stringdata_QWMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QWMainWindow"
QT_MOC_LITERAL(1, 13, 24), // "on_actFontBold_triggered"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "checked"
QT_MOC_LITERAL(4, 47, 26), // "on_actFontItalic_triggered"
QT_MOC_LITERAL(5, 74, 25), // "on_actFontUnder_triggered"
QT_MOC_LITERAL(6, 100, 25), // "on_textEdit_copyAvailable"
QT_MOC_LITERAL(7, 126, 1), // "b"
QT_MOC_LITERAL(8, 128, 28), // "on_textEdit_selectionChanged"
QT_MOC_LITERAL(9, 157, 31), // "on_spinBoxFontSize_valueChanged"
QT_MOC_LITERAL(10, 189, 9), // "aFontSize"
QT_MOC_LITERAL(11, 199, 32), // "on_comboFont_currentIndexChanged"
QT_MOC_LITERAL(12, 232, 4) // "arg1"

    },
    "QWMainWindow\0on_actFontBold_triggered\0"
    "\0checked\0on_actFontItalic_triggered\0"
    "on_actFontUnder_triggered\0"
    "on_textEdit_copyAvailable\0b\0"
    "on_textEdit_selectionChanged\0"
    "on_spinBoxFontSize_valueChanged\0"
    "aFontSize\0on_comboFont_currentIndexChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    1,   52,    2, 0x08 /* Private */,
       5,    1,   55,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    1,   62,    2, 0x08 /* Private */,
      11,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void QWMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QWMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actFontBold_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_actFontItalic_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_actFontUnder_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_textEdit_copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_textEdit_selectionChanged(); break;
        case 5: _t->on_spinBoxFontSize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_comboFont_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QWMainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_QWMainWindow.data,
    qt_meta_data_QWMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QWMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QWMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
