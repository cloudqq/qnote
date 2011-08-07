/*
 * =====================================================================================
 *
 *       Filename:  mainwindow.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2011年08月07日 14时51分17秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mario (), cloudqq@gmail.com
 *        Company:  chinadim
 *
 * =====================================================================================
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>

class MainWindow: public QMainWindow
{
	Q_OBJECT
	
public:
	MainWindow();

private slots:
	void about();
	void open();
protected:
	void closeEvent(QCloseEvent *event);

private:

	void createActions();

	QMenu   *fileMenu;
	QMenu   *helpMenu;

	QAction *openAction;
	QAction *closeAction;

	QTextEdit *textViewer;


};



#endif
