#include "GL/glut.h"

void display(void) {
	glFlush();
	
	return;
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(1920, 1080);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	

	glutCreateWindow("The Darkroom Project");
	
	
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}
