#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char *end;
    
    if (argc > 1){
        if (argv[1] != 0){
            return strtol(argv[1], &end, 10);
        }
    }
    
    else {
        return 1;
    }
}