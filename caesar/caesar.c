#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int allofdigit(string at);
int convertinteger(char sty);
char reversealph(int new);
char reversealph1(int new);
int convertinteger1(char sty);

int main(int argc, string argv[])
{
    int key = 0;
    string ayyt = argv[1];
    if (argc == 2 && allofdigit(ayyt))
    {
        key = atoi(ayyt);
        string text = get_string("Plaintext: ");
        printf("Ciphertext: ");
        for (int p = 0; p < strlen(text); p++)
        {
            if (isalpha(text[p]))
            {
                if (isupper(text[p]))
                {
                    int newversion = (convertinteger(text[p]) + key) % 26;
                    char newalpha = reversealph(newversion);
                    printf("%c", newalpha);
                }
                else
                {
                    int newversion = (convertinteger1(text[p])+ key) % 26;
                    char newalpha = reversealph1(newversion);
                    printf("%c", newalpha);
                }

            }
            else
            {
                printf("%c", text[p]);
            }
        }
        printf("\n");
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;

    }
}


int allofdigit(string at)
{
    for (int i = 0; i < strlen(at); i++)
    {
        if (isdigit(at[i]))
        {
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int convertinteger(char sty)
{
    sty = sty - 65;
    return sty;
}
int convertinteger1(char sty)
{
    sty = sty - 97;
    return sty;
}

char reversealph(int new)
{
    char newalpha = 'A' + new;
    return newalpha;
}
char reversealph1(int new)
{
    char newalpha = 'a' + new;
    return newalpha;
}




