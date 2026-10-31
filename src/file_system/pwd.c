#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void){
    char *directory = getcwd(NULL, 0);

    if (directory == NULL){
        return 1;
    }

    printf("%s\n", directory);

    free(directory);
    return 0;
}