#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char color[10];
    char noun[15];
    char name[10];

    printf("Enter a color: ");
    fgets(color, sizeof(color), stdin);
    color[strcspn(color, "\n")] = '\0';

    printf("Enter a noun: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strcspn(noun, "\n")] = '\0';

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("\nRoses are %s\n", color);
    printf("%s are blue\n", noun);
    printf("I love %s\n", name);
    
    printf("\nPress ENTER to exit the program!");
    getchar();

    return 0;
}