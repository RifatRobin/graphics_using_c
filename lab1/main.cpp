#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>





void display(void)

{

/* clear all pixels */

glClear (GL_COLOR_BUFFER_BIT);/*glClear with GL_COLOR_BUFFER_BIT parameter.
This will clear the window with the color we specified earlier using
glClearColor*/

/* draw white polygon (rectangle) with corners at

*	(0.25, 0.25, 0.0) and (0.75, 0.75, 0.0) */
glColor3f (0.75, 0.2, 0.5);

/*a "vertex", with three coordinites, representing x,
y, and z.  For example:

(0,0,0) <-- The origin, the center of our defined space.
(2,0,4) <-- 2 units to the right, 4 units towards us, on the center of the
            y-axis.
(3,-4,-2) <-- 3 units to the right, 4 units down, and 2 units away from us.
*/

 glBegin(GL_POLYGON);
 glVertex3f (0.0, 0.25, 0.0);
 glVertex3f (0.75, 0.25, 0.0);
 glVertex3f (0.75, 0.75, 0.0);
 //glVertex3f (0.25, 0.75, 0.0);


glEnd();

/* don't wait!

*	start processing buffered OpenGL routines */
glutSwapBuffers ();

}

void init (void)

{

glClearColor (0.0, 0.0, 0.0, 0.0);//this is for background color (black)

/* initialize viewing values */
glMatrixMode(GL_PROJECTION); //Initialize the matrix state.  There are two matrix modes,projection and modelview
//Projection is used to set up the viewport and
//clipping boundry, while modelview is used to rotate, translate and scale
//objects quickly.
glLoadIdentity();/*loads the identity matrix into the current matrix state (in
this case the projection matrix).  You can consider this the resetting
matrix...it resets everything back to zero*/

glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
/*This function sets up a clipping volume.  You can think of a clipping volume as
a box in which your drawing commands are rendered.*/

}

/*

*	Declare initial window size, position, and display mode

*	(single buffer & RGBA). Open window with "lab1"

*	In its title bar. Call initialization routines.

*	Register callback function to display graphics.

*	Enter main loop and process events.


*/

int main(int argc, char** argv)

{

glutInit(&argc, argv);

glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);//this tells i want double buffered window, with rgb color

glutInitWindowSize (550,500);
glutInitWindowSize (550,500);

glutInitWindowPosition (990, 510);

glutCreateWindow ("lab1");

init ();

glutDisplayFunc(display);

glutMainLoop();

return 0; /* ISO C requires main to return int. */

}
