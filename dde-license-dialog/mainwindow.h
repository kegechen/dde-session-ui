#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <dabstractdialog.h>

DWIDGET_USE_NAMESPACE

class Content;
class QLabel;
class MainWindow : public DAbstractDialog
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setTitle(const QString& title);
    void setEnTitle(const QString& title);
    void setEnableAllowCheckBox(const bool enable);
    void setAllowCheckBoxText(const QString& text);
    void setEnAllowCheckBoxText(const QString& text);
    void setCnSource(const QString& source);
    void setEnSource(const QString& source);
    void updateLocaleSource();

private:
    QLabel* m_title;
    Content* m_content;

    QString m_cnTitle;
    QString m_enTitle;
};

#endif // MAINWINDOW_H
