#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main(int argc, char *argv[]){

    int *p =malloc(sizeof(int));
    assert(p != NULL);
    printf("(%d) address pointed to by p: %p\n", getpid(), p);
    *p =0;
    while(1){
        //call loop to make the machine wait for a few seconds
        for(int i=0;i<10000;i++){

        }

        *p=*p+1;
        printf("(%d) p: %d\n", getpid(), *p);
    }
    return 0;
}
