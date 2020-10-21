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

//hands
glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d (-300,0);
    glVertex2d (320, 0);
    glVertex2d (40, 250);
    glEnd();

 //face
    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(10+220*cos(angle),50+250*sin(angle));
	}
	glEnd();

//belly
    glColor3ub(240,242,245);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(10+180*cos(angle),-40+160*sin(angle));
	}
	glEnd();

 //legs
    glColor3f(1,0.9,0.2);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-100+95*cos(angle),-200+30*sin(angle));
	}
	glEnd();
    glColor3f(1,0.9,0.2);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(110+95*cos(angle),-200+30*sin(angle));
	}
	glEnd();

//eye left
    glColor3ub(249,250,252);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-50+60*cos(angle),160+63*sin(angle));
	}
	glEnd();


//eye
    glColor3ub(249,250,252);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(70+60*cos(angle),150+40*sin(angle));
	}
	glEnd();
//eye left
    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-9+20*cos(angle),160+20*sin(angle));
	}
	glEnd();

    glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-10+8*cos(angle),165+8*sin(angle));
	}
	glEnd();
//eye right
    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(27+15*cos(angle),155+15*sin(angle));
	}
	glEnd();

    glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(22+6*cos(angle),161+6*sin(angle));
	}
	glEnd();

//nose
glColor3f(1,0.9,0);
    glBegin(GL_POLYGON);
    glVertex2d (-40,120);
    glVertex2d (50, 120);
    glVertex2d (5, 60);
    glEnd();






glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(600, 600);
	glutCreateWindow("Penguin by 171-15-9177");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

