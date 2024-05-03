#include"app.h"

void OnRender(APP *A)
{
    SDL_RenderClear(A->renderer);
    switch(A->gamestate){
        case INIT:
        {
            break;
        }
        case LOADING:
        {
            break;
        }
        case INTRO:
        {
            break;
        }
        case MENU:
        {
            break;
        }
        case OPTIONS:
        {
            break;
        }
        case PLAY:
        {
            break;
        }
        case CREDITS:
        {
            break;
        }
        case EXIT:
        {
            break;
        }
    }
    SDL_RenderPresent(A->renderer);
}
