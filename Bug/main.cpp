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
//s body b
    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-30+145*cos(angle),-10+83*sin(angle));
	}
	glEnd();







//s body
    glColor3ub(99,99,99);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-30+140*cos(angle),-10+80*sin(angle));
	}
	glEnd();

//body b
    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-40+155*cos(angle),20+93*sin(angle));
	}
	glEnd();

//body
    glColor3ub(204,55,55);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-40+150*cos(angle),20+90*sin(angle));
	}
	glEnd();



//face b
    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-160+78*cos(angle),-20+53*sin(angle));
	}
	glEnd();

//face
    glColor3ub(99,99,99);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-160+75*cos(angle),-20+50*sin(angle));
	}
	glEnd();

//eye
    //glColor3ub(99,99,99);
    glColor3ub(255,255,255);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-120+30*cos(angle),0+25*sin(angle));
	}
	glEnd();

	glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<180;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-120+35*cos(angle),0+28*sin(angle));
	}
	glEnd();

    glColor3ub(99,99,99);
	glBegin(GL_POLYGON);
	for(i=0;i<180;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-120+30*cos(angle),0+25*sin(angle));
	}
	glEnd();



    glColor3ub(255,255,255);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-200+30*cos(angle),0+25*sin(angle));
	}
	glEnd();

glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<180;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-200+35*cos(angle),0+28*sin(angle));
	}
	glEnd();

glColor3ub(99,99,99);
	glBegin(GL_POLYGON);
	for(i=0;i<180;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-200+30*cos(angle),0+25*sin(angle));
	}
	glEnd();

glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-200+10*cos(angle),-10+10*sin(angle));
	}
	glEnd();
glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-115+10*cos(angle),-10+10*sin(angle));
	}
	glEnd();

//antena
glColor3ub(99,99,99);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-220+10*cos(angle),90+10*sin(angle));
	}
	glEnd();

glColor3ub(99,99,99);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-150+10*cos(angle),110+10*sin(angle));
	}
	glEnd();

glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-50+25*cos(angle),50+20*sin(angle));
	}
	glEnd();

glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-50+25*cos(angle),00+20*sin(angle));
	}
	glEnd();
glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-110+25*cos(angle),60+20*sin(angle));
	}
	glEnd();

glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(60+25*cos(angle),-20+20*sin(angle));
	}
	glEnd();

glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(20+25*cos(angle),70+20*sin(angle));
	}
	glEnd();

glColor3ub(50,50,50);
glTranslatef(-30,-150,0);
glRectf(0, 5.0, -20.0,70.0);

glTranslatef(-60,-0,0);
glRectf(0, 5.0, -20.0,70.0);

glTranslatef(120,-0,0);
glRectf(0, 5.0, -20.0,70.0);


glColor3ub(99,99,99);
glTranslatef(-30,-30,0);
glRectf(0, 5.0, -20.0,100.0);

glTranslatef(-60,-0,0);
glRectf(0, 5.0, -20.0,100.0);

glTranslatef(120,-0,0);
glRectf(0, 5.0, -20.0,100.0);


//mouth
glColor3ub(0,0,0);
glTranslatef(-250,120,0);
glRectf(80, 5.0, -20.0,10.0);


//antena
glColor3ub(0,0,0);
glTranslatef(-30,75,0);
glRectf(5, 5.0, -2.0,70.0);

glTranslatef(70,10,0);
glRectf(5, 5.0, -2.0,90.0);


glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(600, 600);
	glutCreateWindow("BUG");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

