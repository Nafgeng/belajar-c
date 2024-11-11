#include <stdio.h>

void say_hello(char name[]){
    printf("Hello %s!\n", name);
}

void main(){
    say_hello("Nepi");
    say_hello("Exp");
    say_hello("Jago");
}