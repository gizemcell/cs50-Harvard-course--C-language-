#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;
void print_bulb(int bit);
int convert_asci(string message,int i);

int main(void)
{
    string message = get_string("Message: ");
    int n = strlen(message);
    for (int i = 0; i < n; i++)
    {
        int reverse[] = {5, 5, 5, 5, 5, 5, 5, 5};
        int giz = 0;
        int bssage = convert_asci(message,i);
        while (giz < 8)
        {
            if (bssage % 2 == 1)
            {
                reverse[giz] = 1;
            }
            else
            {
                reverse[giz] = 0;
            }
            bssage = bssage / 2;
            giz += 1;
        }
        for (int w = 7; w >= 0; w--)
        {
            print_bulb(reverse[w]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        printf("\U0001F7E1");
    }
}
int convert_asci(string message, int i)
{
    return (int) message[i];
}