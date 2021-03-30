#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include "init.h"
void display();
int main(int argc,char** argv){
	windowConf window;
	viewPosition viewCamera;
	glutInit(&argc,argv);
	initProgram(	&window,
					&viewCamera);
	glutCreateWindow(argv[0]);
	glutDisplayFunc(display);
	glutMainLoop();
}

void display(){

}