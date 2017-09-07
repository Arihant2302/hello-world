#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string n = get_string("Enter Name: ");
    for (int i = 0; i < 3; i++)
    {
        printf("Hello, %i\n", n);
    }
}