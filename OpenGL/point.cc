/*
 * =====================================================================================
 *
 *       Filename:  point.cc
 *
 *    Description:  basic concepts of OpenGL
 *
 *        Version:  1.0
 *        Created:  03/08/2014 02:00:44 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <GL/glut.h>

/*
 * glVertex2d
 * glVertex2dv
 * 数字表示参数的个数
 * 字母表示参数的类型：s表示16位整数(GLshort)
 *                     i表示32位整数(GLint和GLsizei)
 *                     f表示32位浮点数(GLfloat和GLclampf)
 *                     d表示64位浮点数(GLdouble和GLclampd)
 *                     v表示传递的几个参数将使用指针的形式
 * 这些函数除了参数的类型和个数不同以外，功能是相同的
 * 例如下面这些等价的代码
 * 1. glVertex2i(1, 3);
 * 2. glVertex2f(1.0f, 3.0f);
 * 3. glVertex3f(1.0f, 3.0f, 0.0f);
 * 4. glVertex4f(1.0f, 3.0f, 0.0f, 0.0f);
 * 5. GLfloat VertexArr3[] = {1.0f, 3.0f, 0.0f};
 *    glVertex3fv(VertexArr3);
 */

void myPoints(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    //glBegin(GL_POINTS);
    //glBegin(GL_LINES);
    //glBegin(GL_LINE_STRIP);
    //glBegin(GL_LINE_LOOP);
    glBegin(GL_TRIANGLES);
    //glBegin(GL_TRIANGLE_STRIP);
    //glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.9f, 0.4f);
    glVertex2f(0.5f, 0.8f);
    glVertex2f(0.8f, 0.3f);
    glVertex2f(0.3f, 0.2f);
    glVertex2f(0.4f, 0.5f);
    glVertex2f(0.7f, 0.9f);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(300, 300);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Points and Lines");
    glutDisplayFunc(&myPoints);
    glutMainLoop();
    return 0;
}
