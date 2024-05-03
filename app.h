#ifndef APP_H
#define APP_H
#include"includes.h"
typedef enum {INIT,LOADING,INTRO,MENU,OPTIONS,PLAY,CREDITS,EXIT}GAMESTATE;

typedef struct app{
    bool Running;//=false;
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Event Event;
    bool resizeable;
    SDL_Rect screen_rect;

    GAMESTATE gamestate;

    int screenWidth, screenHeight;
    int gameWidth, gameHeight;

    /* Mouse controls*/
	MOUSE_STRUCT mouse;
	/* Keyboardhandler */
	KBH kb_handler;

}APP;
bool gui_resize(APP *A);
bool OnInit(APP *A);
bool LoadContent(APP *A);
void OnLoop(APP *A);
void OnRender(APP *A);
void Cleanup(APP *A);
void OnEvent(APP *A);
int OnExecute(APP *A);




#endif /* APP_H */
