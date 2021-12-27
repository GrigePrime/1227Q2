#include <stdio.h>
#include <string.h>

int main()
{
    char input1[256];
    char pass[256];
    int output[256];
    int i = 0, l = 0;
    int flag = 0;

    scanf("%[^\n]",input1);
    scanf(" %[^\n]",pass);

    for (int i = 0; strlen(input1) > i; i++)
    {
        output[i] = input1[i] ^ pass[i % strlen(pass)];
    }
    for (int l = 0; strlen(input1) > l; l++)
    {
        printf("%03d", output[l]);
    }
    printf("-01");
}
