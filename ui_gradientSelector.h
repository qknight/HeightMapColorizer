/********************************************************************************
** Form generated from reading ui file 'gradientSelector.ui'
**
** Created: Sat Jan 16 19:16:43 2010
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_GRADIENTSELECTOR_H
#define UI_GRADIENTSELECTOR_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form1
{
public:
    QListWidget *listWidget;

    void setupUi(QWidget *Form1)
    {
        if (Form1->objectName().isEmpty())
            Form1->setObjectName(QString::fromUtf8("Form1"));
        Form1->resize(600, 480);
        listWidget = new QListWidget(Form1);
        const QIcon icon = QIcon(qPixmapFromMimeSource("height.png"));
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setIcon(icon);
        const QIcon icon1 = QIcon(qPixmapFromMimeSource("gradient.png"));
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setIcon(icon1);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(120, 40, 256, 192));
        listWidget->setViewMode(QListView::IconMode);
        listWidget->setUniformItemSizes(false);

        retranslateUi(Form1);

        QMetaObject::connectSlotsByName(Form1);
    } // setupUi

    void retranslateUi(QWidget *Form1)
    {
        Form1->setWindowTitle(QApplication::translate("Form1", "Form1", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Form1", "New Item", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Form1", "New Item", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Form1", "New Item", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        Q_UNUSED(Form1);
    } // retranslateUi

};

namespace Ui {
    class Form1: public Ui_Form1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADIENTSELECTOR_H
