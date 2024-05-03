#include"app.h"


bool gui_resize(APP *A){
    SDL_GetRendererOutputSize(A->renderer,&A->screenWidth,&A->screenHeight);
    //Size adjustments go here
    A->screen_rect.w=A->screenWidth;A->screen_rect.h=A->screenHeight;

    return true;
}
