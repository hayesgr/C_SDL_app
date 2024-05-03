#include"app.h"

bool OnInit(APP *A){
    A->gamestate = INIT;
    KBHinit(&A->kb_handler);

    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        return false;
    }
    SDL_DisplayMode dm;
    SDL_GetDesktopDisplayMode(0,&dm);
    A->screen_rect.w = A->screenWidth = dm.w;
    A->screen_rect.h = A->screenHeight = dm.h;
    A->screen_rect.x = 0;
    A->screen_rect.y = 0;
    char title[] = "C_SDL2_Test";
    /*Creates a SDL Window ///SDL_WINDOW_RESIZABLE | SDL_RENDERER_PRESENTVSYNC*/
    if((A->window = SDL_CreateWindow(title, 100, 100, A->screenWidth, A->screenHeight,SDL_WINDOW_SHOWN|SDL_WINDOW_FULLSCREEN_DESKTOP)) == NULL) {
        return false;
    }
    /* SDL Renderer */
    A->renderer = SDL_CreateRenderer(A->window, -1, SDL_RENDERER_ACCELERATED );
    if (A->renderer == NULL){
        printf("%s\n",SDL_GetError());
        return 1;
    }

    A->resizeable=false;
    return true;
}
