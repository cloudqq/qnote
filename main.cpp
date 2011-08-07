/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2011年08月07日 14时29分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mario (), cloudqq@gmail.com
 *        Company:  chinadim
 *
 * =====================================================================================
 */


#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	MainWindow main;
	main.show();
	return app.exec();
}

