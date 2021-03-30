#ifndef INIT_H
#define INIT_H
    #include <GL/glut.h>
    #define DEFAULT_SCREEN_SIZE_X 600
    #define DEFAULT_SCREEN_SIZE_Y 600
    #define DEFAULT_SCREEN_COLLOR_R 0
    #define DEFAULT_SCREEN_COLLOR_G 0
    #define DEFAULT_SCREEN_COLLOR_B 0
    #define DEFAULT_SCREEN_COLLOR_A 1
    #define DEFAULT_CAMERA_POSITION_X 0
    #define DEFAULT_CAMERA_POSITION_Y 0
    #define DEFAULT_CAMERA_POSITION_Z -5

    struct screenCollor
    {
        int r;
        int g;
        int b;
        int a;
    };
    typedef struct windowConf{
        int width;
        int height;
        int posx;
        int posy;  
        struct screenCollor collor;      
    }windowConf;

    typedef struct viewPosition{
        GLdouble eyex;          //Camera position X
        GLdouble eyey;          //Camera position Y
        GLdouble eyez;          //Camera position Z
        GLdouble centerx;       //Camera center   X (for look at)
        GLdouble centery;       //Camera center   Y (for look at)
        GLdouble centerz;       //Camera center   Z (for look at)
        GLdouble topx;          //camera top      X (for look at)
        GLdouble topy;          //camera top      Y (for look at)
        GLdouble topz;          //camera top      Z (for look at)
        GLdouble clippingLeft;  //for frustum
        GLdouble clippingRight; //for frustum
        GLdouble clippingBottom;//for frustum
        GLdouble clippingTop;   //for frustum
        GLdouble near;          //near depth        (frustum near depth)
        GLdouble far;           //far depth         (frustum far depth)
        
    }viewPosition;

    
    void initProgram(windowConf* window,viewPosition* view);
#endif