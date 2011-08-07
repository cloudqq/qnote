/*
 * =====================================================================================
 *
 *       Filename:  mainwindow.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2011年08月07日 14时56分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mario (), cloudqq@gmail.com
 *        Company:  chinadim
 *
 * =====================================================================================
 */

#include <QtGui>
#include "mainwindow.h"

MainWindow::MainWindow()
{
	textViewer = new QTextEdit();
	setCentralWidget(textViewer);
	createActions();

	resize(750,400);

}

void MainWindow::about()
{

}

void MainWindow::open()
{

}

void MainWindow::closeEvent(QCloseEvent *event)
{

}

void MainWindow::createActions()
{
	openAction = new QAction("Open", this);
 	closeAction = new QAction("Close", this);

	connect(openAction, SIGNAL(triggered()), this, SLOT(open()));
	connect(closeAction, SIGNAL(triggered()), this, SLOT(close()));
}


