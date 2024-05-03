#include"app.h"


void Cleanup(APP *A){
    SDL_DestroyRenderer(A->renderer);
    SDL_DestroyWindow(A->window);
    SDL_Quit();
}
