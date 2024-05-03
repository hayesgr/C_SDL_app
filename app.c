#include"app.h"

int OnExecute(APP *A){

    if(OnInit(A)==false){
        return -1;
    }
    if(LoadContent(A)==false){
        return -1;
    }
    while(A->Running){
        while(SDL_PollEvent(&A->Event)) {
            OnEvent(A);
        }

        OnLoop(A);
        OnRender(A);
    }
    Cleanup(A);
    return 0;
}



int main(){
    APP A;
    A.window = NULL;
    A.Running = true;

    return OnExecute(&A);
}
