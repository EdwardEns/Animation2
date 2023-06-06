#define _USE_MATH_DEFINES
#include "DrawLib.hpp"
#include "Figure.h"
#include "GL/freeglut.h"
#include <cmath>
#include <ctime>
#include <array>


std::array <int,15>r;
std::array <int,15>m;
std::array <float, 15>rl;
std::array <float, 15>ml;
float randFloat() {
	return (float)rand() / RAND_MAX;
}


void DrawSpaceboard(Figure& f) { //  осмический корабль
	glPushMatrix();
	glTranslatef(f.pos.x, f.pos.y, 0);

	glColor3ub(151, 178, 184);
	glBegin(GL_POLYGON); // ќснование ракеты
	glVertex2f(-0.06, +0.0);
	glVertex2f(-0.06, +0.4);
	glVertex2f(+0.06, +0.4);
	glVertex2f(+0.06, +0.028);//8
	glVertex2f(+0.06, -0.77);
	glVertex2f(+0.05, -0.8);
	glVertex2f(-0.05, -0.8);
	glVertex2f(-0.06, -0.77);
	glVertex2f(+0.06, +0.0);

	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON); // Ќос ракеты
	glVertex2f(-0.06, +0.4);
	glVertex2f(-0.04, +0.5);
	glVertex2f(-0.02, +0.54);
	glVertex2f(+0.02, +0.54);
	glVertex2f(+0.04, +0.5);
	glVertex2f(+0.06, +0.4);

	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINES); // декоративна€ вставка на основании ракеты
	glVertex2f(+0.0, +0.22); // центральна€ лини€
	glVertex2f(+0.0, -0.8);
	glVertex2f(-0.06, +0.4);// 1-€ горизонтальна€ лини€
	glVertex2f(+0.06, +0.4);
	glVertex2f(-0.06, +0.22); // 2-€ горизонтальна€ лини€
	glVertex2f(+0.06, +0.22);
	glVertex2f(-0.06, +0.0); // 3-€ горизонтальна€ линии€
	glVertex2f(+0.06, +0.0);
	glVertex2f(-0.06, -0.22); // 4-€ горизонтальна€ линии€
	glVertex2f(+0.06, -0.22);
	glVertex2f(-0.06, -0.44); // 5-€ горизонтальна€ линии€
	glVertex2f(+0.06, -0.44);
	glVertex2f(-0.06, -0.66); // 6-€ горизонтальна€ линии€
	glVertex2f(+0.06, -0.66);

	glEnd();

	glBegin(GL_POLYGON); // “урбина основани€
	glVertex2f(+0.05, -0.8);
	glVertex2f(+0.06, -0.9);
	glVertex2f(-0.06, -0.9);
	glVertex2f(-0.05, -0.8);

	glEnd();


	glColor3ub(101, 99, 120);
	glBegin(GL_TRIANGLES); // Ћевое крыло верхн€ часть
	glVertex2f(-0.06, +0.22);
	glVertex2f(-0.15, -0.3);
	glVertex2f(-0.06, -0.3);
	glEnd();

	glColor3ub(101, 99, 120);
	glBegin(GL_POLYGON); // нижн€ часть крыла
	glVertex2f(-0.06, -0.3);
	glVertex2f(-0.15, -0.3);
	glVertex2f(-0.25, -0.6);
	glVertex2f(-0.25, -0.67);
	glVertex2f(-0.06, -0.67);

	glEnd();

	glColor3ub(0, 0, 0); // декоративна€ вставка на крыле
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.25, -0.6);
	glVertex2f(-0.1, -0.6);
	glVertex2f(-0.1, -0.4);

	glEnd();

	glColor3ub(151, 178, 184);
	glBegin(GL_POLYGON); // турбина
	glVertex2f(-0.18, -0.67);
	glVertex2f(-0.2, -0.75);
	glVertex2f(-0.11, -0.75);
	glVertex2f(-0.13, -0.67);

	glEnd();

	//
	glColor3ub(101, 99, 120);
	glBegin(GL_TRIANGLES); // правое крыло
	glVertex2f(+0.06, +0.22);
	glVertex2f(+0.15, -0.3);
	glVertex2f(+0.06, -0.3);
	glEnd();

	glColor3ub(101, 99, 120);
	glBegin(GL_POLYGON);
	glVertex2f(+0.06, -0.3);
	glVertex2f(+0.15, -0.3);
	glVertex2f(+0.25, -0.6);
	glVertex2f(+0.25, -0.67);
	glVertex2f(+0.06, -0.67);

	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_STRIP); // декоративна€ вставка на крыле
	glVertex2f(+0.25, -0.6);
	glVertex2f(+0.1, -0.6);
	glVertex2f(+0.1, -0.4);

	glEnd();

	glColor3ub(151, 178, 184);
	glBegin(GL_POLYGON); // турбина
	glVertex2f(+0.18, -0.67);
	glVertex2f(+0.2, -0.75);
	glVertex2f(+0.11, -0.75);
	glVertex2f(+0.13, -0.67);

	glEnd();
	glPopMatrix();
}


void Oblako(Figure& o) { //части справа налево, снизу вверх

	float x, y;
	float cnt = 30;
	float l = 0.08;
	float a = M_PI * 2 / cnt;
	glPushMatrix();
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

void Burn(Figure& B) {
	float x, y;
	float cnt = 30;
	float l = 0.08;
	float a = M_PI * 2 / cnt;
	glPushMatrix();
	glTranslatef(B.pos.x, B.pos.y, 0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(245, 90, 0);
	glVertex2f(0.0, -0.9);
	for (int i = -1; i < cnt; i++) {
		x = sin(a * i) * l;
		y = cos(a * i) * l;
		glVertex2f(x + .0, y + (-1.1));
	}
	glEnd();

	float x1, y1;
	float cnt1 = 30;
	float l1 = 0.05;
	float a1 = M_PI * 2 / cnt1;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 195, 2);
	glVertex2f(0.0, -0.9);
	for (int i = -1; i < cnt1; i++) {
		x1 = sin(a1 * i) * l1;
		y1 = cos(a1 * i) * l1;
		glVertex2f(x1 + 0, y1 + (-1.1));
	}
	glEnd();

	float x2, y2;
	float cnt2 = 30;
	float l2 = 0.02;
	float a2 = M_PI * 2 / cnt2;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 2, 2);
	glVertex2f(0.0, -0.9);
	for (int i = -1; i < cnt2; i++) {
		x2 = sin(a2 * i) * l2;
		y2 = cos(a2 * i) * l2;
		glVertex2f(x2 + .0, y2 + (-1.1));
	}
	glEnd();
	glPopMatrix();
}

void Burn2(Figure& B) {  //Ѕольшой огонь
	float x, y;
	float cnt = 30;
	float l = 0.08;
	float a = M_PI * 2 / cnt;
	glPushMatrix();
	glTranslatef(B.pos.x, B.pos.y, 0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(245, 90, 0);
	glVertex2f(0.0, -0.9);
	for (int i = -1; i < cnt; i++) {
		x = sin(a * i) * l;
		y = cos(a * i) * l;
		glVertex2f(x + .0, y + (-1.2));
	}
	glEnd();

	float x1, y1;
	float cnt1 = 30;
	float l1 = 0.05;
	float a1 = M_PI * 2 / cnt1;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 195, 2);
	glVertex2f(0.0, -0.9);
	for (int i = -1; i < cnt1; i++) {
		x1 = sin(a1 * i) * l1;
		y1 = cos(a1 * i) * l1;
		glVertex2f(x1 + 0, y1 + (-1.2));
	}
	glEnd();

	float x2, y2;
	float cnt2 = 30;
	float l2 = 0.02;
	float a2 = M_PI * 2 / cnt2;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(217, 2, 2);
	glVertex2f(0.0, -0.9);
	for (int i = -1; i < cnt2; i++) {
		x2 = sin(a2 * i) * l2;
		y2 = cos(a2 * i) * l2;
		glVertex2f(x2 + .0, y2 + (-1.2));
	}
	glEnd();
	glPopMatrix();
} 

void drawStars(){
glLoadIdentity();
glColor3ub(255, 255, 255);

glBegin(GL_POINTS);

int numPoints = 100;
for (int i = 0; i < numPoints; i++) {
float x = randFloat() * 2 - 1;
float y = randFloat() * 2 - 1;

glVertex2f(x, y);
}

glEnd();
glFlush();
} 
 
//void DrawFire() {
//if (ctime = 500)
//}
