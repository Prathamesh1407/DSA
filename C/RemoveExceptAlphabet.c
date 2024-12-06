#include <stdio.h>
#include <string.h>

int main()
{
    char line[150];
    printf("Enter a string: ");
    fgets(line, sizeof(line), stdin);
}