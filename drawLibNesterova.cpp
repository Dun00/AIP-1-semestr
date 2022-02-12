#include<drawLibNesterova.h>

void drawCat(Figure fig){
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glTranslatef(fig.x, fig.y, 0);
    glColor3f(.8,.5,.3);//начало тела2
    glVertex2f(-.2,-.3);
    glColor3f(.7,.3,.3);
    glVertex2f( .2,-0.3);
    glColor3f(.7,.3,.3);
    glVertex2f(  0,.2);

    glColor3f(fig.color[0],fig.color[1],fig.color[2]);
    glVertex2f(.2,.3);//хвост2
    glVertex2f(.5,.4);
    glVertex2f(.0,-.1);

    glColor3f(.8,.5,.3);
    glVertex2f(0,.2);//голова2
    glVertex2f(-0.2,0.5);
    glVertex2f(0.2,0.5);

    glVertex2f(-.2,.5);//ушко 1
    glVertex2f(0,.5);
    glVertex2f(-.1,.7);

    glVertex2f(0.2,0.5);//ушко 2
    glVertex2f(0,0.5);
    glVertex2f(0.1,0.7);

    glColor3f(.5,.3,0);//глаз левый
    glVertex2f(-.2,.5);
    glVertex2f(0,.5);
    glVertex2f(-.1,.4);

    glVertex2f(.2,.5);//глаз правый
    glVertex2f(0,.5);
    glVertex2f(.1,.4);
    glEnd();
    glPopMatrix();
}

//мама кошка
void CatMum(float x, float y, float a) {
    glPushMatrix();
    glTranslatef(x,y,0);
    glRotatef(90+a,0,0,1);
    //if(isRight)
    //        glRotatef(180,0,0,1);
    glBegin(GL_TRIANGLES);
    glColor3f(.6,.3,.3);//начало тела
    glVertex2f(-.2,-.3);
    glColor3f(.7,.3,.3);
    glVertex2f( .2,-0.3);
    glColor3f(.7,.3,.3);
    glVertex2f(  0,.2);

    glVertex2f(.2,.3);//хвост
    glVertex2f(.5,.4);
    glVertex2f(.0,-.1);

    glVertex2f(0,.2);//голова
    glVertex2f(-0.2,0.5);
    glVertex2f(0.2,0.5);

    glVertex2f(-.2,.5);//ушко 1
    glVertex2f(0,.5);
    glVertex2f(-.1,.7);

    glVertex2f(0.2,0.5);//ушко 2
    glVertex2f(0,0.5);
    glVertex2f(0.1,0.7);

    glColor3f(.8,.6,0);
    glVertex2f(-.2,.5);//глаз левый
    glVertex2f(0,.5);
    glVertex2f(-.1,.4);

    glVertex2f(.2,.5);//глаз правый
    glVertex2f(0,.5);
    glVertex2f(.1,.4);

    glColor3f(0,0,0);
    glVertex2f(-.15,.5);//зрачек левый
    glVertex2f(-.05,.5);
    glVertex2f(-.1,.4);

    glVertex2f(.15,.5);//зрачек правый
    glVertex2f(.05,.5);
    glVertex2f(.1,.4);
    glEnd();
    glPopMatrix();
}

//цветок
void drawFl(float x, float y){
    glPushMatrix();
    glScalef(.4,.4,0);
    glTranslatef(x,y,0);
    glBegin(GL_TRIANGLES);
    glColor3f(.1,.7,.1);//стебель,палка цветка
    glVertex2f(.6,-.1);
    glColor3f(.1,.7,.1);
    glVertex2f(.65,-.1);
    glColor3f(.1,.7,.1);
    glVertex2f(.7,1);

    glColor3f(.5,.1,.2);//лепесток 2
    glVertex2f(.7,1);
    glColor3f(.5,.1,.2);
    glVertex2f(.3,1.3);
    glColor3f(.5,.1,.2);
    glVertex2f(1.1,1.3);

    glColor3f(.5,.1,.3);//лепесток 1
    glVertex2f(.7,1);
    glColor3f(.5,.1,.3);
    glVertex2f(.1,1.2);
    glColor3f(.5,.1,.3);
    glVertex2f(1.3,1.2);

    glColor3f(.1,.7,.1);//лист 1
    glVertex2f(.62,.2);
    glColor3f(.1,.7,.1);
    glVertex2f(.77,.4);
    glColor3f(.1,.7,.1);
    glVertex2f(.79,.8);

    glColor3f(.1,.7,.1);//лист 2
    glVertex2f(.9,.6);
    glColor3f(.1,.7,.1);
    glVertex2f(.77,.4);
    glColor3f(.1,.7,.1);
    glVertex2f(.79,.8);
    glEnd();
    glPopMatrix();
}

//попытка сделать солнце
void drawSun(float x,float y, float r, float g, float b){
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(r,g,b);
    glBegin(GL_QUADS);//квадрат

    glVertex2f(1, 1.4);
    glVertex2f(1, 1.7);
    glVertex2f(1.3,1.7);
    glVertex2f(1.3,1.4);
    glEnd();

    glBegin(GL_TRIANGLES);//луч верх+
    glVertex2f(1, 1.7);
    glVertex2f(1.15,1.75);
    glVertex2f(1.3,1.7);

    glVertex2f(1.3,1.7);//луч право
    glVertex2f(1.35,1.55);
    glVertex2f(1.3,1.4);

    glVertex2f(1,1.4);//луч низ
    glVertex2f(1.3,1.4);
    glVertex2f(1.15,1.35);

    glVertex2f(1,1.7);//луч лево
    glVertex2f(.95,1.55);
    glVertex2f(1,1.4);
    glEnd();
    glPopMatrix();
}

//облако большое
void drawClaud(float x,float y){
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(0,0,1);
    glBegin(GL_QUADS);

    glVertex2f(0,0);
    glVertex2f(0,.2);
    glVertex2f(.2,.2);
    glVertex2f(.2,0);

    glVertex2f(.2,-.1);
    glVertex2f(.2,.4);
    glVertex2f(.8,.4);
    glVertex2f(.8,-.1);

    glVertex2f(.8,.3);
    glVertex2f(1.04,.3);
    glVertex2f(1.04,.08);
    glVertex2f(.8,.08);
    glEnd();
    glPopMatrix();
}

//облако маленькое
void drawClaudTwo(float x,float y){
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(0,0,1);
    glBegin(GL_QUADS);
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(0,0,.7);
    glBegin(GL_QUADS);

    glVertex2f(0,0);
    glVertex2f(0,.15);
    glVertex2f(.3,.15);
    glVertex2f(.3,0);

    glVertex2f(.2,.09);//
    glVertex2f(.2,.25);
    glVertex2f(.5,.25);
    glVertex2f(.5,.09);

    glVertex2f(.3,-.07);//
    glVertex2f(.3,.13);
    glVertex2f(.65,.13);
    glVertex2f(.65,-.07);

    glVertex2f(.58,.05);
    glVertex2f(.58,.2);
    glVertex2f(.85,.2);
    glVertex2f(.85,.05);
    glEnd();
    glPopMatrix();
}

//летающий тарелька
void Tarelka(float x, float y){
    glPushMatrix();
    glTranslatef(x,y,0);
    glBegin(GL_TRIANGLES);
    glColor3f(.9,.8,.2);
    glVertex2f(.6,.2);//свет
    glColor3f(0,0,0);
    glVertex2f(2,.6);
    glColor3f(.9,.8,.2);
    glVertex2f(1.2,0);

    glColor3f(0.8,0,0);// фара правый
    glVertex2f(1.2,0);
    glVertex2f(1.25,-.05);
    glVertex2f(1.2,-.1);

    glVertex2f(0,0);//фара левый
    glVertex2f(0,-0.1);
    glVertex2f(-0.05,-0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(.2,.3,.5);//верх тарелки
    glVertex2f(0,0);
    glVertex2f(.4,.2);
    glVertex2f(.8,.2);
    glVertex2f(1.2,0);

    glColor3f(.6,.6,.7);//жилой отсек
    glVertex2f(0,-.1);
    glVertex2f(0,0);
    glVertex2f(1.2,0);
    glVertex2f(1.2,-.1);

    glColor3f(.2,.3,.5);//низ
    glVertex2f(0,-.1);
    glVertex2f(1.2,-.1);
    glVertex2f(.8,-0.3);
    glVertex2f(.4,-.3);

    glColor3f(.9,.9,.9);//окошечко
    glVertex2f(.4,.06);
    glVertex2f(.4,0.14);
    glVertex2f(.8,0.14);
    glVertex2f(.8,.06);
    glEnd();
    glPopMatrix();
}

// горный хребет
void Mountain(float x, float y){
    glPushMatrix();
    glTranslatef(x,y,0);
    glBegin(GL_TRIANGLES);//гора большая
    glColor3f(0.7,0.7,0.8);
    glVertex2f(.5,0);
    glVertex2f(1.3,1.5);
    glColor3f(0.5,0.5,0.6);
    glVertex2f(2,0);

    glColor3f(0.7,0.7,0.8);//гора маленькая
    glVertex2f(-.4,0);
    glVertex2f(.3,.5);
    glColor3f(.5,.5,.6);
    glVertex2f(1,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9,0.9,1);//верх горы большой
    glVertex2f(1.1,1.1);
    glColor3f(1,1,1);
    glVertex2f(1.3,1.5);
    glColor3f(0.9,0.9,1);
    glVertex2f(1.5,1.1);
    glVertex2f(1.2,1);
    glEnd();
    glPopMatrix();
}

//куст
void Kyct(float x, float y ){
    glPushMatrix();
    glTranslatef(x,y,0);
    glColor3f(0.2,0.4,0.2);//основа куста
    glBegin(GL_QUADS);
    glVertex2f(-0.5,-3);
    glVertex2f(-0.5,-2.3);
    glVertex2f(0.2,-2.3);
    glVertex2f(0.2,-3);

    glVertex2f(-0.5,-2.3);//верх кустика
    glVertex2f(-0.3,-2.2);
    glVertex2f(0,-2.2);
    glVertex2f(0.2,-2.3);

    glVertex2f(0.2,-3);//правый бок кустика
    glVertex2f(0.2,-2.3);
    glVertex2f(0.4,-2.6);
    glVertex2f(0.4,-3);

    glVertex2f(-0.65,-3);//левый бок кустика
    glVertex2f(-0.65,-2.6);
    glVertex2f(-0.5,-2.3);
    glVertex2f(-0.5,-3);
    glEnd();
    glPopMatrix();
}

//ПТИЦАААА
void Bird(float x, float y ){
    glPushMatrix();
    glTranslated(x,y,0);
    glBegin(GL_QUADS);//хвост

    glColor3f(.2,.1,.3);
    glVertex2f(0,-.07);
    glColor3f(.3,.3,.3);
    glVertex2f(0,.15);
    glVertex2f(.4,.13);
    glVertex2f(.5,0);

    glVertex2f(.4,.09);//крыло правое
    glVertex2f(.2,.35);
    glVertex2f(.5,.25);
    glVertex2f(.62,.09);

    glVertex2f(.42,-.09);//крыло левое
    glVertex2f(.4,.13);
    glVertex2f(.65,.13);
    glColor3f(.2,.3,.3);
    glVertex2f(.62,-.01);

    glVertex2f(.65,.1);//клюв
    glVertex2f(.65,.2);
    glColor3f(.1,.2,.1);
    glVertex2f(.8,.07);
    glVertex2f(.8,.13);
    glEnd();
    glPopMatrix();
}

//дерево
void Tree(float x, float y ){
    glPushMatrix();
    glTranslated(x,y,0);
    glBegin(GL_QUADS);

    glColor3f(0.3,0.2,0.2);//ствол
    glVertex2f(-0.7,-2.7);
    glVertex2f(-0.4,-2.7);
    glVertex2f(-0.4,-0.6);
    glVertex2f(-0.7,-0.6);

    glColor3f(0.4,0.2,0.2);//деталь ствола
    glVertex2f(-0.55,-1.6);
    glVertex2f(-0.45,-1.5);
    glVertex2f(-0.5,-1.3);
    glVertex2f(-0.5,-2.1);

    glVertex2f(-0.7,-1.9);//деталь ствола 2
    glVertex2f(-0.63,-1.9);
    glVertex2f(-0.65,-1.6);
    glVertex2f(-0.65,-2.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2,0.4,0.2);//листва
    glVertex2f(-0.9,-1.2);
    glVertex2f(-0.2,-1.2);
    glVertex2f(-0.2,-0.1);
    glVertex2f(-0.9,-0.1);

    glColor3f(0.2,0.5,0.2);//листва 2
    glVertex2f(-0.5,-0.95);
    glVertex2f(0,-0.95);
    glVertex2f(0,-0.4);
    glVertex2f(-0.5,-0.4);

    glColor3f(0.2,0.55,0.2);//листва 3
    glVertex2f(-.6,-.6);
    glVertex2f(-.3,-.6);
    glVertex2f(-.3,-.3);
    glVertex2f(-.6,-.3);

    glColor3f(0.2,0.5,0.2);
    glVertex2f(-1.1,-1.1);
    glVertex2f(-.7,-1.1);
    glVertex2f(-.7,-.7);
    glVertex2f(-1.1,-.7);
    glEnd();
    glPopMatrix();
}

//просто круг для вызова
void Kryg (float x, float y){
    glTranslatef(x,y,0);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0,0,.4);
    for(int i=0; i<360; i++)
        glVertex2f(0.6*cos(i), 0.6*sin(i));
    glEnd();
}
//калека доь
void House (float x, float y){
    glTranslatef(x,y,0);
    glPushMatrix();//основание
    glColor3f(0.6,0.25,0.25);
    glTranslatef(-1.5,-.5,0);
    glBegin(GL_QUADS);
    glVertex2f(-1,-1);
    glVertex2f(.6,-1);
    glVertex2f(.6,.5);
    glVertex2f(-1,.5);

    glColor3f(0.1,0.3,0.6);//окно
    glVertex2f(-.5,-.5);
    glVertex2f(-.5, 0);
    glVertex2f(.1, 0);
    glVertex2f(.1,-.5);

    glColor3f(0.6,0.5,0.4);
    glVertex2f(-.65,-.6);//дверца левая
    glVertex2f(-.65, .1);
    glVertex2f(-.5, 0);
    glVertex2f(-.5,-.5);

    glVertex2f(.1,-.5);//дверца правая
    glVertex2f(.1, 0);
    glVertex2f(.25, .1);
    glVertex2f(.25,-.6);

    glVertex2f(-.5,-.05);//палка верх
    glVertex2f(-.5, 0);
    glVertex2f(.1, 0);
    glVertex2f(.1,-.05);

    glVertex2f(-.5,-.5);//палка низ
    glVertex2f(-.5, -.45);
    glVertex2f(.1, -.45);
    glVertex2f(.1,-.5);

    glColor3f(.3,.5,.3);
    glVertex2f(.1,.5);//труба
    glVertex2f(.1, 1);
    glVertex2f(.4, 1);
    glVertex2f(.4,.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.3,0.3,0.2);
    glVertex2f(-1, .5);//крыша
    glVertex2f(-.2, 1);
    glVertex2f(.6, .5);
    glEnd();
    glPopMatrix();
}
