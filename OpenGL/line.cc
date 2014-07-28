#include <stdlib.h>
#include <GL/glut.h>

void Drawing()
{
    glColor3f(1.0f, 0.0f, 0.0f);
    glEnable(GL_LINE_STIPPLE);
    glLineStipple(4, 0xAAAA);
    glBegin(GL_LINE_STRIP);
        glVertex2i(-80, 50);
        glVertex2i(-20, 20);
        glVertex2i(-30, -30);
        glVertex2i(-70, -50);
    glEnd();
    glDisable(GL_LINE_STIPPLE);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
        glVertex2i(80, 50);
        glVertex2i(20, 20);
        glVertex2i(30, -30);
        glVertex2i(70, -50);
    glEnd();
}


void Initialization()
{
    glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
}

void OnDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    Drawing();
    glutSwapBuffers();
}


void OnReshape(int w, int h)
{
    GLfloat aspectRatio = (GLfloat)w /(GLfloat)h;
    GLfloat winWidth, winHeight;
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    if(w<=h)
    {
        winWidth = 100;
        winHeight = 100 * aspectRatio;
    }
    else
    {
        winWidth = 100 * aspectRatio;
        winHeight = 100;
    }
    gluOrtho2D(-winHeight, winHeight, -winWidth, winWidth);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(640, 800);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Exsm202");
    glutDisplayFunc(OnDisplay);
    glutReshapeFunc(OnReshape);

    Initialization();

    glutMainLoop();
    return 0;
}
