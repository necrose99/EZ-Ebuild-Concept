/********************************************************************************
** Form generated from reading UI file 'EZ-Ebuilder-Conceptn15999.ui'
**
** Created: Thu Mar 28 22:37:28 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef EZ_2D_EBUILDER_2D_CONCEPTN15999_H
#define EZ_2D_EBUILDER_2D_CONCEPTN15999_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QProgressBar *Total_Ebuild_progressBar;
    QComboBox *comboBox_2;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QTextBrowser *Ebuild_Text_Window;
    QScrollBar *horizontalScrollBar;
    QPushButton *pushButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit;
    QTabWidget *SearchPKGHelp;
    QWidget *tabWidget_2Page1;
    QTextBrowser *Ebuild_Text_Window_2;
    QWidget *tabWidget_2Page2;
    QTextBrowser *Ebuild_Text_Window_3;
    QPushButton *pushButton_3;
    QToolButton *toolButton;
    QTextBrowser *Ebuild_Text_Window_4;
    QTextBrowser *Ebuild_Text_Window_5;
    QComboBox *comboBox_4;
    QPushButton *pushButton_4;
    QComboBox *comboBox_5;
    QPushButton *pushButton_5;
    QTextBrowser *Ebuild_Text_Window_6;
    QTextBrowser *Ebuild_Text_Window_7;
    QComboBox *comboBox_6;
    QToolButton *toolButton_2;
    QTextBrowser *Ebuild_Text_Window_8;
    QPushButton *pushButton_6;
    QComboBox *comboBox_7;
    QTextBrowser *Ebuild_Text_Window_9;
    QPushButton *pushButton_7;
    QComboBox *comboBox_8;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 90, 82, 25));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 90, 131, 26));
        Total_Ebuild_progressBar = new QProgressBar(centralwidget);
        Total_Ebuild_progressBar->setObjectName(QString::fromUtf8("Total_Ebuild_progressBar"));
        Total_Ebuild_progressBar->setGeometry(QRect(340, 0, 211, 23));
        Total_Ebuild_progressBar->setValue(24);
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 50, 131, 25));
        dockWidget_2 = new QDockWidget(centralwidget);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        dockWidget_2->setGeometry(QRect(320, 40, 311, 351));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        Ebuild_Text_Window = new QTextBrowser(dockWidgetContents_2);
        Ebuild_Text_Window->setObjectName(QString::fromUtf8("Ebuild_Text_Window"));
        Ebuild_Text_Window->setGeometry(QRect(20, 10, 281, 281));
        horizontalScrollBar = new QScrollBar(dockWidgetContents_2);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(20, 300, 281, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        dockWidget_2->setWidget(dockWidgetContents_2);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 500, 141, 41));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(10, 470, 102, 21));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(70, 470, 102, 21));
        radioButton_3 = new QRadioButton(centralwidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(180, 470, 102, 21));
        comboBox_3 = new QComboBox(centralwidget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(130, 120, 82, 25));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(550, 0, 131, 25));
        SearchPKGHelp = new QTabWidget(centralwidget);
        SearchPKGHelp->setObjectName(QString::fromUtf8("SearchPKGHelp"));
        SearchPKGHelp->setGeometry(QRect(640, 40, 151, 501));
        tabWidget_2Page1 = new QWidget();
        tabWidget_2Page1->setObjectName(QString::fromUtf8("tabWidget_2Page1"));
        Ebuild_Text_Window_2 = new QTextBrowser(tabWidget_2Page1);
        Ebuild_Text_Window_2->setObjectName(QString::fromUtf8("Ebuild_Text_Window_2"));
        Ebuild_Text_Window_2->setGeometry(QRect(10, 10, 161, 471));
        SearchPKGHelp->addTab(tabWidget_2Page1, QString());
        tabWidget_2Page2 = new QWidget();
        tabWidget_2Page2->setObjectName(QString::fromUtf8("tabWidget_2Page2"));
        Ebuild_Text_Window_3 = new QTextBrowser(tabWidget_2Page2);
        Ebuild_Text_Window_3->setObjectName(QString::fromUtf8("Ebuild_Text_Window_3"));
        Ebuild_Text_Window_3->setGeometry(QRect(0, 10, 161, 241));
        SearchPKGHelp->addTab(tabWidget_2Page2, QString());
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 500, 171, 41));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(0, 0, 111, 21));
        Ebuild_Text_Window_4 = new QTextBrowser(centralwidget);
        Ebuild_Text_Window_4->setObjectName(QString::fromUtf8("Ebuild_Text_Window_4"));
        Ebuild_Text_Window_4->setGeometry(QRect(10, 120, 121, 31));
        Ebuild_Text_Window_5 = new QTextBrowser(centralwidget);
        Ebuild_Text_Window_5->setObjectName(QString::fromUtf8("Ebuild_Text_Window_5"));
        Ebuild_Text_Window_5->setGeometry(QRect(0, 160, 121, 71));
        comboBox_4 = new QComboBox(centralwidget);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(120, 160, 82, 25));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 240, 131, 26));
        comboBox_5 = new QComboBox(centralwidget);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(210, 240, 82, 25));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 270, 131, 26));
        Ebuild_Text_Window_6 = new QTextBrowser(centralwidget);
        Ebuild_Text_Window_6->setObjectName(QString::fromUtf8("Ebuild_Text_Window_6"));
        Ebuild_Text_Window_6->setGeometry(QRect(130, 240, 81, 31));
        Ebuild_Text_Window_7 = new QTextBrowser(centralwidget);
        Ebuild_Text_Window_7->setObjectName(QString::fromUtf8("Ebuild_Text_Window_7"));
        Ebuild_Text_Window_7->setGeometry(QRect(130, 280, 81, 31));
        comboBox_6 = new QComboBox(centralwidget);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(220, 280, 82, 25));
        toolButton_2 = new QToolButton(centralwidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(110, 0, 111, 21));
        Ebuild_Text_Window_8 = new QTextBrowser(centralwidget);
        Ebuild_Text_Window_8->setObjectName(QString::fromUtf8("Ebuild_Text_Window_8"));
        Ebuild_Text_Window_8->setGeometry(QRect(140, 320, 81, 31));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(0, 320, 131, 26));
        comboBox_7 = new QComboBox(centralwidget);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));
        comboBox_7->setGeometry(QRect(220, 320, 82, 25));
        Ebuild_Text_Window_9 = new QTextBrowser(centralwidget);
        Ebuild_Text_Window_9->setObjectName(QString::fromUtf8("Ebuild_Text_Window_9"));
        Ebuild_Text_Window_9->setGeometry(QRect(130, 360, 81, 31));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 360, 131, 26));
        comboBox_8 = new QComboBox(centralwidget);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));
        comboBox_8->setGeometry(QRect(220, 370, 82, 25));
        toolButton_3 = new QToolButton(centralwidget);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setGeometry(QRect(680, 530, 111, 21));
        toolButton_4 = new QToolButton(centralwidget);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setGeometry(QRect(220, 0, 111, 21));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        retranslateUi(MainWindow);

        SearchPKGHelp->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "EAPI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "EAPI 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "EAPI 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "EAPI 3", 0, QApplication::UnicodeUTF8)
        );
        pushButton->setText(QApplication::translate("MainWindow", "Search PKG family", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Total_Ebuild_progressBar->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Total Ebuild Progress.</p><p>Viable at 100%</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Ebuild-Class", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Q4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Q5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "console", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        dockWidget_2->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>ebuild text window</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Ebuild_Text_Window->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"># Copyright 1999-2013 Gentoo Foundation</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"># Distributed under the terms of the GNU General Public License v2</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"># https://bugs.gentoo.org/show_bug.cgi?id=442232</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"># $Header: Alpha-Linux-HAMM"
                        "ER-FUSE.ebuild,v 1.2 This header will need to be patched. or modified.   Exp $</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"># Michael R. Lawrence IT Security Admin @@ mike_at___Michaellawrenceit.com</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">### Sabayon-Zoro Bleeding Edge Network Security tools/Package ports.  for Gentoo &amp; Sabayon </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">### Ebuilds Someting I really Need to Learn.... for virtul packaging and or Adding more IT Sec/forensic tools to Gentoo.... Without having To beg.... </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">### Clue Factor Some-what of a clue !!!!!!!!!!! ******* DEVS PLZ look over the code Thank you...</p>\n"
"<p "
                        "style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">#### Ebuild Revised By a Real Gentoo Devloper/s :: (Add Names hear.                                    ::: (All hail) n Thanks be to the Dev/s.##</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">#### Hammer-Fuse By  Daniel Lorch &lt;dlorch@gmail.com&gt; (Author.)</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">EAPI=5</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">inherit scons-utils toolchain-funcs #udev</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px"
                        "; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">DESCRIPTION=&quot;HAMMER-FUSE filesystem module&quot;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">HOMEPAGE=&quot;http://dlorch.github.com/hammer-fuse/&quot;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">SRC_URI=&quot;https://github.com/dlorch/hammer-fuse/tarball/master/${P}.tar.gz&quot; </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">LICENSE=&quot;BSD&quot;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; marg"
                        "in-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">#### Hammer FUSE Author Requested Dragon Fly BSD Licence Type if Posible.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">SLOT=&quot;0&quot;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">KEYWORDS=&quot;~arm ~amd64 ~x86 ~arm-linux ~x86-linux&quot;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IUSE=&quot;&quot;</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; mar"
                        "gin-right:0px; -qt-block-indent:0; text-indent:0px;\">RDEPEND=&quot;sys-fs/fuse&quot;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">DEPEND=${RDEPEND}</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">src_compile() {</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	tc-export AR CC RANLIB</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	escons CCFLAGS=&quot;${CFLAGS}&quot;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">}</p>\n"
"<p style=\"-qt-paragraph-ty"
                        "pe:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">src_install() {</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	dosbin fuse/mount.fusehammer </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	dosym mount.hammer-fuse /usr/sbin/mount.fusehammer </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	doman */*.8</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0;"
                        " text-indent:0px;\">	dodoc ChangeLog</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">}</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">pkg_postinst() {</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	echo</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	elog 'Warning 'HAMMER-FUSE' for Linux is still Very ALPHA and Readonly.. and a Powder-KEG --LIVECD/Forensics-LiveCD use is FINE --Be-forwared on a production System IT may/manot Crash Without warning'</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right"
                        ":0px; -qt-block-indent:0; text-indent:0px;\">	echo</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">}</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Browse SRC+PKG", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", "RPM", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindow", "Debian/Ubut", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("MainWindow", "Slack", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "SysFS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "SysKernal", 0, QApplication::UnicodeUTF8)
        );
        lineEdit->setText(QApplication::translate("MainWindow", "Search PKG names", 0, QApplication::UnicodeUTF8));
        Ebuild_Text_Window_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">POP out Help Window Hear.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">pkg search above looks on web/gentoo for foo... etc neded... </p></body></html>", 0, QApplication::UnicodeUTF8));
        SearchPKGHelp->setTabText(SearchPKGHelp->indexOf(tabWidget_2Page1), QString());
        Ebuild_Text_Window_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Help menu</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Dev menues.</p></body></html>", 0, QApplication::UnicodeUTF8));
        SearchPKGHelp->setTabText(SearchPKGHelp->indexOf(tabWidget_2Page2), QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "Convert to Ebuild", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("MainWindow", "File menues", 0, QApplication::UnicodeUTF8));
        Ebuild_Text_Window_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sys-FS &gt;button</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">limits button of starting families or sub families.</p></body></html>", 0, QApplication::UnicodeUTF8));
        Ebuild_Text_Window_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">cool new pkgname</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">or editing name hear</p></body></html>", 0, QApplication::UnicodeUTF8));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "New Item", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "SysFS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "SysKernal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "New Item", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        pushButton_4->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Dependencies</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushButton_4->setText(QApplication::translate("MainWindow", "Search deps", 0, QApplication::UnicodeUTF8));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "SysFS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "SysKernal", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        pushButton_5->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Reverse Dependencies</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushButton_5->setText(QApplication::translate("MainWindow", "Search Rdeps", 0, QApplication::UnicodeUTF8));
        Ebuild_Text_Window_6->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Search</p></body></html>", 0, QApplication::UnicodeUTF8));
        Ebuild_Text_Window_7->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Search</p></body></html>", 0, QApplication::UnicodeUTF8));
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "SysFS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "SysKernal", 0, QApplication::UnicodeUTF8)
        );
        toolButton_2->setText(QApplication::translate("MainWindow", "tools menues", 0, QApplication::UnicodeUTF8));
        Ebuild_Text_Window_8->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Search</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        pushButton_6->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Reverse Dependencies</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushButton_6->setText(QApplication::translate("MainWindow", "EUSE's", 0, QApplication::UnicodeUTF8));
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "SysFS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "SysKernal", 0, QApplication::UnicodeUTF8)
        );
        Ebuild_Text_Window_9->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Search</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        pushButton_7->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Reverse Dependencies</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pushButton_7->setText(QApplication::translate("MainWindow", "Licences  ", 0, QApplication::UnicodeUTF8));
        comboBox_8->clear();
        comboBox_8->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "GPL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "BSD", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "MPL", 0, QApplication::UnicodeUTF8)
        );
        toolButton_3->setText(QApplication::translate("MainWindow", "tools menues", 0, QApplication::UnicodeUTF8));
        toolButton_4->setText(QApplication::translate("MainWindow", "Patches Add", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EZ_2D_EBUILDER_2D_CONCEPTN15999_H
