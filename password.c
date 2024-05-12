#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool valid(const char *password);

int main(void)
{
    char password[100];
    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';

    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number, and symbol.\n");
    }
}

bool valid(const char *password) 
{
    bool upl = false, lowl = false, num = false, sym = false, valid = false;

    for (int i = 0; password[i] != '\0'; i++) 
    {
        if (isupper(password[i]))
        {
            upl = true;
        }

        if (islower(password[i]))
        {
            lowl = true;
        }

        if (isdigit(password[i]))
        {
            num = true;
        }

        if (!isupper(password[i]) && !islower(password[i]) && !isdigit(password[i]) && !isspace(password[i]))
        {
            sym = true;
        }
    }

    if (upl && lowl && num && sym)
    {
        valid = true;
    }

    return valid;
}