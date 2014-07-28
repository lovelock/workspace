#include <math.h>
#include "EXAM.h"

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(200, 300);
    glutCreateWindow("sdkdj");
    glutDisplayFunc(OnDisplay);
    glutReshapeFunc(OnReshape);

    Initialization();

    glutMainLoop();
    return 0;
}

void Drawing()
{
    GLfloat x, y, z = -50.f, inc = 0, angle;
    glPushMatrix();
    glRotatef(-45.0f, 1.0f, 0.0f, 0.0f);
    glRotatef(15.0f, 0.0f, 1.0f, 0.0f);

    glColor3f(1.0, 0.0f, 0.0f);
    glBegin(GL_POINTS);
        for (angle = 0.0f; angle <= 2.0f * 3.1415926f * 3.0f; angle+=0.1f)
        {
            x = inc * sin(angle);
            y = inc * cos(angle);
            glVertex3f(x, y, z);
            z += 0.5f;
            inc += 0.3f;
        }
    glEnd();

    glPopMatrix();

    glutSwapBuffers();
}

void Initialization()
{
    glClearColor(1.0f, 0.0f, 0.0f, 0.0f);
}

void OnDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    Drawing();
    glutSwapBuffers();
}

void OnReshape(int w, int h)
{
    GLfloat aspect = (GLfloat)w / (GLfloat)h;
    GLfloat nRange = 100.0f;

    glViewport(0, 0, w, h);

    glMatrixMode(GL_PROJECTION);
    //glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    if (w <= h)
    {
        glOrtho(-nRange, nRange, -nRange/aspect, nRange/aspect, -nRange, nRange);
    }
    else
    {
        glOrtho(-nRange, nRange, -nRange*aspect, nRange*aspect, -nRange, nRange);
    }

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
