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
    glClearColor(0.3,0.5,0.7,0.0);
    glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();

	glRotatef(spin, 0.0, 0.0, 1.0);

	//glColor3f(1.0, 1.0, 1.0);
	//main boxed
	glTranslatef(tx,ty,0);
    glColor3f(1.0,1.0,1.0);
    glRectf(-25.0, -25.0, 25.0, 25.0);

    glColor3f(0.0, 0.0, 0.0);
	glRectf(-19.0, -19.0, 19.0, 19.0);

    glColor3f(1.0, 1.0, 1.0);
	glRectf(-9.0, -9.0, 9.0, 9.0);

    //attached boxes in corner
    glTranslatef(32.0,32.0,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-7.0, -7.0, 7.0, 7.0);

    glTranslatef(0.0,-64.0,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-7.0, -7.0, 7.0, 7.0);

    glTranslatef(-64.0,64.0,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-7.0, -7.0, 7.0, 7.0);

    glTranslatef(-0.0,-64.0,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-7.0, -7.0, 7.0, 7.0);

	glPopMatrix();

//for corner design
	glPushMatrix();

//buttom left corner
    glTranslatef(-95.0,-95.0,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(10.0,10.0,0);
    glColor3f(1.0,1.0,1.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(10.0,10.0,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(10.0,10.0,0);
    glColor3f(1.0,1.0,1.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(10.0,10.0,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

//up right corner
    glTranslatef(110.0,110.0,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(10.0,10.0,0);
    glColor3f(1.0,1.0,1.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(10.0,10.0,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(10.0,10.0,0);
    glColor3f(1.0,1.0,1.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(10.0,10.0,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

//buttom right corner
    glTranslatef(-0,-190,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(-10.0,10.0,0);
    glColor3f(1.0,1.0,1.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(-10.0,10.0,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(-10.0,10.0,0);
    glColor3f(1.0,1.0,1.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(-10.0,10.0,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

//up left corner
    glTranslatef(-110,110,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(-10.0,10.0,0);
    glColor3f(1.0,1.0,1.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(-10.0,10.0,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(-10.0,10.0,0);
    glColor3f(1.0,1.0,1.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);

    glTranslatef(-10.0,10.0,0);
    glColor3f(0.0,0.0,0.0);
    glRectf(-5.0, -5.0, 5.0, 5.0);


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
	glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
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

void special_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:
				tx -=5;
				glutPostRedisplay();
				break;


		case GLUT_KEY_RIGHT:
				tx +=5;
				glutPostRedisplay();


		case GLUT_KEY_DOWN:
				ty -=5;
				glutPostRedisplay();
				break;


		case GLUT_KEY_UP:
				ty +=5;
				glutPostRedisplay();
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
	glutCreateWindow ("Transformation Loop by Liza");
	init();
    glutMouseFunc(my_mouse);
	glutDisplayFunc(display);
	glutKeyboardFunc(my_keyboard);
	glutSpecialFunc(special_key);
	glutMainLoop();
	return 0;
}

