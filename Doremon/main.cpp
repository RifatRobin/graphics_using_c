#include<windows.h>
#include <GL/glut.h>
#include <math.h>
void init(void)
{
	glClearColor(0.2,0.3,0.0, 0.0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-400, 400, -400, 400, -400, 400);
}
void display()
{
    float angle;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);

//all b
//body b
glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d (-109, -105);
    glVertex2d (109, -105);
    glVertex2d (109, 34);
    glVertex2d (-109, 34);
    glEnd();

//hands b

    glBegin(GL_POLYGON);
    glVertex2d (-109, -14);
    glVertex2d (109, -14);
    glVertex2d (216, 10);
    glVertex2d (175, 45);
    glVertex2d (104, 24);
    glVertex2d (-114, 24);
    glVertex2d (-216, -31);
    glVertex2d (-164, -54);
    glEnd();


//face b
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(0+155*cos(angle),100+125*sin(angle));
	}
	glEnd();







//body
glColor3f(0,0.5,0.8);
    glBegin(GL_POLYGON);
    glVertex2d (-105, -105);
    glVertex2d (105, -105);
    glVertex2d (105, 30);
    glVertex2d (-105, 30);
    glEnd();

//leg balls b
    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(65+58*cos(angle),-175+23*sin(angle));
	}
	glEnd();
    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-68+58*cos(angle),-175+23*sin(angle));
	}
	glEnd();


//leg balls
    glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(65+55*cos(angle),-175+20*sin(angle));
	}
	glEnd();
    glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-68+55*cos(angle),-175+20*sin(angle));
	}
	glEnd();

//legs b
glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d (-110, -173);
    glVertex2d (-35, -173);
    glVertex2d (85, 33);
    glVertex2d (-110, 33);
    glEnd();

glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d (25, -173);
    glVertex2d (110, -173);
    glVertex2d (110, 33);
    glVertex2d (-85, 33);
    glEnd();

//legs
glColor3f(0,0.5,0.8);
    glBegin(GL_POLYGON);
    glVertex2d (-105, -170);
    glVertex2d (-30, -170);
    glVertex2d (80, 30);
    glVertex2d (-105, 30);
    glEnd();

glColor3f(0,0.5,0.8);
    glBegin(GL_POLYGON);
    glVertex2d (25, -170);
    glVertex2d (105, -170);
    glVertex2d (105, 30);
    glVertex2d (-80, 30);
    glEnd();





//hands
glColor3f(0,0.5,0.8);
    glBegin(GL_POLYGON);
    glVertex2d (-105, -10);
    glVertex2d (105, -10);
    glVertex2d (210, 10);
    glVertex2d (180, 40);
    glVertex2d (100, 20);
    glVertex2d (-110, 20);
    glVertex2d (-210, -30);
    glVertex2d (-160, -50);
    glEnd();

//handballs b
    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(190+33*cos(angle),30+28*sin(angle));
	}
	glEnd();
    glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-190+33*cos(angle),-45+28*sin(angle));
	}
	glEnd();

//handballs
    glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(190+30*cos(angle),30+25*sin(angle));
	}
	glEnd();

    glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(-190+30*cos(angle),-45+25*sin(angle));
	}
	glEnd();

//face
    glColor3f(0,0.5,0.8);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(0+150*cos(angle),100+125*sin(angle));
	}
	glEnd();


//body white
    glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(0+140*cos(angle),90+90*sin(angle));
	}

	glEnd();

    glColor3f(1,1,1);
	glBegin(GL_POLYGON);
    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(0+90*cos(angle),-40+65*sin(angle));
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
	glutCreateWindow("Doremon");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

