#include<windows.h>
#include <GL/glut.h>
#include <math.h>
void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);

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
	glColor3f(0.9, 0.6 ,0.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(200+150*cos(angle),200+140*sin(angle));
	}
	glEnd();

//left eye

	glColor3f(1.0, 1.0 ,1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(150+35*cos(angle),250+45*sin(angle));
	}
	glEnd();

//right eye
	glColor3f(1.0, 1.0 ,1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(250+35*cos(angle),250+45*sin(angle));
	}
	glEnd();

 //left eye dot
    glColor3f(0.0, 0.0, 0.2);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(150+10*cos(angle),245+15*sin(angle));
	}
	glEnd();

//right eye dot
	glColor3f(0.0, 0.0, 0.2);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(250+10*cos(angle),245+15*sin(angle));
	}
	glEnd();

//mouth
	glColor3ub(151, 53, 90);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(200+35*cos(angle),120+35*sin(angle));
	}
	glEnd();

    glColor3f(0.9, 0.6 ,0.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(200+55*cos(angle),160+35*sin(angle));
	}
	glEnd();

    glColor3f(1.0,0.4,0.4);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(200+23*cos(angle),100+15*sin(angle));
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
	glutCreateWindow("Emoji by rifat anwar(171-15-9177)");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
