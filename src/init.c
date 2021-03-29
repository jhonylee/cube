#include <GL/glut.h>
#include "init.h"
void initProgram(){
    windowConf window;
    window.width = DEFAULT_SCREEN_SIZE_X;
    window.height = DEFAULT_SCREEN_SIZE_Y;
    window.posx = (glutGet(GLUT_SCREEN_WIDTH)-window.width)/2;
    window.posy = (glutGet(GLUT_SCREEN_HEIGHT)-window.height)/2;
    window.collor.r = DEFAULT_SCREEN_COLLOR_R;
    window.collor.g = DEFAULT_SCREEN_COLLOR_G;
    window.collor.b = DEFAULT_SCREEN_COLLOR_B;
    window.collor.a = DEFAULT_SCREEN_COLLOR_A;
	glutInitWindowSize(window.width,window.height);
	glutInitWindowPosition(window.posx,window.posy);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	
	glClearColor(   window.collor.r,
                    window.collor.b,
                    window.collor.b,
                    window.collor.a);
	
}