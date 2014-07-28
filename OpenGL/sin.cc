/*
 * =====================================================================================
 *
 *       Filename:  sin.cc
 *
 *    Description:  sin curve
 *
 *        Version:  1.0
 *        Created:  03/21/2014 07:27:51 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>

const GLfloat factor = 0.1f;
void myDisplay(void)
{
    GLfloat x;
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
        glVertex2f(-1.0f, 0.0f);
        glVertex2f(1.0f, 0.0f);
        glVertex2f(0.0f, -1.0f);
        glVertex2f(0.0f, 1.0f);
    glEnd();
    glBegin(GL_LINE_STRIP);
    for(x=-1.0f/factor;x<1.0/factor;x+=0.01f)
    {
        glVertex2f(x*factor,sin(x)*factor);
    }
    glEnd();
    glFlush();
}


int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(400, 400);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Sin Curve");
    glutDisplayFunc(&myDisplay);
    glutMainLoop();
    return 0;
}
