/*
 * =====================================================================================
 *
 *       Filename:  square.cc
 *
 *    Description:  square
 *
 *        Version:  1.0
 *        Created:  03/08/2014 01:34:07 AM
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

void myDisplay(void)
{
    /* 
     * 清除，这里是清除颜色
     * */
    glClear(GL_COLOR_BUFFER_BIT);
    /* 
     * 画一个矩形，四个参数分别位于对角线上的两个点的横纵坐标
     * */
    glRectf(-0.3f, -0.3f,0.8f, 0.8f);
    /* 
     * 保证前面的OpenGL命令立即执行（而不是让它们在缓冲区等待）
     * */
    glFlush();
}

int main(int argc, char* argv[])
{
    /*
     * 对GLUT进行初始化，这个函数必须在其他的GLUT函数调用之前调用一次。
     */
    glutInit(&argc, argv);
    /*
     * glutInitDisplayMode，设置显示方式，GLUT_RGB表示使用RGB颜色，与之对应的是GLUT_INDEX（表示使用索引颜色）。GLUT_SINGLE表示使用单缓冲，与之对应的是GLUT_DOUBLE（使用双缓冲）。
     */
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    /* 
     * 设置窗口在屏幕中的位置
     */
    glutInitWindowPosition(800, 900);
    /* 
     * 设置窗口大小
     */
    glutInitWindowSize(500, 300);
    /*
     * 根据前面设置的信息创建窗口，参数将被作为窗口的标题，但窗口被创建后并不会立即显示在屏幕上，需要调用glutMainLoop()函数会才会显示。
     */
    glutCreateWindow("First OpenGL Program");
    /*
     * 设置一个函数，当需要进行画图时，这个函数就会被调用
     */
    glutDisplayFunc(&myDisplay);
    /* 
     *进行一个消息循环
     */
    glutMainLoop();
    return 0;
}
