#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE* fptr;
    char data[50];
    
    if (argc > 1) {
        fptr = fopen(argv[1], "r");
    }
    else {
        return 1;
    }

    if (fptr == NULL) {
        return 1;
    }

    while (fgets(data, 50, fptr) != NULL) {
        printf("%s", data);
    }
    fclose(fptr);

    return 0;
}
