#include "mainwindow.h"
#include "ui_mainwindow.h"


int oorx = 0;


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


void MainWindow::on_btn11_clicked()
{
	if(oorx == 0){
		ui->btn11->setText("O");
		oorx = oorx + 1;
	} else{
		ui->btn11->setText("X");
		oorx = oorx - 1;
	}
}

void MainWindow::on_btn12_clicked()
{
	if(oorx == 0){
		ui->btn12->setText("O");
		oorx = oorx + 1;
	} else{
		ui->btn12->setText("X");
		oorx = oorx - 1;
	}
}


void MainWindow::on_btn13_clicked()
{
	if(oorx == 0){
		ui->btn13->setText("O");
		oorx = oorx + 1;
	} else{
		ui->btn13->setText("X");
		oorx = oorx - 1;
	}
}

void MainWindow::on_btn21_clicked()
{
	if(oorx == 0){
		ui->btn21->setText("O");
		oorx = oorx + 1;
	} else{
		ui->btn21->setText("X");
		oorx = oorx - 1;
	}
}

void MainWindow::on_btn22_clicked()
{
	if(oorx == 0){
		ui->btn22->setText("O");
		oorx = oorx + 1;
	} else{
		ui->btn22->setText("X");
		oorx = oorx - 1;
	}
}

void MainWindow::on_btn23_clicked()
{
	if(oorx == 0){
		ui->btn23->setText("O");
		oorx = oorx + 1;
	} else{
		ui->btn23->setText("X");
		oorx = oorx - 1;
	}
}

void MainWindow::on_btn31_clicked()
{
	if(oorx == 0){
		ui->btn31->setText("O");
		oorx = oorx + 1;
	} else{
		ui->btn31->setText("X");
		oorx = oorx - 1;
	}
}

void MainWindow::on_btn32_clicked()
{
	if(oorx == 0){
		ui->btn32->setText("O");
		oorx = oorx + 1;
	} else{
		ui->btn32->setText("X");
		oorx = oorx - 1;
	}
}

void MainWindow::on_btn33_clicked()
{
	if(oorx == 0){
		ui->btn33->setText("O");
		oorx = oorx + 1;
	} else{
		ui->btn33->setText("X");
		oorx = oorx - 1;
	}
}

void MainWindow::on_pushButton_clicked()
{
	ui->btn11->setText("");
	ui->btn12->setText("");
	ui->btn13->setText("");
	ui->btn21->setText("");
	ui->btn22->setText("");
	ui->btn23->setText("");
	ui->btn31->setText("");
	ui->btn32->setText("");
	ui->btn33->setText("");



}
