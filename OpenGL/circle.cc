#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>

const int n = 90;
const GLfloat R = 0.5f;
const GLfloat Pi = 3.1415926536f;

void myDisplay(void)
{
    int i;
    glClear(GL_COLOR_BUFFER_BIT);
    //glBegin(GL_POLYGON);
    //glBegin(GL_LINE_STRIP);
    glBegin(GL_TRIANGLE_FAN);
    for (i=0;i<n;++i)
        glVertex2f(R*cos(2*Pi/n*i), R*sin(2*Pi/n*i));
    glEnd();
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(300, 300);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Draw a circle");
    glRasterPos2f(0.4f, 0.5f);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'a');
    glutDisplayFunc(&myDisplay);
    glutMainLoop();
    return 0;
}
