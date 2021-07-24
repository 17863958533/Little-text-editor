#include "qwmainwindow.h"
#include "ui_qwmainwindow.h"

QWMainWindow::QWMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QWMainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("E:\\QtProject\\samp2_4\\icon\\20.ico"));

    iniUI();
    iniSingalSlots();
}

QWMainWindow::~QWMainWindow()
{
    delete ui;
}

void QWMainWindow::iniUI()
{
    //状态栏上添加组件
    fLabCurFile=new QLabel;
    fLabCurFile->setMinimumWidth(150);
    fLabCurFile->setText("字体所占屏幕比例：");
    ui->statusbar->addWidget(fLabCurFile);

    progressBar1=new QProgressBar;
    progressBar1->setMaximumWidth(200);
    progressBar1->setMinimum(5);
    progressBar1->setMaximum(50);
    progressBar1->setValue(ui->textEdit->font().pointSize());
    ui->statusbar->addWidget(progressBar1);

    //工具栏上添加组件
    spinFontSize =new QSpinBox;
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->textEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);
    ui->toolBar->addWidget(new QLabel(" 字体大小 "));
    ui->toolBar->addWidget(spinFontSize);

    ui->toolBar->addSeparator();
    ui->toolBar->addWidget(new QLabel(" 字体 "));
    comboFont=new QFontComboBox;
    comboFont->setMinimumWidth(150);
    ui->toolBar->addWidget(comboFont);

    setCentralWidget(ui->textEdit);

}

void QWMainWindow::iniSingalSlots()
{
    connect(spinFontSize,SIGNAL(valueChanged(int)),this,SLOT(on_spinBoxFontSize_valueChanged(int)));
    connect(comboFont,SIGNAL(currentIndexChanged(const QString &)),this,SLOT(on_comboFont_currentIndexChanged(const QString &)));
}


void QWMainWindow::on_actFontBold_triggered(bool checked) //加粗字体槽函数
{
    QTextCharFormat fmt;
    fmt=ui->textEdit->currentCharFormat();
    if(checked)
    {
        fmt.setFontWeight(QFont::Bold);
    }
    else
    {
        fmt.setFontWeight(QFont::Normal);
    }

    ui->textEdit->mergeCurrentCharFormat(fmt);

}


void QWMainWindow::on_actFontItalic_triggered(bool checked)//倾斜字体槽函数
{
    QTextCharFormat fmt;
    fmt=ui->textEdit->currentCharFormat();
    fmt.setFontItalic(checked);
    ui->textEdit->mergeCurrentCharFormat(fmt);

}



void QWMainWindow::on_actFontUnder_triggered(bool checked)//设置下划线槽函数
{
    QTextCharFormat fmt;
    fmt=ui->textEdit->currentCharFormat();
    fmt.setFontUnderline(checked);
    ui->textEdit->mergeCurrentCharFormat(fmt);

}

void QWMainWindow::on_textEdit_copyAvailable(bool b)//更新剪切，复制，粘贴功能的属性,使其智能一些
{
    ui->actCut->setEnabled(b);
    ui->actCopy->setEnabled(b);
    ui->actPaste->setEnabled(ui->textEdit->canPaste());
}

void QWMainWindow::on_textEdit_selectionChanged()//更新加粗，倾斜，下划线功能的属性,使其智能一些
{
    QTextCharFormat fmt;
    fmt=ui->textEdit->currentCharFormat();
    ui->actFontBold->setChecked(fmt.font().bold());
    ui->actFontItalic->setChecked(fmt.fontItalic());
    ui->actFontUnder->setChecked(fmt.fontUnderline());
}

void QWMainWindow::on_spinBoxFontSize_valueChanged(int aFontSize)
{
    //改变字体大小
    QTextCharFormat fmt;
    fmt.setFontPointSize(aFontSize);
    ui->textEdit->mergeCurrentCharFormat(fmt);
    progressBar1->setValue(aFontSize);

}

void QWMainWindow::on_comboFont_currentIndexChanged(const QString &arg1)
{
    //FontComBox的响应，选择字体名称
    QTextCharFormat fmt;
    fmt.setFontFamily(arg1);
    ui->textEdit->mergeCurrentCharFormat(fmt);
}
