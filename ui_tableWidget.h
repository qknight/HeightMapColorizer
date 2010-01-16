/********************************************************************************
** Form generated from reading ui file 'tableWidget.ui'
**
** Created: Sat Jan 16 19:16:42 2010
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TABLEWIDGET_H
#define UI_TABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_tableWidget
{
public:
    QGridLayout *gridLayout;
    QTableWidget *table;
    QHBoxLayout *hboxLayout;
    QPushButton *loadBtn;
    QPushButton *saveBtn;
    QSpacerItem *spacerItem;
    QPushButton *printBtn;
    QPushButton *delBtn;
    QPushButton *pushButton;
    QLabel *viewGradient;
    QHBoxLayout *hboxLayout1;
    QLabel *viewOld;
    QSpacerItem *spacerItem1;
    QLabel *viewNew;

    void setupUi(QDialog *tableWidget)
    {
        if (tableWidget->objectName().isEmpty())
            tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->resize(543, 681);
        const QIcon icon = QIcon(QString::fromUtf8("height.png"));
        tableWidget->setWindowIcon(icon);
        gridLayout = new QGridLayout(tableWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        table = new QTableWidget(tableWidget);
        if (table->columnCount() < 5)
            table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (table->rowCount() < 6)
            table->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table->setVerticalHeaderItem(5, __qtablewidgetitem10);
        table->setObjectName(QString::fromUtf8("table"));
        table->setSortingEnabled(true);

        gridLayout->addWidget(table, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        loadBtn = new QPushButton(tableWidget);
        loadBtn->setObjectName(QString::fromUtf8("loadBtn"));

        hboxLayout->addWidget(loadBtn);

        saveBtn = new QPushButton(tableWidget);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));

        hboxLayout->addWidget(saveBtn);

        spacerItem = new QSpacerItem(351, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        printBtn = new QPushButton(tableWidget);
        printBtn->setObjectName(QString::fromUtf8("printBtn"));

        hboxLayout->addWidget(printBtn);

        delBtn = new QPushButton(tableWidget);
        delBtn->setObjectName(QString::fromUtf8("delBtn"));

        hboxLayout->addWidget(delBtn);

        pushButton = new QPushButton(tableWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        hboxLayout->addWidget(pushButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        viewGradient = new QLabel(tableWidget);
        viewGradient->setObjectName(QString::fromUtf8("viewGradient"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewGradient->sizePolicy().hasHeightForWidth());
        viewGradient->setSizePolicy(sizePolicy);
        viewGradient->setMinimumSize(QSize(0, 50));
        viewGradient->setMaximumSize(QSize(16777215, 50));
        viewGradient->setPixmap(QPixmap(QString::fromUtf8("height.png")));

        gridLayout->addWidget(viewGradient, 2, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        viewOld = new QLabel(tableWidget);
        viewOld->setObjectName(QString::fromUtf8("viewOld"));
        viewOld->setMinimumSize(QSize(256, 256));
        viewOld->setMaximumSize(QSize(256, 256));

        hboxLayout1->addWidget(viewOld);

        spacerItem1 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        viewNew = new QLabel(tableWidget);
        viewNew->setObjectName(QString::fromUtf8("viewNew"));
        viewNew->setMinimumSize(QSize(256, 256));
        viewNew->setMaximumSize(QSize(256, 256));

        hboxLayout1->addWidget(viewNew);


        gridLayout->addLayout(hboxLayout1, 3, 0, 1, 1);


        retranslateUi(tableWidget);

        QMetaObject::connectSlotsByName(tableWidget);
    } // setupUi

    void retranslateUi(QDialog *tableWidget)
    {
        tableWidget->setWindowTitle(QApplication::translate("tableWidget", "Color gradient creator", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("tableWidget", "New Column", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("tableWidget", "New Column", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("tableWidget", "New Column", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("tableWidget", "New Column", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("tableWidget", "New Column", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = table->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("tableWidget", "New Row", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = table->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("tableWidget", "New Row", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = table->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("tableWidget", "New Row", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = table->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("tableWidget", "New Row", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = table->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("tableWidget", "New Row", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = table->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("tableWidget", "New Row", 0, QApplication::UnicodeUTF8));
        loadBtn->setText(QApplication::translate("tableWidget", "&Load gradient", 0, QApplication::UnicodeUTF8));
        saveBtn->setText(QApplication::translate("tableWidget", "&Save gradient", 0, QApplication::UnicodeUTF8));
        printBtn->setText(QApplication::translate("tableWidget", "&print", 0, QApplication::UnicodeUTF8));
        delBtn->setText(QApplication::translate("tableWidget", "&del Row", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("tableWidget", "&add Row", 0, QApplication::UnicodeUTF8));
        viewGradient->setText(QString());
        viewOld->setText(QApplication::translate("tableWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        viewNew->setText(QApplication::translate("tableWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(tableWidget);
    } // retranslateUi

};

namespace Ui {
    class tableWidget: public Ui_tableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEWIDGET_H
