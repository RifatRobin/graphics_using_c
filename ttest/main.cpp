#include<windows.h>
#include<Gl/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
int x=-498,y=498;
int state1=1,state2=1;
void display();
void reshape(int,int);
void timer(int);
void cubeY(int);
void cubeX(int);
void largecube(int);

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

    glutInitWindowPosition(200,200);
    glutInitWindowSize(500,500);

    glutCreateWindow("MY WINDOW");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0,timer,0);

    glutMainLoop();
}
void largecube(int x)
{

    glBegin(GL_POLYGON);

    glVertex2f(x,75);
    glVertex2f(x,-75);
    glVertex2f(x+150,-75);
    glVertex2f(x+150,75);

    glEnd();
}
void cubeX(int x)
{
    glClearColor(1.0,0.0,0.0,0.0);
    glBegin(GL_POLYGON);

    glVertex2f(x,50);
    glVertex2f(x,-50);
    glVertex2f(x+100,-50);
    glVertex2f(x+100,50);

    glEnd();
}
void cubeY(int y)
{
    glBegin(GL_POLYGON);

    glVertex2f(50,y);
    glVertex2f(-50,y);
    glVertex2f(-50,y-100);
    glVertex2f(50,y-100);

    glEnd();
}

void display()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    if((x<-50<x+100) && (-50<y+100<50))
    {
    cubeX(x);
    glColor3f(1.0,0.0,0.0);
    cubeY(y);
    glColor3f(0.0,1.0,0.0);
    }

    glutSwapBuffers();
}

void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-500,500,-500,500);
    glMatrixMode(GL_MODELVIEW);

}

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);
    switch(state1)
        {
        case 1:
            if(x<348)
            {
                x+=5;
            }
            else
                state1=-1;
            break;
        case -1:
            if(x>-498)
            {
                x-=5;
            }
            else
                state1=1;
            break;
        }
        switch(state2)
        {
        case 1:
            if(y>-348)
            {
                y-=5;
            }
            else
                state2=-1;
            break;
        case -1:
            if(y<498)
            {
                y+=5;
            }
            else
                state2=1;
            break;
        }
}
