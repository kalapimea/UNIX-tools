#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char *end;
    
    if (argc > 1){
        long value = strtol(argv[1], &end, 10);
        
        if (value != 0){
            return (int)value;
        }
        else {
            return 1;
        }
    }
    
    else {
        return 1;
    }
}