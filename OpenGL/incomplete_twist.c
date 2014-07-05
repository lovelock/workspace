#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>

float twist = 0.4;
void triangle(GLfloat *a, GLfloat *b, GLfloat *c, int type)
{
    GLfloat v[2];
    double d;
    glBegin(GL_POLYGON);
        switch(type)
        {
            case(2):
            case(4):
            case(6):
            case(7):
                glEdgeFlag(GL_FALSE);
                break;
            defualt:
                glEdgeFlag(GL_TRUE);
        }
        d = sqrt(pow(a[0], 2) + pow(a[1], 2));
        v[0] = a[0] * cos(twist * d) - a[1] * sin(twist * d);
        v[1] = a[0] * sin(twist * d) + a[1] * cos(twist * d);
        glVertex2fv(v);

        switch(type)
        {
            case(3):
            case(4):
            case(5):
            case(7):
                glEdgeFlag(GL_FALSE);
                break;
            default:
                glEdgeFlag(GL_TRUE);
        }
        d = sqrt(pow(b[0], 2) + pow(b[1], 2));
        v[0] = b[0] * cos(twist * d) - b[1] * sin(twist * d);
        v[1] = b[0] * sin(twist * d) + b[1] * cos(twist * d);
        glVertex2fv(v);

        switch(type)
        {
            case(1):
            case(5):
            case(6):
            case(7):
                glEdgeFlag(GL_FALSE);
                break;
            default:
                glEdgeFlag(GL_TRUE);
        }
        d = sqrt(pow(c[0], 2) + pow(c[1], 2));
        v[0] = c[0] * cos(twist * d) - c[1] * sin(twist * d);
        v[1] = c[0] * sin(twist * d) + c[1] * cos(twist * d);
        glVertex2fv(v);

    glEnd();
}



void OnDisplay()
{
    GLfloat* a = {0.4f, 0.3f};
    GLfloat* b = {0.5f, 0.6f};
    GLfloat* c = {0.8f, 0.8f};
    triangle(a, b, c, 3);
    glutSwapBuffers();
}

void Initialization()
{
    glClearColor(1.0, 0.5, 0.6, 1.0);
    glColor3f(1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1.0f, 1.0f, -1.0f, 1.0f);
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(400, 500);
    glutInitWindowPosition(300, 400);
    glutCreateWindow("Twisted");
    glutDisplayFunc(OnDisplay);
    Initialization();
    glutMainLoop();
    return 0;
}
