#include <stdlib.h>
#include <GL/glut.h>

void Drawing();
void Initialization();
void OnDisplay();
void OnReshape(int, int);


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(640, 800);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("屌炸天");
    glutDisplayFunc(OnDisplay);
    glutReshapeFunc(OnReshape);

    Initialization();

    glutMainLoop();
    return 0;
}

void Drawing()
{
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
        glVertex2i(-80, 100);
        glVertex2i(-130, 10);
        glVertex2i(-30, 10);
        glVertex2i(-80, -100);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2i(-30, 10);
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2i(-130, -10);
    glEnd();

    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_TRIANGLE_STRIP);
        glVertex2i(10, 80);
        glVertex2i(0, 50);
        glVertex2i(110, 70);
        glVertex2i(30, 30);
        glVertex2i(10, 10);
    glEnd();

    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2i(0, -50);
        glVertex2i(110, -10);
        glVertex2i(100, -30);
        glVertex2i(110, -70);
        glVertex2i(80, -90);
    glEnd();
}


void Initialization()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
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

    if (w<=h)
    {
        winWidth = 150;
        winHeight = 150 * aspectRatio;
    }
    else
    {
        winHeight = 150;
        winWidth = 150 * aspectRatio;
    }
    gluOrtho2D(-winWidth, winHeight, -winHeight, winWidth);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
