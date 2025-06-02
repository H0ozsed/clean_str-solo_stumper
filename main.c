#include <stdio.h>
#include <unistd.h>
#include<string.h>

int my_strlen(char *sent)
{
    int count = 0;

    for (int i = 0; sent[i] != '\0'; i++) {
        count++;
    }
    return count;
}
int main(int ac, char **av)
{
    int start = 0;
    int end = my_strlen(av[1]) - 1;

    if (ac != 2) {
        write(2, "not enough", 11);
        return 84;
    }
    while (av[1][start] == ' ' && av[1][start] != '\0') {
        start++;
    }
    while (av[1][end] == ' ' && end >= start) {
        end--;
    }
    for (int i = start; i <= end; i++)
        write(1, &av[1][i], 1); 
    return 0;
}



















