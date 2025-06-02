#include <stdio.h>

int main() {
    int n;
    do {
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    
    int jumps[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &jumps[i]);
    }
    
    int min_jumps[100];
    for (int i = 0; i < n; i++) {
        min_jumps[i] = -1;
    }
    
    min_jumps[0] = 0;
    
    for (int i = 0; i < n; i++) {
        if (min_jumps[i] != -1) {
            for (int j = 1; j <= jumps[i] && i + j < n; j++) {
                if (min_jumps[i + j] == -1 || min_jumps[i + j] > min_jumps[i] + 1) {
                    min_jumps[i + j] = min_jumps[i] + 1;
                }
            }
        }
    }
    
    printf("%d \n", min_jumps[n - 1]);
    
    return 0;
}