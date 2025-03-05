#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
bool allofalph(x);

int main(int argc, string argv[])
{
    string neworder=argv[1];
    if(argc=2 && allofalph(neworder) && strlen(neworder)=26 )
    {
        for (int a;a<26;a++)
        {
            'A' + a=neworder[a];
            'a' + a =neworder[a]+32;
        }



    }


}
bool allofalph(x)
{
    for (int i;i<strlen(x);i++)
    {
        if(isalpha(x[i]))
        {

        }
        else
        {
            return 0;
        }
    }
}