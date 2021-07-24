/********************************************************************************
** Form generated from reading UI file 'qwmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMAINWINDOW_H
#define UI_QWMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMainWindow
{
public:
    QAction *actOpen;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFontBold;
    QAction *actFontItalic;
    QAction *actFontUnder;
    QAction *actClose;
    QAction *actClear;
    QAction *actFont;
    QAction *actNew;
    QAction *actToolbarLab;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QWMainWindow)
    {
        if (QWMainWindow->objectName().isEmpty())
            QWMainWindow->setObjectName(QString::fromUtf8("QWMainWindow"));
        QWMainWindow->resize(797, 433);
        actOpen = new QAction(QWMainWindow);
        actOpen->setObjectName(QString::fromUtf8("actOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/open3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/images/images/open3.bmp"), QSize(), QIcon::Normal, QIcon::On);
        actOpen->setIcon(icon);
        actCut = new QAction(QWMainWindow);
        actCut->setObjectName(QString::fromUtf8("actCut"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("images/cut.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/images/images/cut.bmp"), QSize(), QIcon::Normal, QIcon::On);
        actCut->setIcon(icon1);
        actCopy = new QAction(QWMainWindow);
        actCopy->setObjectName(QString::fromUtf8("actCopy"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("images/120.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/images/images/120.bmp"), QSize(), QIcon::Normal, QIcon::On);
        actCopy->setIcon(icon2);
        actPaste = new QAction(QWMainWindow);
        actPaste->setObjectName(QString::fromUtf8("actPaste"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("images/new2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/images/images/new2.bmp"), QSize(), QIcon::Normal, QIcon::On);
        actPaste->setIcon(icon3);
        actFontBold = new QAction(QWMainWindow);
        actFontBold->setObjectName(QString::fromUtf8("actFontBold"));
        actFontBold->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("images/BLD.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/images/images/BLD.bmp"), QSize(), QIcon::Normal, QIcon::On);
        actFontBold->setIcon(icon4);
        actFontItalic = new QAction(QWMainWindow);
        actFontItalic->setObjectName(QString::fromUtf8("actFontItalic"));
        actFontItalic->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("images/ITL.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8(":/images/images/ITL.bmp"), QSize(), QIcon::Normal, QIcon::On);
        actFontItalic->setIcon(icon5);
        actFontUnder = new QAction(QWMainWindow);
        actFontUnder->setObjectName(QString::fromUtf8("actFontUnder"));
        actFontUnder->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("images/WORDUNRY.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QString::fromUtf8(":/images/images/WORDUNRY.bmp"), QSize(), QIcon::Normal, QIcon::On);
        actFontUnder->setIcon(icon6);
        actClose = new QAction(QWMainWindow);
        actClose->setObjectName(QString::fromUtf8("actClose"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QString::fromUtf8(":/images/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::On);
        actClose->setIcon(icon7);
        actClear = new QAction(QWMainWindow);
        actClear->setObjectName(QString::fromUtf8("actClear"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("images/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon8.addFile(QString::fromUtf8(":/images/images/103.bmp"), QSize(), QIcon::Normal, QIcon::On);
        actClear->setIcon(icon8);
        actFont = new QAction(QWMainWindow);
        actFont->setObjectName(QString::fromUtf8("actFont"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("images/dsdpow.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon9.addFile(QString::fromUtf8(":/images/images/dsdpow.bmp"), QSize(), QIcon::Normal, QIcon::On);
        actFont->setIcon(icon9);
        actNew = new QAction(QWMainWindow);
        actNew->setObjectName(QString::fromUtf8("actNew"));
        actNew->setEnabled(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("images/new.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon10.addFile(QString::fromUtf8(":/images/images/new.bmp"), QSize(), QIcon::Normal, QIcon::On);
        actNew->setIcon(icon10);
        actToolbarLab = new QAction(QWMainWindow);
        actToolbarLab->setObjectName(QString::fromUtf8("actToolbarLab"));
        actToolbarLab->setCheckable(true);
        centralwidget = new QWidget(QWMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 781, 331));
        QWMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QWMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 797, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        QWMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(QWMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QWMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(QWMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QWMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(actNew);
        menu->addAction(actOpen);
        menu->addSeparator();
        menu->addAction(actClose);
        menu_2->addAction(actCut);
        menu_2->addAction(actCopy);
        menu_2->addAction(actPaste);
        menu_2->addSeparator();
        menu_2->addAction(actClear);
        menu_3->addAction(actFontBold);
        menu_3->addAction(actFontItalic);
        menu_3->addAction(actFontUnder);
        menu_3->addSeparator();
        menu_3->addAction(actToolbarLab);
        toolBar->addAction(actNew);
        toolBar->addAction(actOpen);
        toolBar->addAction(actClear);
        toolBar->addSeparator();
        toolBar->addAction(actCut);
        toolBar->addAction(actCopy);
        toolBar->addAction(actPaste);
        toolBar->addSeparator();
        toolBar->addAction(actFontItalic);
        toolBar->addAction(actFontBold);
        toolBar->addAction(actFontUnder);
        toolBar->addSeparator();

        retranslateUi(QWMainWindow);
        QObject::connect(actPaste, SIGNAL(triggered()), textEdit, SLOT(paste()));
        QObject::connect(actCut, SIGNAL(triggered()), textEdit, SLOT(cut()));
        QObject::connect(actCopy, SIGNAL(triggered()), textEdit, SLOT(copy()));
        QObject::connect(actClose, SIGNAL(triggered()), QWMainWindow, SLOT(close()));
        QObject::connect(actClear, SIGNAL(triggered()), textEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(QWMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QWMainWindow)
    {
        QWMainWindow->setWindowTitle(QApplication::translate("QWMainWindow", "LYY\350\212\261\346\240\267\345\255\227\344\275\223\347\274\226\350\276\221\345\231\250", nullptr));
        actOpen->setText(QApplication::translate("QWMainWindow", "\346\211\223\345\274\200", nullptr));
#ifndef QT_NO_TOOLTIP
        actOpen->setToolTip(QApplication::translate("QWMainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actOpen->setShortcut(QApplication::translate("QWMainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actCut->setText(QApplication::translate("QWMainWindow", "\345\211\252\345\210\207", nullptr));
#ifndef QT_NO_TOOLTIP
        actCut->setToolTip(QApplication::translate("QWMainWindow", "\345\211\252\345\210\207\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCut->setShortcut(QApplication::translate("QWMainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actCopy->setText(QApplication::translate("QWMainWindow", "\345\244\215\345\210\266", nullptr));
#ifndef QT_NO_TOOLTIP
        actCopy->setToolTip(QApplication::translate("QWMainWindow", "\345\244\215\345\210\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCopy->setShortcut(QApplication::translate("QWMainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actPaste->setText(QApplication::translate("QWMainWindow", "\347\262\230\350\264\264", nullptr));
#ifndef QT_NO_TOOLTIP
        actPaste->setToolTip(QApplication::translate("QWMainWindow", "\347\262\230\350\264\264", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actPaste->setShortcut(QApplication::translate("QWMainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actFontBold->setText(QApplication::translate("QWMainWindow", "\347\262\227\344\275\223", nullptr));
#ifndef QT_NO_TOOLTIP
        actFontBold->setToolTip(QApplication::translate("QWMainWindow", "\345\212\240\347\262\227", nullptr));
#endif // QT_NO_TOOLTIP
        actFontItalic->setText(QApplication::translate("QWMainWindow", "\346\226\234\344\275\223", nullptr));
#ifndef QT_NO_TOOLTIP
        actFontItalic->setToolTip(QApplication::translate("QWMainWindow", "\345\200\276\346\226\234\345\255\227\344\275\223", nullptr));
#endif // QT_NO_TOOLTIP
        actFontUnder->setText(QApplication::translate("QWMainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#ifndef QT_NO_TOOLTIP
        actFontUnder->setToolTip(QApplication::translate("QWMainWindow", "\346\267\273\345\212\240\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_NO_TOOLTIP
        actClose->setText(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        actClose->setToolTip(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
        actClear->setText(QApplication::translate("QWMainWindow", "\346\270\205\347\251\272", nullptr));
#ifndef QT_NO_TOOLTIP
        actClear->setToolTip(QApplication::translate("QWMainWindow", "\346\270\205\347\251\272\345\206\205\345\256\271", nullptr));
#endif // QT_NO_TOOLTIP
        actFont->setText(QApplication::translate("QWMainWindow", "\345\255\227\344\275\223", nullptr));
#ifndef QT_NO_TOOLTIP
        actFont->setToolTip(QApplication::translate("QWMainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
#endif // QT_NO_TOOLTIP
        actNew->setText(QApplication::translate("QWMainWindow", "\346\226\260\345\273\272", nullptr));
#ifndef QT_NO_TOOLTIP
        actNew->setToolTip(QApplication::translate("QWMainWindow", "\346\226\260\345\273\272", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actNew->setShortcut(QApplication::translate("QWMainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actToolbarLab->setText(QApplication::translate("QWMainWindow", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\226\207\345\255\227\346\240\207\347\255\276", nullptr));
#ifndef QT_NO_TOOLTIP
        actToolbarLab->setToolTip(QApplication::translate("QWMainWindow", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\226\207\345\255\227\346\240\207\347\255\276", nullptr));
#endif // QT_NO_TOOLTIP
        menu->setTitle(QApplication::translate("QWMainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("QWMainWindow", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QApplication::translate("QWMainWindow", "\346\240\274\345\274\217", nullptr));
        toolBar->setWindowTitle(QApplication::translate("QWMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWMainWindow: public Ui_QWMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWINDOW_H
