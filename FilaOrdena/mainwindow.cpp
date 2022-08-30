#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ordena.h>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonGerar_clicked()
{
    try {
        int tamanho = ui->lineEditTamanhoVetor->text().toInt();

        taM::Ordena teste(tamanho);

        QString saida = "";
        QString saida2 = "";

       saida += teste.getVetorDesordenado();
       saida2 += teste.getFilaOrdenada();

        ui->lineEditDesordenado->setText(saida);
        ui->lineEditOrdenado->setText(saida2);
    }  catch (QString &erro) {
        QMessageBox::information(this, "erro na fila",erro);
    }


}

