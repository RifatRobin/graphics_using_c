#include<windows.h>
#include<stdio.h>
#include<math.h>
#include<GL/glut.h>
#include<conio.h>
#include<stdlib.h>
void init (void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,400.0,0.0,400.0);
}
void SetPixel(GLint x, GLint y)
{
    glColor3f(255,255,255);
    glBegin(GL_POINTS);
    glVertex2f(x,y);
    glEnd();
}
void Line()
{
    int x0=50, y0=50, xn=200,yn=400,x,y;
    int dx, dy;
    int pk;
    int k;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,0,0);
    SetPixel(x0,y0);
    dx=xn-x0;
    dy=yn-y0;
    pk=2*dy-dx;
    x=x0;
    y=y0;
    for(k=0;k<dx-1;++k)
    {
        if(pk<0)
        {
            pk=pk+2*dy;
        }
        else
        {
            pk=pk+2*dy-2*dx;
            ++y;
        }
        ++x;
        SetPixel(x,y);
    }
    glFlush();
}
int main (int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(700,550);
    glutCreateWindow("DDA by 171-15-9177");
    init();
    glutDisplayFunc(Line);
    glutMainLoop();
    return 0;
}
