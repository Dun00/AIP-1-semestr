#include <GL/glut.h>
#include <cmath>
#include <stdio.h>
#include <drawLibNesterova.h>

float pos_x=0, pos_y=0;
float apple_x=0, apple_y=0;

bool isRight = true;

float angle = 270.0;

int countfl=0;

bool isGetFlower[1] = {false};

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // эта функция должна здесь жить

    //Figure cat;
   // cat.x=1; cat.y=2;
    //drawCat(cat);

    CatMum (pos_x, pos_y, angle);

    //if(!isGetFlower[0])
      // drawFl(0,0);

    drawFl (apple_x, apple_y);

    glutSwapBuffers();
}

void processKeys(unsigned char key, int x, int y); // определение фнкции перед фукнцией main
void processKeys(unsigned char key, int x, int y){

    if(key==100){
        pos_x=pos_x + 0.1;
    }

    if(key==97){
        pos_x=pos_x - 0.1;
    }

    if(key==119){
        pos_y=pos_y + 0.1;
    }

    if(key==115){
        pos_y=pos_y - 0.1;
    }

    if(key==113){
        angle += 1;
    }

    if(key==101){
        angle = angle - 1;
    }

    if(key == 13)
        exit(0); // close app

    if((pos_x>=0.35) && (pos_x<=0.45) &&
       (pos_y>=-0.65) && (pos_y<=-0.55)){

         isGetFlower[0] = true;
         countfl ++;
}
    if((pos_x>=(apple_x*.4)-0.1) && (pos_x<=(apple_x*.4)+0.1) &&
       (pos_y>=(apple_y*.4)-0.1) && (pos_y<=(apple_y*.4)+0.1)){

        apple_x=2*(float)rand()/RAND_MAX-1;
        apple_y=2*(float)rand()/RAND_MAX-1;
    }

    glutPostRedisplay(); // отрисовка
}

int main(int argc, char* argv[])
{
    //std::cout << "123";
    srand(5);

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("Lesson - 0, Start");
    glutDisplayFunc(renderScene);

    glutKeyboardFunc(processKeys);

    glutMainLoop();
    return 0;
}

