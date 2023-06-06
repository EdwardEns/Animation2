#include "FourthScene.hpp"
#include "GL/freeglut.h"
#include "Figure.h"
#include "DrawLib.hpp"
void FourthBackground() {
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub(29, 55, 66);
	glVertex2f(-2, 1);
	glColor3ub(0, 0, 0);
	glVertex2f(2, 1);
	glColor3ub(29, 55, 66);
	glVertex2f(2, -2);
	glColor3ub(29, 55, 66);
	glVertex2f(-2, -2);
	glEnd();
	glPopMatrix();
	
	
}
	void DrawMoon() {
		glPushMatrix();
		glScalef(0.7, 0.7, 1);
		glTranslatef(0.9, 0.9, 1);
		glBegin(GL_QUADS);
		glColor3ub(218, 230, 254);
		glVertex2f(-0.5, -0.5);
		glVertex2f(0.5, -0.5);
		glVertex2f(0.5, 0.5);
		glVertex2f(-0.5, 0.5);
		glColor3ub(177, 185, 206);
		glVertex2f(0.12, 0.38);
		glVertex2f(0.38, 0.38);
		glVertex2f(0.38, 0);
		glVertex2f(0.12, 0);
		glVertex2f(0.38, -0.12);
		glVertex2f(0.38, -0.25);
		glVertex2f(-0.12, -0.25);
		glVertex2f(-0.12, -0.12);
		glVertex2f(-0.12, 0.24);
		glVertex2f(-0.12, -0.12);
		glVertex2f(0, -0.12);
		glVertex2f(0, 0.24);
		glVertex2f(-0.12, 0);
		glVertex2f(-0.25, 0);
		glVertex2f(-0.25, -0.12);
		glVertex2f(-0.12, -0.12);
		glColor3ub(95, 103, 122);
		glVertex2f(-0.5, 0.5);
		glVertex2f(-0.5, -0.5);
		glVertex2f(-0.25, -0.5);
		glVertex2f(-0.25, 0.5);
		glVertex2f(-0.25, -0.5);
		glVertex2f(0.5, -0.5);
		glVertex2f(0.5, -0.25);
		glVertex2f(-0.25, -0.25);
		glColor3ub(83, 86, 101);
		glVertex2f(0.38, -0.25);
		glVertex2f(0.25, -0.25);
		glVertex2f(0.25, -0.37);
		glVertex2f(0.38, -0.37);
		glVertex2f(0, 0.5);
		glVertex2f(-0.12, 0.5);
		glVertex2f(-0.12, 0.38);
		glVertex2f(0, 0.38);
		glVertex2f(-0.25, 0.5);
		glVertex2f(-0.37, 0.5);
		glVertex2f(-0.37, 0.38);
		glVertex2f(-0.25, 0.38);
		glVertex2f(-0.25, -0.25);
		glVertex2f(-0.37, -0.25);
		glVertex2f(-0.37, -0.37);
		glVertex2f(-0.25, -0.37);
		glVertex2f(0.38, 0);
		glVertex2f(0.5, 0);
		glVertex2f(0.5, -0.12);
		glVertex2f(0.38, -0.12);
		glVertex2f(0, -0.5);
		glVertex2f(0, -0.38);
		glVertex2f(0.12, -0.38);
		glVertex2f(0.12, -0.5);
		glVertex2f(0.12, 0.12);
		glVertex2f(0.12, -0.12);
		glVertex2f(0, -0.12);
		glVertex2f(0, 0.12);
		glVertex2f(-0.5, 0.12);
		glVertex2f(-0.25, 0.12);
		glVertex2f(-0.25, 0);
		glVertex2f(-0.5, 0);
		glVertex2f(0.26, 0.12);
		glVertex2f(0.26, 0.38);
		glVertex2f(0.38, 0.38);
		glVertex2f(0.38, 0.12);
		glColor3ub(118, 126, 149);
		glVertex2f(-0.25, 0.24);
		glVertex2f(-0.25, 0.12);
		glVertex2f(-0.37, 0.12);
		glVertex2f(-0.37, 0.24);
		glVertex2f(-0.25, -0.25);
		glVertex2f(-0.25, -0.12);
		glVertex2f(-0.37, -0.12);
		glVertex2f(-0.37, -0.25);
		glVertex2f(-0.25, -0.25);
		glVertex2f(-0.25, -0.37);
		glVertex2f(-0.12, -0.37);
		glVertex2f(-0.12, -0.25);
		glVertex2f(0.5, -0.25);
		glVertex2f(0.5, -0.37);
		glVertex2f(0.38, -0.37);
		glVertex2f(0.38, -0.25);
		glEnd();
		glPopMatrix();

		
	}
