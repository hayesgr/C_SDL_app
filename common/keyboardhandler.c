#include"keyboardhandler.h"
bool KBHinit(KBH *K){
    for(int c=0;c<255;c++){
        K->keystate[c]=0;
        K->clicked[c]=0;
    }
    return true;
}
void KBHsetstate(KBH *K,SDL_Scancode key, bool state){
    K->keystate[key]=state;
    K->clicked[key] = state==false?true:false;
}
bool KBHisPressed(KBH *K,SDL_Scancode key){
    return K->keystate[key];
}
bool KBHwasClicked(KBH *K,SDL_Scancode key){
    return K->clicked[key];
}
void KBHresetClicked(KBH *K,SDL_Scancode key){
    K->clicked[key]=false;
}
