/********************************************************************************
** Form generated from reading UI file 'User-Manager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_2D_MANAGER_H
#define UI_USER_2D_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigDialog
{
public:
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox1;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *chkcurrent_server;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *L_NAME;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *L_UID;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *speChannelGroupAdmin;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lb_special;
    QSpinBox *speChannelGroupOperator;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpinBox *speChannelGroupBan;
    QGroupBox *groupBox2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *kickmessage;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox3;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkAutoBan;
    QCheckBox *chkAutoKick;
    QCheckBox *chkAutoMute;
    QCheckBox *chkAntiChannelBan;
    QCheckBox *chkAutoOperator;
    QCheckBox *chkAutoTalkpower;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *chkLog;
    QCheckBox *chkNotifikations;
    QCheckBox *chkUseTSList;
    QCheckBox *chkWorking;
    QCheckBox *chkChannelNotifikations;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox3_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLineEdit *NameFilter;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLineEdit *minimumNumberofTotalConnections;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnSave;
    QPushButton *btnImport_Buddys;
    QPushButton *btnImport_Blocked;

    void setupUi(QDialog *ConfigDialog)
    {
        if (ConfigDialog->objectName().isEmpty())
            ConfigDialog->setObjectName(QString::fromUtf8("ConfigDialog"));
        ConfigDialog->resize(412, 599);
        verticalLayout_6 = new QVBoxLayout(ConfigDialog);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox1 = new QGroupBox(ConfigDialog);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        groupBox1->setCheckable(false);
        groupBox1->setChecked(false);
        verticalLayout_4 = new QVBoxLayout(groupBox1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        chkcurrent_server = new QCheckBox(groupBox1);
        chkcurrent_server->setObjectName(QString::fromUtf8("chkcurrent_server"));

        verticalLayout_4->addWidget(chkcurrent_server);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(groupBox1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        L_NAME = new QLabel(groupBox1);
        L_NAME->setObjectName(QString::fromUtf8("L_NAME"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        L_NAME->setFont(font);

        horizontalLayout->addWidget(L_NAME);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(groupBox1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        L_UID = new QLabel(groupBox1);
        L_UID->setObjectName(QString::fromUtf8("L_UID"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        L_UID->setFont(font1);

        horizontalLayout_2->addWidget(L_UID);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(groupBox1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        horizontalLayout_3->addWidget(label_4);

        speChannelGroupAdmin = new QSpinBox(groupBox1);
        speChannelGroupAdmin->setObjectName(QString::fromUtf8("speChannelGroupAdmin"));
        speChannelGroupAdmin->setEnabled(false);
        speChannelGroupAdmin->setMaximum(999999);

        horizontalLayout_3->addWidget(speChannelGroupAdmin);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lb_special = new QLabel(groupBox1);
        lb_special->setObjectName(QString::fromUtf8("lb_special"));

        horizontalLayout_4->addWidget(lb_special);

        speChannelGroupOperator = new QSpinBox(groupBox1);
        speChannelGroupOperator->setObjectName(QString::fromUtf8("speChannelGroupOperator"));
        speChannelGroupOperator->setEnabled(false);
        speChannelGroupOperator->setMaximum(999999);

        horizontalLayout_4->addWidget(speChannelGroupOperator);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(groupBox1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        speChannelGroupBan = new QSpinBox(groupBox1);
        speChannelGroupBan->setObjectName(QString::fromUtf8("speChannelGroupBan"));
        speChannelGroupBan->setEnabled(false);
        speChannelGroupBan->setMaximum(999999);

        horizontalLayout_5->addWidget(speChannelGroupBan);


        verticalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout_6->addWidget(groupBox1);

        groupBox2 = new QGroupBox(ConfigDialog);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        verticalLayout_5 = new QVBoxLayout(groupBox2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBox2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        kickmessage = new QLineEdit(groupBox2);
        kickmessage->setObjectName(QString::fromUtf8("kickmessage"));

        horizontalLayout_6->addWidget(kickmessage);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        groupBox3 = new QGroupBox(groupBox2);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        verticalLayout = new QVBoxLayout(groupBox3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chkAutoBan = new QCheckBox(groupBox3);
        chkAutoBan->setObjectName(QString::fromUtf8("chkAutoBan"));
        chkAutoBan->setEnabled(true);

        verticalLayout->addWidget(chkAutoBan);

        chkAutoKick = new QCheckBox(groupBox3);
        chkAutoKick->setObjectName(QString::fromUtf8("chkAutoKick"));

        verticalLayout->addWidget(chkAutoKick);

        chkAutoMute = new QCheckBox(groupBox3);
        chkAutoMute->setObjectName(QString::fromUtf8("chkAutoMute"));
        chkAutoMute->setEnabled(true);

        verticalLayout->addWidget(chkAutoMute);

        chkAntiChannelBan = new QCheckBox(groupBox3);
        chkAntiChannelBan->setObjectName(QString::fromUtf8("chkAntiChannelBan"));
        chkAntiChannelBan->setEnabled(true);

        verticalLayout->addWidget(chkAntiChannelBan);

        chkAutoOperator = new QCheckBox(groupBox3);
        chkAutoOperator->setObjectName(QString::fromUtf8("chkAutoOperator"));
        chkAutoOperator->setEnabled(true);

        verticalLayout->addWidget(chkAutoOperator);

        chkAutoTalkpower = new QCheckBox(groupBox3);
        chkAutoTalkpower->setObjectName(QString::fromUtf8("chkAutoTalkpower"));
        chkAutoTalkpower->setEnabled(true);

        verticalLayout->addWidget(chkAutoTalkpower);


        horizontalLayout_7->addWidget(groupBox3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        chkLog = new QCheckBox(groupBox2);
        chkLog->setObjectName(QString::fromUtf8("chkLog"));

        verticalLayout_3->addWidget(chkLog);

        chkNotifikations = new QCheckBox(groupBox2);
        chkNotifikations->setObjectName(QString::fromUtf8("chkNotifikations"));
        chkNotifikations->setEnabled(true);

        verticalLayout_3->addWidget(chkNotifikations);

        chkUseTSList = new QCheckBox(groupBox2);
        chkUseTSList->setObjectName(QString::fromUtf8("chkUseTSList"));

        verticalLayout_3->addWidget(chkUseTSList);

        chkWorking = new QCheckBox(groupBox2);
        chkWorking->setObjectName(QString::fromUtf8("chkWorking"));

        verticalLayout_3->addWidget(chkWorking);

        chkChannelNotifikations = new QCheckBox(groupBox2);
        chkChannelNotifikations->setObjectName(QString::fromUtf8("chkChannelNotifikations"));

        verticalLayout_3->addWidget(chkChannelNotifikations);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_7->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_7);


        verticalLayout_6->addWidget(groupBox2);

        groupBox3_2 = new QGroupBox(ConfigDialog);
        groupBox3_2->setObjectName(QString::fromUtf8("groupBox3_2"));
        verticalLayout_7 = new QVBoxLayout(groupBox3_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(groupBox3_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        NameFilter = new QLineEdit(groupBox3_2);
        NameFilter->setObjectName(QString::fromUtf8("NameFilter"));

        horizontalLayout_9->addWidget(NameFilter);


        verticalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label = new QLabel(groupBox3_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_8->addWidget(label);

        minimumNumberofTotalConnections = new QLineEdit(groupBox3_2);
        minimumNumberofTotalConnections->setObjectName(QString::fromUtf8("minimumNumberofTotalConnections"));

        horizontalLayout_8->addWidget(minimumNumberofTotalConnections);


        verticalLayout_7->addLayout(horizontalLayout_8);


        verticalLayout_6->addWidget(groupBox3_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btnSave = new QPushButton(ConfigDialog);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setEnabled(true);
        btnSave->setCheckable(false);

        verticalLayout_2->addWidget(btnSave);

        btnImport_Buddys = new QPushButton(ConfigDialog);
        btnImport_Buddys->setObjectName(QString::fromUtf8("btnImport_Buddys"));
        btnImport_Buddys->setEnabled(true);
        btnImport_Buddys->setCheckable(false);

        verticalLayout_2->addWidget(btnImport_Buddys);

        btnImport_Blocked = new QPushButton(ConfigDialog);
        btnImport_Blocked->setObjectName(QString::fromUtf8("btnImport_Blocked"));
        btnImport_Blocked->setEnabled(true);
        btnImport_Blocked->setCheckable(false);

        verticalLayout_2->addWidget(btnImport_Blocked);


        verticalLayout_6->addLayout(verticalLayout_2);

        QWidget::setTabOrder(speChannelGroupAdmin, speChannelGroupOperator);
        QWidget::setTabOrder(speChannelGroupOperator, speChannelGroupBan);
        QWidget::setTabOrder(speChannelGroupBan, chkAutoBan);
        QWidget::setTabOrder(chkAutoBan, btnSave);

        retranslateUi(ConfigDialog);

        QMetaObject::connectSlotsByName(ConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigDialog)
    {
        ConfigDialog->setWindowTitle(QApplication::translate("ConfigDialog", "Configuration - User-Manger", nullptr));
        groupBox1->setTitle(QApplication::translate("ConfigDialog", "Current Server", nullptr));
        chkcurrent_server->setText(QApplication::translate("ConfigDialog", "For Current Server enabled", nullptr));
        label_5->setText(QApplication::translate("ConfigDialog", "Current Servername:", nullptr));
        L_NAME->setText(QApplication::translate("ConfigDialog", "No Server", nullptr));
        label_3->setText(QApplication::translate("ConfigDialog", "Current Server UID:", nullptr));
        L_UID->setText(QApplication::translate("ConfigDialog", "No Server", nullptr));
        label_4->setText(QApplication::translate("ConfigDialog", "Channel Admin Group:", nullptr));
        lb_special->setText(QApplication::translate("ConfigDialog", "Operator Group:", nullptr));
        label_2->setText(QApplication::translate("ConfigDialog", "Channel Ban Group :", nullptr));
        groupBox2->setTitle(QApplication::translate("ConfigDialog", "Global Settings", nullptr));
        label_6->setText(QApplication::translate("ConfigDialog", "Custom Kick Message:", nullptr));
        groupBox3->setTitle(QApplication::translate("ConfigDialog", "Default Options for new User:", nullptr));
#ifndef QT_NO_TOOLTIP
        chkAutoBan->setToolTip(QApplication::translate("ConfigDialog", "Automatically bans blocked users from your channel", nullptr));
#endif // QT_NO_TOOLTIP
        chkAutoBan->setText(QApplication::translate("ConfigDialog", "Auto ban blocked users", nullptr));
        chkAutoKick->setText(QApplication::translate("ConfigDialog", "Auto kick blocked Users from your channel", nullptr));
#ifndef QT_NO_TOOLTIP
        chkAutoMute->setToolTip(QApplication::translate("ConfigDialog", "Automatically mutes users when you block them with this plugin", nullptr));
#endif // QT_NO_TOOLTIP
        chkAutoMute->setText(QApplication::translate("ConfigDialog", "Auto mute blocked users", nullptr));
#ifndef QT_NO_TOOLTIP
        chkAntiChannelBan->setToolTip(QApplication::translate("ConfigDialog", "Automatically removes channel ban from plugin buddies (If you're the channel admin)", nullptr));
#endif // QT_NO_TOOLTIP
        chkAntiChannelBan->setText(QApplication::translate("ConfigDialog", "Remove channel ban from buddies", nullptr));
#ifndef QT_NO_TOOLTIP
        chkAutoOperator->setToolTip(QApplication::translate("ConfigDialog", "Automatically gives channel operator to your plugin buddies when you're channel admin", nullptr));
#endif // QT_NO_TOOLTIP
        chkAutoOperator->setText(QApplication::translate("ConfigDialog", "Buddys Auto Operator ", nullptr));
#ifndef QT_NO_TOOLTIP
        chkAutoTalkpower->setToolTip(QApplication::translate("ConfigDialog", "Automatically grants talk power to your plugin buddies when you're operator", nullptr));
#endif // QT_NO_TOOLTIP
        chkAutoTalkpower->setText(QApplication::translate("ConfigDialog", "Buddys Auto Talkpower", nullptr));
#ifndef QT_NO_TOOLTIP
        chkLog->setToolTip(QApplication::translate("ConfigDialog", "Toggles debug logging to console", nullptr));
#endif // QT_NO_TOOLTIP
        chkLog->setText(QApplication::translate("ConfigDialog", "Logging", nullptr));
#ifndef QT_NO_TOOLTIP
        chkNotifikations->setToolTip(QApplication::translate("ConfigDialog", "Adds informational messages to your current chat tab", nullptr));
#endif // QT_NO_TOOLTIP
        chkNotifikations->setText(QApplication::translate("ConfigDialog", "Notifications", nullptr));
        chkUseTSList->setText(QApplication::translate("ConfigDialog", "Use Teamspeak List", nullptr));
#ifndef QT_NO_TOOLTIP
        chkWorking->setToolTip(QApplication::translate("ConfigDialog", "If this Option is false no User would get any new channel Group ( like the Plugin is deactivated)", nullptr));
#endif // QT_NO_TOOLTIP
        chkWorking->setText(QApplication::translate("ConfigDialog", "Plugin Active", nullptr));
#ifndef QT_NO_TOOLTIP
        chkChannelNotifikations->setToolTip(QApplication::translate("ConfigDialog", "Notfications in the  Channel Chat if you remove a User out of the Channel", nullptr));
#endif // QT_NO_TOOLTIP
        chkChannelNotifikations->setText(QApplication::translate("ConfigDialog", "Channel Notification", nullptr));
        groupBox3_2->setTitle(QApplication::translate("ConfigDialog", "Extra Settings ( who matches these filter will be handled as a blocked User)", nullptr));
        label_7->setText(QApplication::translate("ConfigDialog", "NameFilter (Regex) :", nullptr));
        label->setText(QApplication::translate("ConfigDialog", "Minimumnumber of TotalConnections:", nullptr));
        btnSave->setText(QApplication::translate("ConfigDialog", "Save && Apply", nullptr));
        btnImport_Buddys->setText(QApplication::translate("ConfigDialog", "Import Teamspeak buddies to User Manager", nullptr));
        btnImport_Blocked->setText(QApplication::translate("ConfigDialog", "Import Teamspeak blocked users to User Manager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigDialog: public Ui_ConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_2D_MANAGER_H
