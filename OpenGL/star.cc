#include <stdlib.h>
#include <cmath>
#include <GL/glut.h>

using namespace std;

const int n = 90;
const GLfloat Pi = 3.1415926536f;


//void myDisplay(void)
//{
    //glClear(GL_COLOR_BUFFER_BIT);
    //GLfloat bx = sin(72*Pi/180);
    //GLfloat by = cos(72*Pi/180);
    //GLfloat cx = sin(36*Pi/180);
    //GLfloat cy = cos(36*Pi/180);

    //glBegin(GL_POLYGON);
    //glVertex2f(0.0f, 1.0f);
    //glVertex2f(bx, by);
    //glVertex2f(cx, -cy);
    //glVertex2f(-cx, -cy);
    //glVertex2f(-bx, by);
    //glEnd();
    //glFlush();
//}

const GLfloat factor = 0.1f;
void myDisplay(void)
{
    GLfloat x;
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
        glVertex2f(-1.0f, 0.0f);
        glVertex2f(1.0f, 0.0f);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(0.0f, 1.0f);
    glEnd();
    glBegin(GL_LINE_STRIP);
    for(x=-1.0f/factor;x<1.0f/factor;x+-0.01f)
    {
        glVertex2f(x*factor, sin(x)*factor);
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
    glutCreateWindow("Star");
    glutDisplayFunc(&myDisplay);
    glutMainLoop();
    return 0;
}
