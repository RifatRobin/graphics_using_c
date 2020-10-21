#include<windows.h>
#include <GL/glut.h>
#include <math.h>
static float	tx	=  0.0;
static float	ty	=  0.0;
void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-400, 400, -400, 400, -400, 400);
}
void display()
{
    float angle;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);


//black stroke of face
	glColor3f(0, 0 ,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(50+160*cos(angle),50+140*sin(angle));
	}
	glEnd();


 //face
	glColor3f(1, 1 ,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(50+150*cos(angle),50+140*sin(angle));
	}
	glEnd();

//left eye

	glColor3f(0, 0 ,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(0+35*cos(angle),60+45*sin(angle));
	}
	glEnd();

//right eye
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(100+35*cos(angle),60+45*sin(angle));
	}
	glEnd();

 //left eye dot

    //upper right dot
    glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(20+15*cos(angle),70+20*sin(angle));
	}
	glEnd();
	//bottom corner
    glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-20+10*cos(angle),30+15*sin(angle));
	}
	glEnd();


//right eye dot
    //upper right dot
    glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(120+15*cos(angle),70+20*sin(angle));
	}
	glEnd();

    //buttom corner
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(80+10*cos(angle),30+15*sin(angle));
	}
	glEnd();


//mouth1
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(50+50*cos(angle),-30+15*sin(angle));
	}
	glEnd();


//nose

    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(50+18*cos(angle),0+17*sin(angle));
	}
	glEnd();

//mouth2
    glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(30+23*cos(angle),-25+15*sin(angle));
	}
	glEnd();

    glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(70+23*cos(angle),-25+15*sin(angle));
	}
	glEnd();

//ear
    //left ear
    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-52+40*cos(angle),205+45*sin(angle));
	}
	glEnd();

	//right ear
    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(155+40*cos(angle),205+45*sin(angle));
	}
	glEnd();

//body
    glPushMatrix();

    glTranslatef(-45,-65,0);
    glColor3f(0,0,0);
    glRectf(200.0, -24.0, -10.0, -200.0);

//right arm
    glTranslatef(120,5,0);
    glColor3f(0,0,0);
    glRectf(150.0, -30.0, -15.0, -100.0);
//left arm
    glTranslatef(-190,-0,0);
    glColor3f(0,0,0);
    glRectf(100.0, -30.0, -15.0, -100.0);

//legs
    //left leg
    glTranslatef(80,-130,0);
    glColor3f(0,0,0);
    glRectf(60.0, -24.0, -10.0, -150.0);

    //right leg
    glTranslatef(120,-0,0);
    glColor3f(0,0,0);
    glRectf(60.0, -24.0, -10.0, -150.0);


//belly
    glColor3f(1, 1 ,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-35+55*cos(angle),-0+60*sin(angle));
	}
	glEnd();

    glPopMatrix();

//extras
    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-108+45*cos(angle),-125+38*sin(angle));
	}
	glEnd();

    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(208+45*cos(angle),-125+38*sin(angle));
	}
	glEnd();

    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(109+35*cos(angle),-325+40*sin(angle));
	}
	glEnd();

    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-11+35*cos(angle),-325+40*sin(angle));
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
	glutCreateWindow("panda draw 171-15-9171");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
