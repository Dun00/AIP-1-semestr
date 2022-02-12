#ifndef DRAWLIBNESTEROVA_H
#define DRAWLIBNESTEROVA_H
#include <GL/glut.h>
#include <cmath>

struct Figure{
    float x,y;
    float color[3];
};

void drawCat(Figure fig);
void CatMum(float x, float y,float a);
void drawFl(float x, float y);
void drawSun(float x,float y, float r, float g, float b);
void drawClaud(float x,float y);
void drawClaudTwo(float x,float y);
void Tarelka(float x, float y);
void Mountain(float x, float y);
void Kyct(float x, float y );
void Bird(float x, float y );
void Tree(float x, float y );
void Kryg (float x, float y);
void House (float x, float y);
#endif // DRAWLIBNESTEROVA_H
