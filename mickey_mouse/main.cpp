#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>

void circle(GLfloat rx, GLfloat ry, GLfloat x, GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI= 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0;i<100;i++)
    {
        angle = 2 * PI * i/100;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)* ry));
    }
    glEnd();

}
void head()
{
      int i=0;
    float angle;

//ear
    glColor3ub(0, 0, 0);
    circle(30.5,35,150,365);
    glColor3ub(0, 0, 0);
    circle(30.5,35,250,365);


//hair
    glColor3ub(0, 0, 0);
    circle(80,100,200,250);
    glColor3ub(232,190,213);
    circle(25,50,180,280);
    glColor3ub(232,190,213);
    circle(25,50,220,280);
    glColor3ub(232,190,213);
    circle(75,35,200,215);


//b c
    glColor3ub(0, 0, 0);
    circle(10,25,188,280);
    glColor3ub(0, 0, 0);
    circle(10,25,212,280);

//eye
    glColor3ub(255, 255, 255);
    circle(8,23,188,280);
    glColor3ub(255, 255, 255);
    circle(8,23,212,280);


//eye dot
    glColor3ub(0, 0, 0);
    circle(4,9,190,265);
    glColor3ub(0, 0, 0);
    circle(4,9,210,265);

//
    glColor3ub(0, 0, 0);
    circle(60,20,200,210);
    glColor3ub(232,190,213);
    circle(69,60,200,200);

    glColor3ub(232,190,213);
    circle(40,60,200,190);

//lips
    glColor3ub(0, 0, 0);
    circle(20,18,200,180);
    glColor3ub(235,75,61);
    circle(15,8,200,168);

//mouth
    glColor3ub(0, 0, 0);
    circle(40,20,200,200);
    glColor3ub(232,190,213);
    circle(40,20,200,203);

//nose
glColor3ub(0, 0, 0);
    circle(25,12,200,230);

//eye shad

glColor3ub(0, 0, 0);
    circle(20,5,200,250);

glColor3ub(232,190,213);
    circle(20,5,200,248);





}


void display(void)
{

          int i=0;
    float angle;

    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    glColor3ub (255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d (0, 0);
    glVertex2d (400, 0);
    glVertex2d (400, 400);
    glVertex2d (0, 400);
    glEnd();





	 head();

	glFlush();
}
void init(void)
{
	glClearColor (0, 0, 0, 0);
	glOrtho(0, 400.0, 0, 400.0, 0, 400.0);
}

int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (400, 400);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("mickey mouse by 171-15-8797");
	init();
    glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
