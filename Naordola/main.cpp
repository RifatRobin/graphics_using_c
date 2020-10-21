#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

#include <stdlib.h>
#include <math.h>

static GLfloat spin = 0.0;
static float	tx	=  0.0;
static float	ty	=  0.0;

void display(void)
{
    glClearColor(1.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);

//the Base of Nagardola
	glPushMatrix();

    glTranslatef(tx,ty,0);
    glColor3f(0,1,0);
    glRectf(10.0, -24.0, -10.0, -120.0);


    glTranslatef(0,0,0);
    glColor3f(1,0.9,0.1);
    glRectf(25.0, 25, -25.0, -25.0);


    glTranslatef(0,-115,0);
    glColor3f(0.2,0.8,1);
    glRectf(20.0, 20, -20.0, -20.0);

    glPopMatrix();


//body of nagardola
	glPushMatrix();

	glRotatef(spin, 0.0, 0.0, 1.0);

	glTranslatef(-25,0,0);
    glColor3f(1.0,1.0,1.0);
    glRectf(0.0, 10.0, -40.0, -10.0);

    glTranslatef(-40,0,0);
    glColor3f(0,1,0);
    glRectf(20.0, 20, -20.0, -20.0);


	glTranslatef(90,0,0);
    glColor3f(1.0,1.0,1.0);
    glRectf(40.0, 10.0, -0.0, -10.0);

    glTranslatef(40,0,0);
    glColor3f(0,1,0);
    glRectf(20.0, 20, -20.0, -20.0);

	glPopMatrix();





	glFlush();
}

void spinDisplay_left(void)
{
   spin = spin + 1;
   if (spin > 360.0)
      spin = spin - 360.0;
   glutPostRedisplay();
}

void spinDisplay_right(void)
{
   spin = spin - 1;
   if (spin > 360.0)
      spin = spin - 360.0;
   glutPostRedisplay();
}


void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glOrtho(-150.0, 150.0, -150.0, 150.0, -150, 150);
}


void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 'l':
			spinDisplay_left();
			break;

		case 'r':
			spinDisplay_right();
			break;


		case 's':
			 glutIdleFunc(NULL);
			 break;

	  default:
			break;
	}
}


void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_left);
         break;
      case GLUT_MIDDLE_BUTTON:
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
			glutIdleFunc(spinDisplay_right);
         break;
      default:
         break;
   }
}



int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (700, 700);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("Nagar dola by Rifat 171-15-9177");
	init();
    glutMouseFunc(my_mouse);
	glutDisplayFunc(display);
	glutKeyboardFunc(my_keyboard);
	glutMainLoop();
	return 0;
}

