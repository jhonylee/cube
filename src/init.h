#ifndef INIT_H
#define INIT_H
    #define DEFAULT_SCREEN_SIZE_X 600
    #define DEFAULT_SCREEN_SIZE_Y 600
    #define DEFAULT_SCREEN_COLLOR_R 0
    #define DEFAULT_SCREEN_COLLOR_G 0
    #define DEFAULT_SCREEN_COLLOR_B 0
    #define DEFAULT_SCREEN_COLLOR_A 1
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

    
    void initProgram();
#endif