#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
const int BLOCK_SIZE = 512;

int main(int argc, char *argv[])
{
    //correct usage
    if ()
    //check only one argument accept
    if (argc!=2)
    {
        printf("only one argument ");
        return 2 ;
    }
    FILE *f = fopen(argv[1],"r");
    if (f==NULL)
    {
        printf("cannot open ");
        return 1;
    }

    typedef uint8_t BYTE;
    BYTE buffer[512];
    int i = 0;
    bool check=false;
    char *filename;
    FILE *img;
    while(fread(buffer, 1, BLOCK_SIZE, f) == BLOCK_SIZE)
    {
            if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && ((buffer[3] & 0xf0) == 0xe0))
            {
                if (check == false)
                {
                    i++;
                    sprintf(filename,"½03i.jpg", i);
                    img = fopen(filename,"w");
                    fwrite(&buffer, 1, BLOCK_SIZE, img);
                    check = true;
                }
                else
                {
                    fclose(img);
                    i++;
                    sprintf(filename,"½03i.jpg", i);
                    img = fopen(filename,"w");
                    fwrite(&buffer, 1, BLOCK_SIZE, img);
                }
            }
            else
            {
                if (check == true)
                {
                    //there is a old file then continue write
                    fwrite(&buffer, 1, BLOCK_SIZE, img);

                }
                else
                {
                    continue;
                }

            }


    }























}