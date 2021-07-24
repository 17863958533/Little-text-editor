#ifndef QWMAINWINDOW_H
#define QWMAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QProgressBar>
#include <QSpinBox>
#include <QFontComboBox>

QT_BEGIN_NAMESPACE
namespace Ui { class QWMainWindow; }
QT_END_NAMESPACE

class QWMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QWMainWindow(QWidget *parent = nullptr);
    ~QWMainWindow();

private slots:
    void on_actFontBold_triggered(bool checked);

    void on_actFontItalic_triggered(bool checked);

    void on_actFontUnder_triggered(bool checked);

    void on_textEdit_copyAvailable(bool b);

    void on_textEdit_selectionChanged();

    //下面是自己定义的槽函数
    void on_spinBoxFontSize_valueChanged(int aFontSize);//改变字体的大小
    void on_comboFont_currentIndexChanged(const QString &arg1);//选择字体

private:
    Ui::QWMainWindow *ui;

    QLabel *fLabCurFile;//状态栏显示当前文件的label
    QProgressBar *progressBar1;//状态栏上的进度条
    QSpinBox *spinFontSize;//字体大小spinBox
    QFontComboBox *comboFont;//字体名称comboBox
    void iniUI();//初始化UI
    void iniSingalSlots();//关联自定义的函数



};
#endif // QWMAINWINDOW_H
