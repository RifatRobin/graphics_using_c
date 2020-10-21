#include<windows.h>
#include <GL/glut.h>
#include <math.h>
void init(void)
{
	glClearColor(0,0,0, 0.0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-400, 400, -400, 400, -400, 400);
}
void display()
{
    float angle;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);


//hands
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(70+15*cos(angle),-70+25*sin(angle));
	}
		for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(70+25*cos(angle),-70+10*sin(angle));
	}

	glEnd();

	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-70+15*cos(angle),-70+25*sin(angle));
	}
		for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-70+25*cos(angle),-70+10*sin(angle));
	}

	glEnd();

//arms
glColor3f(1,0.2,0.3);
    glBegin(GL_POLYGON);
    glVertex2d (-80, -50);
    glVertex2d (-60, -80);
    glVertex2d (60, -80);
    glVertex2d (80, -50);
    glVertex2d (30, 50);
    glVertex2d (-30, 50);
    glEnd();

//legs
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(30+30*cos(angle),-150+50*sin(angle));
	}
	glEnd();

    glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-35+30*cos(angle),-150+50*sin(angle));
	}
	glEnd();


//cloths b
glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d (-95, -155);
    glVertex2d (95, -155);
    glVertex2d (35, 55);
    glVertex2d (-35, 55);
    glEnd();

//cloths
glColor3f(1,0.5,0.9);
    glBegin(GL_POLYGON);
    glVertex2d (-90, -150);
    glVertex2d (90, -150);
    glVertex2d (30, 50);
    glVertex2d (-30, 50);
    glEnd();

//head b
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(0+105*cos(angle),70+75*sin(angle));
	}
	glEnd();

//head
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(0+100*cos(angle),70+70*sin(angle));
	}
	glEnd();



//mouth
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(0+16*cos(angle),30+8*sin(angle));
	}
	glEnd();

//eye
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(60+8*cos(angle),60+10*sin(angle));
	}
	glEnd();

	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-60+8*cos(angle),58+10*sin(angle));
	}
	glEnd();


glFlush();
}


int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Kitty");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

