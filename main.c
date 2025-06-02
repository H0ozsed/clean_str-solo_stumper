#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int count = 0;
    int idx = 0;

    if (ac != 2) {
        write(2, "not enought", 11);
    }
    while (av[1][idx] == ' ') {
        count++;
        idx++;
    }
    printf("%d\n", count);
    return 0;
}


















