#include <stdio.h>

int main(int argc, char *argv[]) {
    char *file;
    
    if (argc > 1) {
        file = argv[1];
    }

    if (file == NULL){
        return 1;
    }
    else {
        if (!(remove(file) == 0)) {
            return 1;
        }
    }

    return 0;
}