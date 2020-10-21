#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
int w_board,b_board;
void display(void)
{
 glClear (GL_COLOR_BUFFER_BIT);
 for(w_board= 0;w_board< 8;w_board++ ){
    for(b_board= 0;b_board< 8;b_board++ ){

    glBegin(GL_POLYGON);

    if((w_board%2) == 0){

        if((b_board%2) == 0){

            glColor3f (1, 1, 1);
        }
        else{

        glColor3f (0, 0, 0);
        }


    }
    else {

        if((b_board%2) == 0){

            glColor3f (0, 0, 0);
        }
        else{

            glColor3f (1, 1, 1);
        }
    }

    glVertex2f (w_board ,b_board);
    glVertex2f (w_board+1 ,b_board);
    glVertex2f (w_board+1 ,b_board+1);
    glVertex2f (w_board ,b_board+1);
    glEnd();
   }
 }
    glutSwapBuffers();
}

void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 8, 0, 8, 0, 8);
}


int main(int argc, char** argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
 glutInitWindowSize (600, 600);
 glutInitWindowPosition (200, 200);
 glutCreateWindow ("Chess Board by Rifat Anwar 171-15-9177");
 init ();
 glutDisplayFunc(display);
 glutMainLoop();
 return 0;
}
