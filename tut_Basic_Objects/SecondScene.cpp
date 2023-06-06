#define _USE_MATH_DEFINES
#include "SecondScene.hpp"
#include "Figure.h"
#include "DrawLib.hpp"
#include "GL/freeglut.h"
#include <cmath>
void SecondBackground() {

	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3ub(18, 143, 196);
	glVertex2f(-2, 1);
	glColor3ub(18, 143, 196);
	glVertex2f(2, 1);
	glColor3ub(18, 143, 196);
	glVertex2f(2, -2);
	glColor3ub(18, 143, 196);
	glVertex2f(-2, -2);
	glEnd();
	glPopMatrix();

	float x, y;
	float cnt = 30;
	float l = 0.08;
	float a = M_PI * 2 / cnt;
	glPushMatrix();
	glTranslatef(-1, -1, 0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.5, 0.7);
	for (int i = -1; i < cnt; i++) {
		x = sin(a * i) * l;
		y = cos(a * i) * l;
		glVertex2f(x + 0.5, y + 0.7);
	}
	glEnd();

	float x1, y1;
	float cnt1 = 30;
	float l1 = 0.09;
	float a1 = M_PI * 2 / cnt1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.4, 0.7);
	for (int i = -1; i < cnt1; i++) {
		x1 = sin(a1 * i) * l1;
		y1 = cos(a1 * i) * l1;
		glVertex2f(x1 + 0.4, y1 + 0.7);
	}
	glEnd();

	float x2, y2;
	float cnt2 = 30;
	float l2 = 0.08;
	float a2 = M_PI * 2 / cnt2;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.5, 0.7);
	for (int i = -1; i < cnt2; i++) {
		x2 = sin(a2 * i) * l2;
		y2 = cos(a2 * i) * l2;
		glVertex2f(x2 + 0.3, y2 + 0.7);
	}
	glEnd();

	float x3, y3;
	float cnt3 = 30;
	float l3 = 0.07;
	float a3 = M_PI * 2 / cnt3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.45, 0.8);
	for (int i = -1; i < cnt3; i++) {
		x3 = sin(a3 * i) * l3;
		y3 = cos(a3 * i) * l3;
		glVertex2f(x3 + 0.45, y3 + 0.8);
	}
	glEnd();

	float x4, y4;
	float cnt4 = 30;
	float l4 = 0.08;
	float a4 = M_PI * 2 / cnt4;
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(255, 255, 252);
	glVertex2f(0.36, 0.77);
	for (int i = -1; i < cnt4; i++) {
		x4 = sin(a4 * i) * l4;
		y4 = cos(a4 * i) * l4;
		glVertex2f(x4 + 0.36, y4 + 0.77);
	}
	glEnd();
	glPopMatrix();
}
 