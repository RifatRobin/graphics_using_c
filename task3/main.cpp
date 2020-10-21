#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
void init (void)
{
   glClearColor (0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D (0.0,640.0,0.0,480.0);
}
float xstart=80 ,ystart=320,xend=200,yend=30,x,y;
int Round(float a)
{
  if(a-int(a)>=0.5)
  return int(a)+1;
  else
  return int(a);
     }
void bressen()
     {
       float ydiff = yend-ystart;
       float xdiff = xend-xstart;
        float p0;
         p0 = 2*(ydiff)-xdiff;
        x = xstart;
        y = ystart;
while ((x != xend+1)&&(y != yend+1))
      {
       glBegin(GL_POINTS);
       glVertex2i(Round(x),Round(y));
	   glEnd();
if (p0<0)
       {
		x = x+1;
		y = y;
		p0=p0+2*(ydiff);
       }
       else
       {
         x=x+1;
         y=y+1;
         p0=2*(ydiff)-2*(xdiff);
       }
}
  glutPostRedisplay();
  }
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);
    glPointSize(6);
    bressen();
    glFlush();
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE );
glutInitWindowSize(640,480);
glutInitWindowPosition (10, 10);
glutCreateWindow ("Bresenham Algorithm");
init ();
glutDisplayFunc(display);
 glutIdleFunc(bressen);
glutMainLoop();
return 0;
}
