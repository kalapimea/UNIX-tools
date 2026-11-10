#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fptr;
    
    if (!(argc > 1)){
        return 1;
    }

    else {
        fptr = fopen(argv[1], "w");

        if (fptr == NULL) {
            return 1;
        }
    }
    return 0;
}