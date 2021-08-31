#include <stdio.h>
#include <string.h>
int main()
{
    char string[256], reversed[256];
    int length = 0;
    printf("Enter a string to reverse: ");
    fgets(string, 257, stdin);
    length = strlen(string);
    for(int i = 0; i < length-1; i++){
        reversed[i] = string[length-2-i];
    }
    reversed[length-1] = '\0';
    printf("Reversed string: %s\n", reversed);
    return 0;
}