#include "mainwindow.h"
#include "ui_mainwindow.h"


int oorx = 0;


MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)

{
	ui->setupUi(this);
	ui->pushButton->setStyleSheet("background-color: grey");

}

MainWindow::~MainWindow()
{
	delete ui;
}



int btn11 = 3;
int btn12 = 3;
int btn13 = 3;

int btn21 = 3;
int btn22 = 3;
int btn23 = 3;

int btn31 = 3;
int btn32 = 3;
int btn33 = 3;



void MainWindow::doLoss(int whoWon){
	if(whoWon != 1){
		ui->pushButton->setText("X Won");
		ui->pushButton->setStyleSheet("background-color: red");

	} else{
		ui->pushButton->setText("O Won");
		ui->pushButton->setStyleSheet("background-color: lightblue");


	}
}

void MainWindow::checkIfWin(){

	//x,x,x
	//o,o,o
	//x,x,x
	if(btn11 == 0 && btn12 == 0 && btn13 == 0){
		doLoss(0);
	}
	if(btn11 == 1 && btn12 == 1 && btn13 == 1){
		doLoss(1);
	}


	if(btn21 == 0 && btn22 == 0 && btn23 == 0){
		doLoss(0);
	}
	if(btn21 == 1 && btn22 == 1 && btn23 == 1){
		doLoss(1);
	}


	if(btn31 == 0 && btn32 == 0 && btn33 == 0){
		doLoss(0);
	}
	if(btn31 == 1 && btn32 == 1 && btn33 == 1){
		doLoss(1);
	}




	//x,o,x
	//x,o,x
	//x,o,x
	if(btn11 == 0 && btn21 == 0 && btn31 == 0){
		doLoss(0);
	}
	if(btn11 == 1 && btn21 == 1 && btn31 == 1){
		doLoss(1);
	}

	if(btn12 == 0 && btn22 == 0 && btn32 == 0){
		doLoss(0);
	}
	if(btn12 == 1 && btn22 == 1 && btn32 == 1){
		doLoss(1);
	}

	if(btn13 == 0 && btn23 == 0 && btn33 == 0){
		doLoss(0);
	}
	if(btn13 == 1 && btn23 == 1 && btn33 == 1){
		doLoss(1);
	}


	//x,T,T
	//T,x,T
	//T,T,x
	if(btn11 == 0 && btn22 == 0 && btn33 == 0){
		doLoss(0);
	}
	if(btn11 == 1 && btn22 == 1 && btn33 == 1){
		doLoss(1);
	}
	//T,T,x
	//T,x,T
	//x,T,T
	if(btn13 == 0 && btn22 == 0 && btn31 == 0){
		doLoss(0);
	}
	if(btn13 == 1 && btn22 == 1 && btn31 == 1){
		doLoss(1);
	}

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
	btn11 = oorx;
	checkIfWin();
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
	btn12 = oorx;
	checkIfWin();
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
	btn13 = oorx;
	checkIfWin();
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
	btn21 = oorx;
	checkIfWin();
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
	btn22 = oorx;
	checkIfWin();
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
	btn23 = oorx;
	checkIfWin();
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
	btn31 = oorx;
	checkIfWin();
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
	btn32= oorx;
	checkIfWin();
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
	btn33 = oorx;
	checkIfWin();
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
	ui->pushButton->setText("Restart");

	ui->pushButton->setStyleSheet("background-color: grey");

	btn11 = 3;
	btn12 = 3;
	btn13 = 3;

	btn21 = 3;
	btn22 = 3;
	btn23 = 3;

	btn31 = 3;
	btn32 = 3;
	btn33 = 3;



}
