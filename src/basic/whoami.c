#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

int main(void){
    uid_t uid = geteuid();

    struct passwd *pw = getpwuid(uid);

    if (pw == NULL){
        perror("Failed to find user data");
        return 1;
    }

    printf("%s\n", pw->pw_name);
}