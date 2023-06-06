#include "FirstScene.hpp"
#include "Figure.h"
#include "DrawLib.hpp"
#include "GL/freeglut.h"
void FirstBackground() {

	glColor3ub(18, 143, 196);
	glBegin(GL_QUADS); // небо
	glVertex2f(-2, 1);
	glVertex2f(2, 1);
	glVertex2f(2, -2);
	glVertex2f(-2, -2);

	glEnd();
	glPopMatrix();

	

	// glColor3ub(214, 149, 19);
	glBegin(GL_QUADS); // песок
	glColor3ub(124, 252, 0);
	glVertex2f(-2, -2);
	glColor3ub(124, 252, 0);
	glVertex2f(-2, -0.5);
	glColor3ub(124, 252, 0);
	glVertex2f(2, -0.5);
	glColor3ub(124, 252, 0);
	glVertex2f(2, -2);

	glEnd();

	glColor3ub(102, 98, 91);
	glBegin(GL_QUADS); // типо стойки под кораблем
	glVertex2f(-0.5, -2);
	glVertex2f(-0.5, -0.93);
	glVertex2f(0.5, -2);
	glVertex2f(0.5, -0.93);

	glEnd();


	glBegin(GL_POLYGON); // горка левая
	glColor3ub(124, 252, 0);
	glVertex2f(0.4, -0.5);
	glColor3ub(124, 252, 0);
	glVertex2f(0.6, -0.35);
	glColor3ub(124, 252, 0);
	glVertex2f(0.72, -0.35);
	glColor3ub(124, 252, 0);
	glVertex2f(0.79, -0.3);
	glColor3ub(110, 64, 12);
	glVertex2f(0.87, -0.3);
	glColor3ub(0, 255, 0);
	glVertex2f(0.94, -0.26);
	glColor3ub(0, 255, 0);
	glVertex2f(1, -0.26);
	glColor3ub(110, 64, 12);
	glVertex2f(1, -0.5);


	glEnd();

	

	//Отрисовка стойки
	float x = -0.4, y = 0.8; // координаты для решетки
	float x2 = -0.3, y2 = 0.7;

	float yy = 0.7;
	float yy1 = 0.8;
	glPushMatrix();
	glBegin(GL_LINE_STRIP); // Левая балка стойки
	glVertex2f(-0.4, 0.6);
	glVertex2f(-0.4, -.93);
	glEnd();

	glBegin(GL_LINE_STRIP); // правая балка стойки
	glVertex2f(-0.3, 0.6);
	glVertex2f(-0.3, -.93);
	glEnd();

	glBegin(GL_LINES); // решетка внутри стойки
	for (float i = 0; i < 15; i++) { // цикл для отрисовки первой линии
		y = y - 0.1;
		y2 = y2 - 0.1;
		glVertex2f(x, y - 0.1);
		glVertex2f(x2, y2 - 0.1);
	}
	for (float i = 0; i < 15; i++) { // цикл для отрисовки второй линии
		yy = yy - 0.1;
		yy1 = yy1 - 0.1;
		glVertex2f(x, yy - 0.1);
		glVertex2f(x2, yy1 - 0.1);

	}

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(87, 84, 80);
	glVertex2f(-.42, 0.06);
	glVertex2f(-.42, -0.04);
	glVertex2f(-.28, 0.06);
	glVertex2f(-.28, -0.04);
	glVertex2f(-.42, -0.04);

	glEnd(); 
}