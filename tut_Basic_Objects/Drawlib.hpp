#include <stdio.h>
#ifndef DrawLib_hpp
#define DrawLib_hpp
#include <cmath>
#include "Figure.h"
#include "FirstScene.hpp"
#include "SecondScene.hpp"
#include "ThirdScene.hpp"


void renderScene(void);

void DrawSpaceboard(Figure& f);
void Oblako(Figure& o);
void Burn(Figure& B);
void animate(int value);
void DrawMoon();
void drawAnima();
void FirstBackground();
void ThirdBackground();
void FourthBackground();
void FifthBackground();
void drawStars();
void Burn2(Figure& B);
//void DrawHolm();
void DrawFire();

#endif /* DrawLib_hpp */