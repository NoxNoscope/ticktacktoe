#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = nullptr);
	~MainWindow();

private slots:
	void doLoss(int);

	void checkIfWin();

	void on_btn11_clicked();

	void on_btn12_clicked();

	void on_btn13_clicked();

	void on_btn21_clicked();

	void on_btn22_clicked();

	void on_btn23_clicked();

	void on_btn31_clicked();

	void on_btn32_clicked();

	void on_btn33_clicked();

	void on_pushButton_clicked();

private:
	Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
