#include "FifthScene.hpp"
#include "Figure.h"
#include "DrawLib.hpp"
#include "GL/freeglut.h"

void FifthBackground() {

	glColor3ub(25, 25, 25);
	glBegin(GL_QUADS); // небо
	glVertex2f(-1, 1);
	glVertex2f(1, 1);
	glVertex2f(1, 0);
	glVertex2f(-1, 0);
	glEnd();


	glColor3ub(190, 190, 190);
	glBegin(GL_QUADS); // луна
	glVertex2f(-1, -1);
	glVertex2f(-1, 0);
	glVertex2f(1, 0);
	glVertex2f(1, -1);
	glEnd();

	glColor3ub(255, 255, 0);
	glBegin(GL_QUADS); // солнце 
	glVertex2f(-1, 1);
	glVertex2f(-0.7, 1);
	glVertex2f(-0.7, 0.7);
	glVertex2f(-1, 0.7);
	glEnd();

	glColor3ub(255, 215, 0);
	glBegin(GL_QUADS); // солнце 
	glVertex2f(-0.95, 0.95);
	glVertex2f(-0.8, 0.95);
	glVertex2f(-0.8, 0.8);
	glVertex2f(-0.95, 0.8);
	glEnd();
}

	void DrawHolm() {
		glBegin(GL_POLYGON); // горка левая
		glTranslatef(0, 2, 0);
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
	}