//Computer Graphics Project Group 1
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
#include <iostream>

using namespace std;
/* Initialize OpenGL Graphics */

int frameNumber = 0;
float _move = 0.0f;
float _move1 = 0.0f;
float _move2 = 280.0f;
float _move4 = 0.0f;
float _move5 = 280.0f;
float xr = 0, yr = 0;
float xr1 = 0, yr1 = 0;
GLfloat position = -190.0f; //current point for jet 1 from right to left updateJet1Left
GLfloat speed = 2.0f;
GLfloat position1 = 190.0f; //current point for jet 1 from left to right updateJet1Right
GLfloat speed1 = 2.0f;
void dis();
void display();
void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.5f, 0.0f); // Blue and opaque
	glLoadIdentity(); //Reset the drawing perspective
	gluOrtho2D(-100,200,-280,200);
}

//Sarafat's Part
void Footpath()//Footpath F
{
    glColor3ub(153,76,0);
    glBegin(GL_POLYGON);
    glVertex2f(-100.0f,-110.0f);
	glVertex2f(110.0f,-110.0f);
	glVertex2f(110.0f,-100.0f);
	glVertex2f(-100.0f,-100.0f);
	glEnd();
}

void Water()//Water W
{
    glColor3ub(0,102,204);
    glBegin(GL_POLYGON);
    glVertex2f(-100.0f,-280.0f);
	glVertex2f(200.0f,-280.0f);
	glVertex2f(200.0f,-100.0f);
	glVertex2f(-100.0f,-100.0f);
	glEnd();
}

void Background()//Background B
{
    glColor3ub(0,0,128);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,200.0f);
	glVertex2f(-100.0f,200.0f);
	glColor3ub(128,128,128);
    glVertex2f(-100.0f,-100.0f);
	glVertex2f(200.0f,-100.0f);


	glEnd();
}

void Background1()//Background B
{
    glColor3ub(0,0,75);
    glBegin(GL_POLYGON);
    glVertex2f(200.0f,200.0f);
	glVertex2f(-100.0f,200.0f);
	glColor3ub(128,128,128);
    glVertex2f(-100.0f,-100.0f);
	glVertex2f(200.0f,-100.0f);


	glEnd();
}

void Bridge()//Bridge B
{
    glLineWidth(5.0);

    //main bridge
    glColor3ub(96,96,96);
    glBegin(GL_POLYGON);
    glVertex2f(100.0f,-75.0f);
    glVertex2f(120.0f,-100.0f);
	glVertex2f(200.0f,-180.0f);
	glVertex2f(200.0f,-280.0f);
	glVertex2f(150.0f,-280.0f);
	glVertex2f(100.0f,-100.0f);
	glEnd();

	//road mid cross
    glColor3ub(225,223,223);
    glBegin(GL_LINES);
    glVertex2f(190.0f,-255.0f);
    glVertex2f(175.0f,-225.0f);
    glEnd();


    glColor3ub(225,223,223);
    glBegin(GL_LINES);
    glVertex2f(170.0f,-215.0f);
    glVertex2f(155.0f,-185.0f);
    glEnd();

    glColor3ub(225,223,223);
    glBegin(GL_LINES);
    glVertex2f(150.0f,-175.0f);
    glVertex2f(135.0f,-145.0f);
    glEnd();

    glColor3ub(225,223,223);
    glBegin(GL_LINES);
    glVertex2f(130.0f,-135.0f);
    glVertex2f(115.0f,-105.0f);
    glEnd();

    glLineWidth(3.5);
    glColor3ub(225,223,223);
    glBegin(GL_LINES);
    glVertex2f(100.0f,-80.0f);
    glVertex2f(113.0f,-100.0f);
    glEnd();

}

void Bridge1()//Bridge1 B1
{

    //left pillar
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(120.0f,-180.0f);
    glVertex2f(120.0f,-80.0f);
    glVertex2f(125.0f,-90.0f);
    glVertex2f(125.0f,-200.0f);
	glEnd();

    //top pillar
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(120.0f,-80.0f);
    glVertex2f(160.0f,-80.0f);
    glVertex2f(160.0f,-100.0f);
    glVertex2f(120.0f,-100.0f);
	glEnd();

    //right pillar
	glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(155.0f,-135.0f);
    glVertex2f(155.0f,-80.0f);
    glVertex2f(160.0f,-90.0f);
    glVertex2f(160.0f,-140.0f);
	glEnd();

    //wire
    //rightside
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(130.0f,-100.0f);
    glVertex2f(200.0f,-280.0f);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(130.0f,-100.0f);
    glVertex2f(140.0f,-245.0f);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(160.0f,-85.0f);
    glVertex2f(200.0f,-150.0f);
    glEnd();

    //leftside
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(100.0f,-100.0f);
    glVertex2f(120.0f,-85.0f);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(110.0f,-135.0f);
    glVertex2f(120.0f,-85.0f);
    glEnd();

}

void Mountain()//Mountain M
{

    //left black mountain
    glPushMatrix();
    glTranslatef(-30.0f, -50.0f, 0.0f);
    glScaled(1,0.5,1);
    glColor3ub(23, 32, 42);
    glBegin(GL_POLYGON);
    glVertex2f(120.0f,-100.0f);
    glVertex2f(140.0f,0.0f);
    glVertex2f(141.0f,1.0f);
    glVertex2f(142.0f,2.0f);
    glVertex2f(150.0f,4.0f);
    glVertex2f(160.0f,-10.0f);
    glVertex2f(163.0f,-10.0f);
    glVertex2f(164.0f,-9.0f);
    glVertex2f(165.0f,-9.0f);
    glVertex2f(200.0f,-10.0f);
    glVertex2f(200.0f,-100.0f);
	glEnd();
	glPopMatrix();

    //middle to left silver mountain covering mid part
    glColor3ub(170,183,184);
    glBegin(GL_POLYGON);
    glVertex2f(120.0f,-100.0f);
    glVertex2f(140.0f,0.0f);
    glVertex2f(141.0f,1.0f);
    glVertex2f(142.0f,2.0f);
    glVertex2f(150.0f,4.0f);
    glVertex2f(160.0f,-10.0f);
    glVertex2f(163.0f,-10.0f);
    glVertex2f(164.0f,-9.0f);
    glVertex2f(165.0f,-9.0f);
    glVertex2f(200.0f,-10.0f);
    glVertex2f(200.0f,-100.0f);
	glEnd();

    //middle to left ash mountain
	glColor3ub(149, 165, 166);
    glBegin(GL_POLYGON);
    glVertex2f(120.0f,-100.0f);
    glVertex2f(140.0f,-20.0f);
    glVertex2f(141.0f,-19.0f);
    glVertex2f(142.0f,-18.0f);
    glVertex2f(150.0f,-17.0f);
    glVertex2f(160.0f,-40.0f);
    glVertex2f(163.0f,-40.0f);
    glVertex2f(164.0f,-39.0f);
    glVertex2f(165.0f,-39.0f);
    glVertex2f(180.0f,10.0f);
    glVertex2f(190.0f,10.0f);
    glVertex2f(191.0f,9.0f);
    glVertex2f(192.0f,8.0f);
    glVertex2f(193.0f,7.0f);
    glVertex2f(194.0f,5.0f);
    glVertex2f(200.0f,5.0f);
    glVertex2f(200.0f,-100.0f);
	glEnd();
}

void Car()//Car C
{

    glLineWidth(3.0f);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    //main body
    glTranslatef(xr1, yr1, 0.0f);
    glColor3ub(0, 51, 102);
    glBegin(GL_POLYGON);
    glVertex2f(140.0f,-210.0f);
    glVertex2f(140.0f,-200.0f);
    glVertex2f(150.0f,-200.0f);
    glVertex2f(170.0f,-240.0f);
    glVertex2f(170.0f,-250.0f);
    glVertex2f(155.0f,-250.0f);
	glEnd();

    //roof
	glColor3ub(102, 0, 102);
    glBegin(GL_POLYGON);
    glVertex2f(147.0f,-205.0f);
    glVertex2f(160.0f,-205.0f);
    glVertex2f(170.0f,-225.0f);
    glVertex2f(155.0f,-225.0f);
	glEnd();

    //rear glass
	glColor3ub(52, 152, 219);
    glBegin(GL_POLYGON);
    glVertex2f(155.0f,-225.0f);
    glVertex2f(170.0f,-225.0f);
    glVertex2f(170.0f,-240.0f);
    glVertex2f(155.0f,-240.0f);
	glEnd();

	//side glass 1
	glColor3ub(52, 152, 219);
    glBegin(GL_POLYGON);
    glVertex2f(155.0f,-225.0f);
    glVertex2f(151.0f,-216.0f);
    glVertex2f(149.0f,-225.0f);
    glVertex2f(155.0f,-240.0f);
	glEnd();
    //side glass 2
	glColor3ub(52, 152, 219);
    glBegin(GL_POLYGON);
    glVertex2f(147.0f,-205.0f);
    glVertex2f(151.0f,-216.0f);
    glVertex2f(149.0f,-225.0f);
    glVertex2f(144.0f,-210.0f);
	glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(147.0f,-205.0f);
    glVertex2f(144.0f,-210.0f);
    glVertex2f(140.0f,-200.0f);
    glVertex2f(155.0f,-240.0f);
    glVertex2f(155.0f,-240.0f);
    glVertex2f(155.0f,-250.0f);
    glVertex2f(155.0f,-240.0f);
    glVertex2f(170.0f,-240.0f);
    glVertex2f(170.0f,-240.0f);
    glVertex2f(170.0f,-250.0f);
    glVertex2f(170.0f,-225.0f);
    glVertex2f(170.0f,-240.0f);
    glVertex2f(155.0f,-225.0f);
    glVertex2f(155.0f,-240.0f);
    glVertex2f(148.0f,-230.0f);
    glVertex2f(151.0f,-216.0f);
	glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(147.0f,-205.0f);
    glVertex2f(160.0f,-205.0f);
    glVertex2f(160.0f,-205.0f);
    glVertex2f(170.0f,-225.0f);
    glVertex2f(170.0f,-225.0f);
    glVertex2f(155.0f,-225.0f);
    glVertex2f(155.0f,-225.0f);
    glVertex2f(147.0f,-205.0f);
    glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
        {
            glColor3f(0.0f,0.0f,0.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+142,y-215 );
        }
    glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
        {
            glColor3f(0.0f,0.0f,0.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+151,y-240 );
        }
    glEnd();
    glPopMatrix();
	glutSwapBuffers();
}

void updateKeyboard(int value) //updateKeyboard upkey

{
    if(xr1 <-30.0f)
        xr1 = 20.0f;

    if(xr1 >20.0f)
        xr1 = -30.0f;

    if(yr1 >100.0f)
        yr1 = -100.0f;

    if(yr1 <-100.0)
        yr1 = 100.0f;

    glutPostRedisplay();

    glutTimerFunc(10,updateKeyboard,0);
}
void display1() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    Background1();
    Water();
    Mountain();

    Footpath();
    Bridge();
    Car();
    Bridge1();

	glFlush();  // Render now
	glutSwapBuffers();
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    Background();
    Water();
    Mountain();

    Footpath();
    Bridge();
    Car();
    Bridge1();

	glFlush();  // Render now
	glutSwapBuffers();
}


void handleKeypress(unsigned char key, int x, int y) //handleKeypress hkey
{

	switch (key) {

        case 'm':
        xr1=xr1-0.5;
        yr1=yr1+10;
        glutPostRedisplay();
        break;
        case 'n':
        xr1=xr1+0.5;
        yr1=yr1-4;
        glutPostRedisplay();
        break;
        case 's':
        glutDisplayFunc(display1);
        glutPostRedisplay();
        break;
        case 'd':
        glutDisplayFunc(display);
        glutPostRedisplay();
        break;
	}
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    cout <<"                                                     Night_City Project"<< endl << endl;
     cout <<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;



    cout <<"\n>>Keyboard Interaction<<"<< endl;

    cout <<"\n\nFor Scenario Change:"<< endl;

    cout << "Press s              : Light Night Mode" << endl;
    cout << "Press d              : Dark Night Mode" << endl << endl;

    cout << "For Car to move:"<< endl;

    cout << "Press m              : For Car to move towards the Mountain" << endl;
    cout << "Press n              : For Car to go backwards" << endl;

    cout <<"\n>>Mouse Interaction<<\n"<< endl;
	glutInit(&argc, argv);          // Initialize GLUT
	glutInitWindowSize(1300, 670);   // Set the window's initial width & height
	glutCreateWindow("Night City Project");  // Create window with the given title
	//glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	initGL();                       // Our own OpenGL initialization
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	glutKeyboardFunc(handleKeypress);  //Move Car   //Change the Scene
    glutTimerFunc(10,updateKeyboard,0);//Move Car
	glutMainLoop();                 // Enter the event-processing loop

	return 0;
}

