#include <stdlib.h>
#include <GL/glut.h>

void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
        glVertex2f(0.5f, 0.4f);
        glVertex2f(0.4f, 0.6f);
        glVertex2f(0.8f, 0.3f);
        glVertex2f(0.2f, 0.9f);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(300, 300);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Something is wrong");
    glutDisplayFunc(&myDisplay);
    glutMainLoop();
    return 0;
}
