#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonCalcular_clicked()
{
    long valor = ui->lineEditValor->text().toLong();
    QString saida = "RESULTADOS OBTIDOS \n";
    saida += "Somatorio interativo = ";
    saida += QString::number(ejm::Recursividade::somatorioI(valor));
    saida += "\nSomatorio recursividade = ";
    saida += QString::number(ejm::Recursividade::somatorioR(valor));
    ui->textEditSaida->setText(saida);
}

