#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

#include <stdlib.h>
#include <math.h>


static float	tx	=  25.0;
static float	ty	=  -200.0;

static float	tpx	=  190.0;
static float	tpy	= 10.0;

static float	tcx	=  -140.0;
static float	tcy	= 90.0;

static float	tmx	=  110.0;
static float	tmy	= 75.0;

void display(void)
{
    float angle;
    int i;
    glClear(GL_COLOR_BUFFER_BIT);



    glPushMatrix();
	//glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx+190,ty,0);

	glColor3f(1,0.9,0);
	glRectf(-10.0, -10.0, 10.0, 10.0);

	glColor3f(0.8,0.9,0.9);
	glRectf(-30.0, -10.0, 10.0, 150.0);

    glTranslatef(25,-20,0);
	glRectf(-20.0, -10.0, 10.0, 140.0);

	glTranslatef(25,-20,0);
	glRectf(-35.0, -10.0, 10.0, 130.0);

    glTranslatef(25,-20,0);
	glRectf(-5.0, -10.0, 10.0, 165.0);

	glPopMatrix();



    glPushMatrix();
	//glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx+80,ty,0);

	glColor3f(0.8,0.9,0.9);
	glRectf(-25.0, -10.0, 10.0, 190.0);

    glTranslatef(25,-20,0);
	glRectf(-15.0, -10.0, 10.0, 140.0);

	glTranslatef(25,-20,0);
	glRectf(-20.0, -10.0, 10.0, 120.0);

    glTranslatef(25,-20,0);
	glRectf(-13.0, -10.0, 10.0, 165.0);

	glPopMatrix();


    glPushMatrix();
	//glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx-20,ty,0);

	glColor3f(0.8,0.9,0.9);
	glRectf(-30.0, -10.0, 10.0, 120.0);

    glTranslatef(25,-20,0);
	glRectf(-15.0, -10.0, 10.0, 165.0);

	glTranslatef(25,-20,0);
	glRectf(-30.0, -10.0, 10.0, 195.0);

    glTranslatef(25,-20,0);
    glColor3f(0.8,0.9,0.9);
	glRectf(-13.0, -10.0, 10.0, 155.0);

	glPopMatrix();


    glPushMatrix();
	//glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx-135,ty,0);

	glColor3f(0.8,0.9,0.9);
	glRectf(-30.0, -10.0, 10.0, 220.0);

    glTranslatef(25,-20,0);
    glColor3f(0.8,0.9,0.9);
	glRectf(-13.0, -10.0, 10.0, 165.0);

	glTranslatef(25,-20,0);
	glColor3f(0.8,0.9,0.9);
	glRectf(-13.0, -10.0, 10.0, 195.0);

    glTranslatef(25,-20,0);
    glColor3f(0.8,0.9,0.9);
	glRectf(-25.0, -10.0, 10.0, 260.0);

	glPopMatrix();


    glPushMatrix();
	//glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx-220,ty,0);

	glColor3f(0.8,0.9,0.9);
	glRectf(-30.0, -10.0, 10.0, 180.0);

    glTranslatef(25,-20,0);
	glRectf(-20.0, -10.0, 10.0, 120.0);

	glTranslatef(25,-20,0);
	glRectf(-10.0, -10.0, 10.0, 250.0);

    glTranslatef(25,-20,0);
	glRectf(-13.0, -10.0, 10.0,100.0);

	glPopMatrix();





//moon
    glPushMatrix();

    glColor3f(0.9,0.7,0.3);
    glTranslatef(tmx,tmy,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tmx+45*cos(angle),tmy+45*sin(angle));
	}
	glEnd();

    glPopMatrix();




//house lights pattern 1
    glPushMatrix();
    glColor3f(1,0.9,0);

    glTranslatef(7,-90,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
    glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
    glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);



	glTranslatef(-13,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);



	glTranslatef(-15,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);



	glTranslatef(-17,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


	glTranslatef(-15,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


    glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);



	glTranslatef(-42,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


    glTranslatef(230,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


	glTranslatef(30,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

	glTranslatef(65,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

	glTranslatef(47,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


	glTranslatef(75,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


    glPopMatrix();


//house lights pattern 2
    glPushMatrix();
    glColor3f(1,0.9,0);

    glTranslatef(7,-150,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
    glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
    glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);



	glTranslatef(-13,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);



	glTranslatef(-15,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);



	glTranslatef(-17,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


	glTranslatef(-15,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


    glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


	glTranslatef(-42,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


    glTranslatef(230,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


	glTranslatef(30,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

	glTranslatef(65,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

	glTranslatef(47,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


	glTranslatef(55,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

	glTranslatef(12,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


    glPopMatrix();

    glPushMatrix();
    glColor3f(1,0.9,0);

    glTranslatef(145,-150,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
    glTranslatef(10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

    glTranslatef(-30,-150,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

    glPopMatrix();

//house lights pattern 3
    glPushMatrix();
    glColor3f(1,0.9,0);

    glTranslatef(7,-180,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
    glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
    glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);



	glTranslatef(-13,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);



	glTranslatef(-15,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);



	glTranslatef(-17,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


	glTranslatef(-15,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


    glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);



	glTranslatef(-42,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


    glTranslatef(230,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


	glTranslatef(30,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

	glTranslatef(65,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

	glTranslatef(47,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


	glTranslatef(55,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

	glTranslatef(12,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


    glPopMatrix();

    glPushMatrix();
    glColor3f(1,0.9,0);

    glTranslatef(145,-150,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
    glTranslatef(10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

    glTranslatef(-30,-150,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

    glPopMatrix();


//house lights pattern 2
    glPushMatrix();
    glColor3f(1,0.9,0);

    glTranslatef(7,-120,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
    glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
    glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);



	glTranslatef(-13,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);



	glTranslatef(-15,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);



	glTranslatef(-17,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


	glTranslatef(-15,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


    glTranslatef(-10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


	glTranslatef(-42,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


    glTranslatef(230,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


	glTranslatef(30,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

	glTranslatef(65,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

	glTranslatef(47,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(-8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


	glTranslatef(55,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
	glTranslatef(8,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

	glTranslatef(12,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);


    glPopMatrix();

    glPushMatrix();
    glColor3f(1,0.9,0);

    glTranslatef(145,-150,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);
    glTranslatef(10,0,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

    glTranslatef(-30,-150,0);
	glRectf(-1.0, -3.0, 3.0, 3.0);

    glPopMatrix();



//Cloud
    glPushMatrix();

    glColor3f(0.9,0.9,0.9);
    glTranslatef(tcx,tcy,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+12*cos(angle),(tcy+10)+10*sin(angle));
	}

	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+20*cos(angle),tcy+2*sin(angle));
	}

    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy+10)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+10*cos(angle),(tcy+5)+5*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+14*cos(angle),(tcy-5)+11*sin(angle));
	}
    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+20)+15*cos(angle),(tcy+5)+11*sin(angle));
	}

	glEnd();

    glPopMatrix();

//cloud 2
    glPushMatrix();

    glColor3f(0.9,0.9,0.9);
    glTranslatef(tcx+100,tcy+-70,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+12*cos(angle),(tcy+10)+10*sin(angle));
	}

	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+20*cos(angle),tcy+2*sin(angle));
	}

    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy+10)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+10*cos(angle),(tcy+5)+5*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+14*cos(angle),(tcy-5)+11*sin(angle));
	}
    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+20)+15*cos(angle),(tcy+5)+11*sin(angle));
	}

	glEnd();

    glPopMatrix();

//cloud3
    glPushMatrix();

    glColor3f(0.9,0.9,0.9);
    glTranslatef(tcx-100,tcy+-50,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+12*cos(angle),(tcy+10)+10*sin(angle));
	}

	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+20*cos(angle),tcy+2*sin(angle));
	}

    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy+10)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+10*cos(angle),(tcy+5)+5*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+14*cos(angle),(tcy-5)+11*sin(angle));
	}
    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+20)+15*cos(angle),(tcy+5)+11*sin(angle));
	}

	glEnd();

    glPopMatrix();

//cloud4->1
    glPushMatrix();

    glColor3f(0.9,0.9,0.9);
    glTranslatef(tcx+310,tcy+5,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+12*cos(angle),(tcy+10)+10*sin(angle));
	}

	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+20*cos(angle),tcy+2*sin(angle));
	}

    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy+10)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+10*cos(angle),(tcy+5)+5*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+14*cos(angle),(tcy-5)+11*sin(angle));
	}
    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+20)+15*cos(angle),(tcy+5)+11*sin(angle));
	}

	glEnd();

    glPopMatrix();

//cloud5<-1
    glPushMatrix();

    glColor3f(0.9,0.9,0.9);
    glTranslatef(tcx-300,tcy+5,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+12*cos(angle),(tcy+10)+10*sin(angle));
	}

	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+20*cos(angle),tcy+2*sin(angle));
	}

    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy+10)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+10*cos(angle),(tcy+5)+5*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+14*cos(angle),(tcy-5)+11*sin(angle));
	}
    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+20)+15*cos(angle),(tcy+5)+11*sin(angle));
	}

	glEnd();

    glPopMatrix();


//cloud6 ->2
    glPushMatrix();

    glColor3f(0.9,0.9,0.9);
    glTranslatef(tcx+370,tcy+-70,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+12*cos(angle),(tcy+10)+10*sin(angle));
	}

	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+20*cos(angle),tcy+2*sin(angle));
	}

    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy+10)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+10*cos(angle),(tcy+5)+5*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+14*cos(angle),(tcy-5)+11*sin(angle));
	}
    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+20)+15*cos(angle),(tcy+5)+11*sin(angle));
	}

	glEnd();

    glPopMatrix();


//cloud7 <-2
    glPushMatrix();

    glColor3f(0.9,0.9,0.9);
    glTranslatef(tcx-370,tcy+-70,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+12*cos(angle),(tcy+10)+10*sin(angle));
	}

	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+20*cos(angle),tcy+2*sin(angle));
	}

    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy+10)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+10*cos(angle),(tcy+5)+5*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+14*cos(angle),(tcy-5)+11*sin(angle));
	}
    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+20)+15*cos(angle),(tcy+5)+11*sin(angle));
	}

	glEnd();

    glPopMatrix();


//cloud8 -<3
    glPushMatrix();

    glColor3f(0.9,0.9,0.9);
    glTranslatef(tcx-490,tcy+-30,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+12*cos(angle),(tcy+10)+10*sin(angle));
	}

	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f(tcx+20*cos(angle),tcy+2*sin(angle));
	}

    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy+10)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+10*cos(angle),(tcy+5)+5*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-10)+10*cos(angle),(tcy-5)+8*sin(angle));
	}
	for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx-20)+14*cos(angle),(tcy-5)+11*sin(angle));
	}
    for(i=0;i<360;i++)
	{
	  angle=i*3.142/180;
	  glVertex2f((tcx+20)+15*cos(angle),(tcy+5)+11*sin(angle));
	}

	glEnd();

    glPopMatrix();

//plane

    glPushMatrix();

    glTranslatef(tpx,tpy,0);
	glColor3f(1,1,0.9);

	glBegin(GL_POLYGON);
    glVertex2d (0, 30);
    glVertex2d (20, 35);
    glVertex2d (-40, 38);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (-15, 20);
    glVertex2d (-5, 25);
    glVertex2d (-40, 38);
    glEnd();

	glColor3f(0.9,0.9,0.9);
    glBegin(GL_POLYGON);
    glVertex2d (0,20);
    glVertex2d (0,30);
    glVertex2d (-40, 38);
    glVertex2d (0, 28);
    glEnd();

    glPopMatrix();

    glPushMatrix();


    glTranslatef(tpx+480,tpy-20,0);
	glColor3f(1,1,0.9);

	glBegin(GL_POLYGON);
    glVertex2d (0, 30);
    glVertex2d (20, 35);
    glVertex2d (-40, 38);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d (-15, 20);
    glVertex2d (-5, 25);
    glVertex2d (-40, 38);
    glEnd();

	glColor3f(0.9,0.9,0.9);
    glBegin(GL_POLYGON);
    glVertex2d (0,20);
    glVertex2d (0,30);
    glVertex2d (-40, 38);
    glVertex2d (0, 28);
    glEnd();

    glPopMatrix();



	glFlush();
}



void goDisplay_left(void)
{
   tmx=tmx-0.01;
   tpx = tpx-0.03 ;
   tpy=tpy+0.001;
   tcx=tcx+0.02;

   glutPostRedisplay();
}



void init(void)
{
	glClearColor (0.2,0.7,0.9, 0.0);
	glOrtho(-200.0, 200.0, -200.0, 200.0, -200.0, 200.0);
}


void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:
				tx -=5;
				glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:
				tx +=5;
				glutPostRedisplay();
				break;



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
            glutIdleFunc(goDisplay_left);
         break;
      default:
         break;
   }
}


int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (800, 800);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("paper plane by 171-15-9171");
	init();

	glutDisplayFunc(display);
	glutSpecialFunc(spe_key);

	glutMouseFunc(my_mouse);
	glutMainLoop();
	return 0;
}

