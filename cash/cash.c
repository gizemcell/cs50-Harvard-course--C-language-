#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int pennies=0;
    int quarters=0;
    int dimes=0;
    int nickels=0;
    int cents;
    do
    {
        cents=get_cents();
    }
    while (cents < 1);
    if (cents>=25)
    {
        quarters = calculate_quarters(cents);
        cents = cents - quarters * 25;
    }
    if(cents<25)
    {
        dimes = calculate_dimes(cents);
        cents = cents - dimes * 10;
    }
    if (cents<10)
    {
        nickels = calculate_nickels(cents);
        cents = cents - nickels * 5;
    }
    if (cents<5)
    {
        pennies = calculate_pennies(cents);
        cents = cents - pennies * 1;
    }

    int coins = quarters + dimes + nickels +  pennies;
    printf("%i\n", coins);
}

int get_cents(void)
{
    int a = get_int("change owed: ");
    if (a<0)
    {
        printf("foo\n");
    }
    return a;
}
int calculate_quarters(int cents)
{
    cents =cents/25;
    return cents ;
}
int calculate_dimes(int cents)
{
    cents =cents/10;
    return cents;
}

int calculate_nickels(int cents)
{
    cents =cents/5;
    return cents;
}

int calculate_pennies(int cents)
{
    cents =cents/1;
    return cents;
}
