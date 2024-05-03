#include"app.h"
void OnEvent(APP *A){
    switch(A->Event.type){
        case SDL_QUIT:
        {
            A->Running = false;
            break;
        }
        case SDL_WINDOWEVENT :
        {
            switch (A->Event.window.event){
            case SDL_WINDOWEVENT_RESIZED:
                gui_resize(A);
                break;
            case SDL_WINDOWEVENT_SIZE_CHANGED:
                gui_resize(A);
                break;
            }
        }
        case SDL_MOUSEBUTTONUP:
        {
            switch(A->Event.button.button)
            {
                case SDL_BUTTON_LEFT:{A->mouse.buttons[0]=true;SDL_GetMouseState(&A->mouse.x,&A->mouse.y);break;}
                case SDL_BUTTON_RIGHT:{A->mouse.buttons[1]=true;SDL_GetMouseState(&A->mouse.x,&A->mouse.y);break;}
            }
            break;
        }
        case SDL_MOUSEBUTTONDOWN:
        {
            switch(A->Event.button.button)
            {
                case SDL_BUTTON_LEFT:break;/*{A->mouse0=true;SDL_GetMouseState(&A->mouseX,&A->mouseY);break;}*/
                case SDL_BUTTON_RIGHT:break;/*{A->mouse1=true;SDL_GetMouseState(&A->mouseX,&A->mouseY);break;}*/
            }
            break;
        }
        case SDL_MOUSEMOTION:
        {
            SDL_GetMouseState(&A->mouse.x,&A->mouse.y);
            break;
        }
        case SDL_KEYUP:
        {
            switch(A->Event.key.keysym.sym)
            {
                /*case SDLK_ESCAPE:{
                    gamestate = MENU;
                    break;
                }*/
                case SDLK_F1:{
                    if(A->resizeable==true){
                        SDL_SetWindowFullscreen(A->window,SDL_WINDOW_SHOWN|SDL_WINDOW_FULLSCREEN_DESKTOP);
                        A->resizeable=false;
                        gui_resize(A);
                    }
                    else{
                        SDL_SetWindowFullscreen(A->window,SDL_WINDOW_SHOWN|SDL_WINDOW_RESIZABLE);
                        SDL_SetWindowResizable(A->window,SDL_TRUE);
                        SDL_SetWindowSize(A->window,1280,720);
                        gui_resize(A);
                        A->resizeable=true;
                    }
                    break;
                }
            break;
            }
            KBHsetstate(&A->kb_handler,A->Event.key.keysym.scancode,SDL_RELEASED);
            break;
        }
        case SDL_KEYDOWN:
        {
            KBHsetstate(&A->kb_handler,A->Event.key.keysym.scancode,SDL_PRESSED);
            break;
        }
		case SDL_TEXTINPUT:
        {
            break;
        }
        case SDL_TEXTEDITING:
        {
            break;
        }
    }/*End of Switch*/
}

