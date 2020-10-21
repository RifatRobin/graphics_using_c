#include<windows.h>
#include <GL/glut.h>
#include <math.h>
void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-400, 400, -400, 400, -400, 400);
}
void display()
{
    float angle;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);



 //face
    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(70+25*cos(angle),200+75*sin(angle));
	}
	glEnd();

     glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(30+25*cos(angle),200+55*sin(angle));
	}
	glEnd();

 	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(40+145*cos(angle),70+125*sin(angle));
	}
	glEnd();

	glColor3f(1,0.4,0.4);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(40+140*cos(angle),70+120*sin(angle));
	}
	glEnd();

    glColor3f(1,0.4,0.4);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(40+140*cos(angle),80+130*sin(angle));
	}
	glEnd();



    glColor3f(1,0.4,0.4);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(30+20*cos(angle),200+50*sin(angle));
	}
	glEnd();

    glColor3f(1,0.4,0.4);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(70+20*cos(angle),200+70*sin(angle));
	}
	glEnd();
//eye black
    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(70+35*cos(angle),70+30*sin(angle));
	}
	glEnd();

    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(110+35*cos(angle),70+30*sin(angle));
	}
	glEnd();

    glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(65+25*cos(angle),70+22*sin(angle));
	}
	glEnd();

    glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(115+25*cos(angle),70+23*sin(angle));
	}
	glEnd();

    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(70+10*cos(angle),70+10*sin(angle));
	}
	glEnd();

    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(110+10*cos(angle),70+10*sin(angle));
	}
	glEnd();

    glTranslatef(70,90,0);
    glColor3f(0,0,0);
    glRectf(15, 10.0, -40.0, -7.0);

    glTranslatef(65,0,0);
    glColor3f(0,0,0);
    glRectf(15, 10.0, -40.0, -7.0);

    glColor3f(1,0.8,0.6);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-95+95*cos(angle),-110+30*sin(angle));
	}
	glEnd();

    /*glBegin(GL_POLYGON);
    glColor3f(1,0.9,0.6);
    glVertex2f( -80, -70);
    glVertex2f( 30, -80);
    glVertex2f( -20, -30);
    glEnd();*/

glPushMatrix();

glTranslatef(-20,-65,0);

glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d (-25, -35);
    glVertex2d (45, 0);
    glVertex2d (-25, 25);
    glVertex2d (-85, 0);
    glEnd();

glColor3f(1,0.9,0.6);
	glBegin(GL_POLYGON);
    glVertex2d (-20, -30);
    glVertex2d (40, 0);
    glVertex2d (-20, 20);
    glVertex2d (-80, 0);
    glEnd();

    glTranslatef(-40,-5,0);
    glColor3f(0,0,0);
    glRectf(78, 5.0, -40.0, -0.0);

    glPopMatrix();

glColor3f(0,0,0);

glTranslatef(-270,-10,0);
	glBegin(GL_POLYGON);
    glVertex2d (-20, -30);
    glVertex2d (40, 0);
    glVertex2d (-10, 30);
    glVertex2d (-40, 0);
    glEnd();

glTranslatef(-0,-10,0);
	glBegin(GL_POLYGON);
    glVertex2d (-20, -30);
    glVertex2d (40, 0);
    glVertex2d (-10, 30);
    glVertex2d (-40, 0);
    glEnd();


glTranslatef(-45,15,0);
glColor3f(1,1,1);
glRectf(78, 3.0, -20.0, -2.0);

glTranslatef(-0,-25,0);
glColor3f(1,1,1);
glRectf(78, 5.0, -20.0, -2.0);











glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Angry Bird by rifat anwar(171-15-9177)");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

