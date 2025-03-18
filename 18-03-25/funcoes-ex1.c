#include <stdio.h>


int func1(int value) {
    if (value % 2 ==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    printf("%d", func1(1));

    return 0;
}