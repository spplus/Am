/****************************************************************************
** Meta object code from reading C++ file 'graphicsscene.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../graphicsscene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphicsscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GraphicsScene[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      24,   14,   14,   14, 0x0a,
      33,   14,   14,   14, 0x0a,
      43,   14,   14,   14, 0x0a,
      54,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GraphicsScene[] = {
    "GraphicsScene\0\0goNext()\0goPrev()\0"
    "setOpen()\0setClose()\0startAnimation()\0"
};

void GraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GraphicsScene *_t = static_cast<GraphicsScene *>(_o);
        switch (_id) {
        case 0: _t->goNext(); break;
        case 1: _t->goPrev(); break;
        case 2: _t->setOpen(); break;
        case 3: _t->setClose(); break;
        case 4: _t->startAnimation(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GraphicsScene::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GraphicsScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_GraphicsScene,
      qt_meta_data_GraphicsScene, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraphicsScene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsScene))
        return static_cast<void*>(const_cast< GraphicsScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int GraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
