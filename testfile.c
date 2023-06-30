# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# define MAX_STACK_SIZE 100
typedef int element;
typedef struct StackType{
    int size;
    int top;
    element *data;
}StackType;

void error (char * message){
    fprintf(stderr,"%s", message);
    exit(1);
}

void init_Stack(StackType * s){
    s->size = 0;
    s->top = -1;
}

int is_empty(StackType * s){
    return (s->top == -1);
}

int is_full(StackType * s){
    return (s->top == (MAX_STACK_SIZE)-1)
}

void push(StackType * s, element data){
    if(is_full()){
        s->size *= 2;
        s->data = (element *)realloc(s->data, s->size * sizeof(StackType));
    }
    s->data[++(s->top)];
}

element pop(StackType * s){
    if (is_empty(s)){
        error("Stack is empty !");
    }

    else{
        return (s->data[(s->top)--]);
    }
}

int main(){
    // funny joke
}