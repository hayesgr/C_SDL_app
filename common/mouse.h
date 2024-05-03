#ifndef MOUSE_H
#define MOUSE_H
typedef struct mouse_struct{
    bool buttons[5];
    int x,y;
    int old_X,old_Y;
}MOUSE_STRUCT;
#endif // MOUSE_H
