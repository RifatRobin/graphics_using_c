#include <windows.h>
#include <gl\gl.h>
#include <gl\glut.h>
#include <iostream>
#include <GL/glut.h>
void myInit (void);
void mydisplay(void);
void myInit (void)
{
     glClearColor(0.0,0.0,0.0,0.0);
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluOrtho2D(-1000.0,1000.0,-1000.0,1000.0);
}
void mydisplay(void)
{
     glClear(GL_COLOR_BUFFER_BIT);
     glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
     glBegin(GL_POLYGON);
          glVertex2i (100, 400);
          glVertex2i (500, 500);
          glVertex2i (100, 600);
          glVertex2i (0, 1000);
          glVertex2i (-100, 600);
          glVertex2i (-500, 500);
           glVertex2i (-100, 400);
        glVertex2i (0, 0);
        glEnd();
 glColor4f(0.0f, 0.0f, 1.0f, 1.0f);
 glBegin(GL_POLYGON);
          glVertex2i (-400, 100);
          glVertex2i (-500, 500);
          glVertex2i (-600, 100);
          glVertex2i (-1000, 0);
          glVertex2i (-600, -100);
          glVertex2i (-500, -500);
          glVertex2i (-400, -100);
          glVertex2i (0, 0);
    glEnd();
  glColor4f(0.0f, 1.0f, 1.0f, 0.0f);
  glBegin(GL_POLYGON);
          glVertex2i (100, -400);
          glVertex2i (500, -500);
          glVertex2i (100, -600);
          glVertex2i (0, -1000);
          glVertex2i (-100, -600);
          glVertex2i (-500, -500);
          glVertex2i (-100, -400);
          glVertex2i (0, 0);
    glEnd();
  glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
          glVertex2i (400, 100);
          glVertex2i (500, 500);
          glVertex2i (600, 100);
          glVertex2i (1000, 0);
          glVertex2i (600, -100);
          glVertex2i (500, -500);
          glVertex2i (400, -100);
          glVertex2i (0, 0);
    glEnd();
     glFlush();
}
int main (int argc, char **argv)
{
     glutInit (&argc, argv);
     glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
     glutInitWindowSize (800, 600);
     glutInitWindowPosition (200, 30);
     glutCreateWindow ("2nd task:star by Sinthia");
     myInit();
     glutDisplayFunc (mydisplay);
     glutMainLoop();
     return 0;
}
