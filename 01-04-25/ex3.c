#include <stdio.h>

char text(char text[]) {
    printf("%s", text);

    return "o";
}

int main() {
    text("Alguma coisa!");
    return 0;
}