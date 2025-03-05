#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int count_word = 0;
int count_letter = 0;
int countsen = 0;
int main(void)
{

    int a = 0;
    float b = 0;
    int c = 0;
    string text = get_string("text: ");
    a = count_letters(text);
    b = count_words(text);
    c = count_sentences(text);
    float L = a / b * 100;
    float S = c / b * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int realin = (int) round(index);
    if (realin <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (realin >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", realin);
    }
}
int count_letters(string text)
{
    int n = strlen(text);
    for (int i = 0; i < n; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            count_letter += 1;
        }
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            count_letter += 1;
        }
    }
    return count_letter;

}
int count_words(string text)
{
    int real_count_word = 0;
    int n = strlen(text);
    for (int i = 0; i < n + 1; i++)
    {
        if (text[i] == ' ')
        {
            count_word += 1;
        }
    }

    real_count_word = count_word + 1;
    return real_count_word;
}
int count_sentences(string text)
{
    int n = strlen(text);
    for (int i = 0; i < n; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            countsen += 1;
        }
    }
    return countsen;
}



