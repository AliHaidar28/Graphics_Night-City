#include <windows.h>
#include <stdio.h>
#include <GL/glut.h>
#include<math.h>>
# define PI 3.14159265358979323846

void init()
{
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    gluOrtho2D(-0.64,0.64,-0.64,0.64);
}
void circleSolid(float x, float y, float radius)
{
    int triangleAmount = 100; //# of triangles used to draw circle



    GLfloat twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
for(int i = 0; i <= triangleAmount; i++)
{
glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)), y + (radius * sin(i * twicePi / triangleAmount)));
}
glEnd();
}

void sunN()
{
    ///sun night
    glColor3ub( 255, 255, 255);
    circleSolid(0.08f,0.40f,0.05);
}



void skyN()
{
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.64f,0.00f);
    glVertex2f(0.64f,0.00f);
    glVertex2f(0.64f,.64f);
    glVertex2f(-0.64f,.64f);
    glEnd();



    glColor3ub( 255, 255, 255);
    circleSolid(-0.60f,0.38f,0.003);



    glColor3ub( 255, 255, 255);
    circleSolid(-0.50f,0.43f,0.003);
    glColor3ub( 255, 255, 255);
    circleSolid(-0.55f,0.53f,0.003);



    glColor3ub( 255, 255, 255);
    circleSolid(-0.40f,0.49f,0.003);





    glColor3ub( 255, 255, 255);
    circleSolid(-0.10f,0.48f,0.003);
    glColor3ub( 255, 255, 255);
    circleSolid(-0.5f,0.55f,0.003);






    glColor3ub( 255, 255, 255);
    circleSolid(-0.30f,0.48f,0.003);



    glColor3ub( 255, 255, 255);
    circleSolid(-0.21f,0.38f,0.003);



    glColor3ub( 255, 255, 255);
    circleSolid(-0.10f,0.60f,0.003);



    glColor3ub( 255, 255, 255);
    circleSolid(-0.21f,0.56f,0.003);



    glColor3ub( 255, 255, 255);
    circleSolid(-0.35f,0.39f,0.003);



    //***



    glColor3ub( 255, 255, 255);
    circleSolid(0.10f,0.53f,0.003);



    glColor3ub( 255, 255, 255);
    circleSolid(0.21f,0.48f,0.003);



    glColor3ub( 255, 255, 255);



    circleSolid(0.31f,0.46f,0.003);



    glColor3ub( 255, 255, 255);
    circleSolid(0.40f,0.50f,0.003);



    glColor3ub( 255, 255, 255);
    circleSolid(0.50f,0.53f,0.003);




    glColor3ub( 255, 255, 255);
    circleSolid(0.40f,0.40f,0.003);




    glColor3ub( 255, 255, 255);
    circleSolid(0.55f,0.39f,0.003);




    glColor3ub( 255, 255, 255);
    circleSolid(0.31f,0.57f,0.003);



    glColor3ub( 255, 255, 255);
    circleSolid(0.22f,0.55f,0.003);



}




void skyR()
{



glBegin(GL_QUADS);
glColor3ub(64, 98, 131);
glVertex2f(-0.64f,0.00f);
glVertex2f(0.64f,0.00f);
glVertex2f(0.64f,.64f);
glVertex2f(-0.64f,.64f);
glEnd();
}

void treeN()
{



/*starting Tree */



glBegin(GL_QUADS);
glColor3ub(17, 51, 61);
glVertex2f(-0.05f,-0.01f);
glVertex2f(-0.03f,-0.01f);
glVertex2f(-0.03f,0.24f);
glVertex2f(-0.05f,0.24f);
glEnd();




glLineWidth(8);
glBegin(GL_LINES); //left
glColor3ub(92, 92, 61);
glVertex2f(-0.04f, 0.23f);
glVertex2f(-0.09f, 0.27f);



glVertex2f(-0.04f, 0.23f); //right
glVertex2f(0.01f, 0.27f);



glVertex2f(-0.04f, 0.24f); //middle
glVertex2f(-0.04f, 0.32f);
glEnd();



glColor3ub(0, 102, 0);
circleSolid(-0.10f, 0.28f, 0.03); //1
glColor3ub(0, 204, 0);
circleSolid(-0.11f, 0.31f, 0.03); //2
glColor3ub(0, 153, 51);
circleSolid(-0.09f, 0.33f, 0.03); //3



glColor3ub( 0, 153, 0);



circleSolid(-0.04f, 0.33f, 0.03); //4




circleSolid(0.0f, 0.33f, 0.03); //5



circleSolid(0.02f, 0.31f, 0.03); //6



glColor3ub( 0, 77, 0 );
circleSolid(0.03f, 0.28f, 0.03); //7







/*End of Tree */
}
void treeNN()
{



/*starting Tree */



glBegin(GL_QUADS);
glColor3ub(17, 51, 61);
glVertex2f(-0.01f,-0.01f);
glVertex2f(0.01f,-0.01f);
glVertex2f(0.01f,0.24f);
glVertex2f(-0.01f,0.24f);
glEnd();




glLineWidth(8);
glBegin(GL_LINES); //left
glColor3ub(92, 92, 61);
glVertex2f(0.00f, 0.23f);
glVertex2f(-0.05f, 0.27f);



glVertex2f(0.00f, 0.23f); //right
glVertex2f(0.05f, 0.27f);



glVertex2f(0.00f, 0.24f); //middle
glVertex2f(0.00f, 0.32f);
glEnd();



glColor3ub(0, 102, 0);
circleSolid(-0.06f, 0.28f, 0.03); //1
glColor3ub(0, 204, 0);
circleSolid(-0.07f, 0.31f, 0.03); //2
glColor3ub(0, 153, 51);
circleSolid(-0.05f, 0.33f, 0.03); //3



glColor3ub( 0, 153, 0);



circleSolid(0.00f, 0.33f, 0.03); //4




circleSolid(0.04f, 0.33f, 0.03); //5



circleSolid(0.06f, 0.31f, 0.03); //6



glColor3ub( 0, 77, 0 );
circleSolid(0.07f, 0.28f, 0.03); //7







/*End of Tree */
}


void treeNNN()
{



/*starting Tree */



glBegin(GL_QUADS);
glColor3ub(17, 51, 61);
glVertex2f(-0.09f,-0.01f);
glVertex2f(-0.07f,-0.01f);
glVertex2f(-0.07f,0.24f);
glVertex2f(-0.09f,0.24f);
glEnd();




glLineWidth(8);
glBegin(GL_LINES); //left
glColor3ub(92, 92, 61);
glVertex2f(-0.08f, 0.23f);
glVertex2f(-0.13f, 0.27f);



glVertex2f(-0.08f, 0.23f); //right
glVertex2f(-0.03f, 0.27f);



glVertex2f(-0.08f, 0.24f); //middle
glVertex2f(-0.08f, 0.32f);
glEnd();



glColor3ub(0, 102, 0);
circleSolid(-0.14f, 0.28f, 0.03); //1
glColor3ub(0, 204, 0);
circleSolid(-0.15f, 0.31f, 0.03); //2
glColor3ub(0, 153, 51);
circleSolid(-0.13f, 0.33f, 0.03); //3



glColor3ub( 0, 153, 0);



circleSolid(-0.08f, 0.33f, 0.03); //4




circleSolid(-0.04f, 0.33f, 0.03); //5



circleSolid(-0.02f, 0.31f, 0.03); //6



glColor3ub( 0, 77, 0 );
circleSolid(-0.01f, 0.28f, 0.03); //7







/*End of Tree */
}

void treeN5()
{



/*starting Tree */



glBegin(GL_QUADS);
glColor3ub(17, 51, 61);
glVertex2f(0.05f,-0.01f);
glVertex2f(0.07f,-0.01f);
glVertex2f(0.07f,0.24f);
glVertex2f(0.05f,0.24f);
glEnd();




glLineWidth(8);
glBegin(GL_LINES); //left
glColor3ub(92, 92, 61);
glVertex2f(0.06f, 0.23f);
glVertex2f(0.01f, 0.27f);



glVertex2f(0.06f, 0.23f); //right
glVertex2f(0.11f, 0.27f);



glVertex2f(0.06f, 0.24f); //middle
glVertex2f(0.06f, 0.32f);
glEnd();



glColor3ub(0, 102, 0);
circleSolid(0.00f, 0.28f, 0.03); //1
glColor3ub(0, 204, 0);
circleSolid(-0.01f, 0.31f, 0.03); //2
glColor3ub(0, 153, 51);
circleSolid(0.01f, 0.33f, 0.03); //3



glColor3ub( 0, 153, 0);



circleSolid(0.06f, 0.33f, 0.03); //4




circleSolid(0.10f, 0.33f, 0.03); //5



circleSolid(0.12f, 0.31f, 0.03); //6



glColor3ub( 0, 77, 0 );
circleSolid(0.13f, 0.28f, 0.03); //7







/*End of Tree */
}
void display2()
{



glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);




skyN();
sunN();
treeN();
treeNN();
treeNNN();
treeN5();




glFlush();
}




int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitWindowSize(1000,800); // Initialize GLUT
glutInitWindowPosition(50, 50);




glutCreateWindow("Test");



init();





glutDisplayFunc(display2);





glutMainLoop();
return 0;
}
