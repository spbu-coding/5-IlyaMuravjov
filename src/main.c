#include <stdio.h>
#include <stdlib.h>

void other() {
    printf("`other` function has been called\n");
    exit(0);
}

void input() {
    char buffer[8];
    scanf("%s", buffer);
    printf("Input: %s\n", buffer);
}

int main() {
    input();
    printf("`input` function has returned to `main`\n");
    return 0;
}
