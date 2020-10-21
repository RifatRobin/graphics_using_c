#include<windows.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.1416

int i;

void init(void)
{
	glClearColor(1,1,1, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}
void circle(GLdouble rad, GLdouble x, GLdouble y)

{
    GLint points = 360;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_TRIANGLE_FAN);
    {
        for( i = 0; i <=360; i++, theta += delTheta )
        {
            glVertex2f(x+rad * cos(theta),y+rad * sin(theta));
        }
    }
    glEnd();
}



void Display()
{

    float angle;
    int i;
glClear(GL_COLOR_BUFFER_BIT);


//body
glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
  glRectf(220,100,245,230);
  glRectf(255,100,280,230);
  glRectf(245,130,255,230);

//ear
glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
   circle(20,210,290);
   circle(20,210,290);
   circle(20,283,290);


glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
   circle(50,250,250);

glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
   circle(47,250,250);
   circle(20,250,170);

glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
   circle(15,225,250);
   circle(15,275,250);

glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
   circle(7,225,250);
   circle(7,275,250);

glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
   circle(5,225,250);
   circle(5,275,250);




//nose
glBegin(GL_TRIANGLES);
  glVertex2f(250,230);
  glVertex2f(242,240);
  glVertex2f(258,240);
  glEnd();

//lefthand
glBegin(GL_POLYGON);
  glVertex2f(220,200);
  glVertex2f(205,165);
  glVertex2f(215,165);
  glVertex2f(220,175);
  glEnd();

//righthand
glBegin(GL_POLYGON);
  glVertex2f(280,200);
  glVertex2f(295,165);
  glVertex2f(285,165);
  glVertex2f(280,175);
  glEnd();

  glRectf(245,220,255,218);

glPushMatrix();
glColor3f(0.0, 0.0 ,0.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(250+20*cos(angle),122+15*sin(angle));
	}
	glEnd();

glColor3f(1.0, 1.0 ,1.0);
glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(260+18*cos(angle),150+20*sin(angle));
	}
	glEnd();

glColor3f(1.0, 1.0 ,1.0);
glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(250+18*cos(angle),130+20*sin(angle));
	}
	glEnd();

glColor3f(1.0, 1.0 ,1.0);
glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(242+18*cos(angle),150+20*sin(angle));
	}
	glEnd();

glColor3f(0.0, 0.0 ,0.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(267+13*cos(angle),125+17*sin(angle));
	}
	glEnd();

glColor3f(0.0, 0.0 ,0.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(232+13*cos(angle),125+17*sin(angle));
	}
	glEnd();



glColor3f(1.0, 1.0 ,1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(267+11*cos(angle),119+16*sin(angle));
	}
	glEnd();

glColor3f(1.0, 1.0 ,1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(232+11*cos(angle),119+16*sin(angle));
	}
	glEnd();


glPopMatrix();



    glFlush();
}




int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(50,10);
    glutCreateWindow("Lab final by tareq 171-15-9182");
    init();
    glutDisplayFunc(Display);
    glutMainLoop();
    return 0;
}

