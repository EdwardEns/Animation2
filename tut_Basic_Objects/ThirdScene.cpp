#include "ThirdScene.hpp"
#include "Figure.h"
#include "DrawLib.hpp"
#include <array>
#include "GL/freeglut.h"
void ThirdBackground() {

	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub(29, 55, 66);
	glVertex2f(-2, 1);
	glColor3ub(29, 55, 66);
	glVertex2f(2, 1);
	glColor3ub(18, 143, 196);
	glVertex2f(2, -2);
	glColor3ub(18, 143, 196);
	glVertex2f(-2, -2);
	glEnd();
	glPopMatrix();

	glBegin(GL_POINTS);
	glColor3ub(224., 255., 255.);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.37, 0.21);
	glVertex2f(1.1, 1.4);
	glVertex2f(-0.35, 0.5);
	glVertex2f(-0.16, 0.44);
	glVertex2f(-0.33, 0.19);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.56, -0.1);
	glVertex2f(-0.43, -0.1);
	glVertex2f(0.5, -5.5);
	glVertex2f(-0.45, -2.5);
	glVertex2f(-0.25, 3.5);
	glVertex2f(0.15, -0.52);
	glVertex2f(0.37, -0.21);
	glVertex2f(1.1, -1.4);
	glVertex2f(-0.35, -2.5);
	glVertex2f(-0.16, -1.44);
	glVertex2f(-0.13, 3.19);
	glVertex2f(-0.5, 2.5);
	glVertex2f(-0.16, 4.1);
	glVertex2f(-0.43, -4.1);
	glVertex2f(0.25, 3.5);
	glVertex2f(0.45, -3.7);
	glVertex2f(0.15, 4.53);


	glVertex2f(-0.5, 1.5);
	glVertex2f(-0.37, 1.21);
	glVertex2f(-1.1, .4);
	glVertex2f(0.35, 2.5);
	glVertex2f(0.16, 1.44);
	glVertex2f(0.33, 1.19);
	glVertex2f(0.5, -1.5);
	glVertex2f(0.56, -0.1);
	glVertex2f(0.43, -0.1);
	glVertex2f(-0.5, -1.5);
	glVertex2f(0.45, -3.5);
	glVertex2f(0.25, -1.5);
	glVertex2f(-0.15, -1.52);
	glVertex2f(-0.37, -1.21);
	glVertex2f(-1.1, 2.4);
	glVertex2f(0.35, 3.5);
	glVertex2f(0.16, 2.44);
	glVertex2f(0.13, 4.19);
	glVertex2f(0.5, 3.5);
	glVertex2f(0.16, -5.1);
	glVertex2f(0.43, 5.1);
	glVertex2f(-0.25, -4.5);
	glVertex2f(-0.45, 4.7);
	glVertex2f(-0.15, 4.53);
	glEnd();
}
