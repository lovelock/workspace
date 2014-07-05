#include <stdio.h>
#include <GL/glut.h>

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 480);
	glutInitWindowPosition(200, 300);
	glutCreateWindow("OpenGL Version");
	const GLubyte* name = glGetString(GL_VENDOR);
	const GLubyte* declare = glGetString(GL_RENDERER);
	const GLubyte* OpenGLVersion = glGetString(GL_VERSION);
	const GLubyte* gluVersion = gluGetString(GLU_VERSION);
	printf("Vender:%s\n", name);
	printf("Renderer:%s\n", declare);
	printf("Version:%s\n", OpenGLVersion);
	printf("GLU_version:%s\n", gluVersion);
	return 0;
}
