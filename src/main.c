#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include "init.h"
void display();
int main(int argc,char** argv){
	glutInit(&argc,argv);
	initProgram();
	glutCreateWindow(argv[0]);
	glutDisplayFunc(display);
	glutMainLoop();
}

void display(){

}