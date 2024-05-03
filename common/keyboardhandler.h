#ifndef KWYBOARDHANDLER_H_INCLUDED
#define KWYBOARDHANDLER_H_INCLUDED
#include<SDL.h>
#include <stdbool.h>
typedef struct keyboardhandler{
    bool keystate[256];
    bool clicked[256];
}KBH;
bool KBHinit(KBH *K);
void KBHsetstate(KBH *K,SDL_Scancode key, bool state);
bool KBHisPressed(KBH *K,SDL_Scancode key);
bool KBHwasClicked(KBH *K,SDL_Scancode key);
void KBHresetClicked(KBH *K,SDL_Scancode key);

#endif // KWYBOARDHANDLER_H_INCLUDED
