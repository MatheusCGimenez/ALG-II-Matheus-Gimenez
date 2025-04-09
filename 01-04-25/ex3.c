#include <stdio.h>

char text(char text[]) {
    printf("%s", text);

    return "o";
}

int main() {
    text("alguma coisa");

    return 0;
}