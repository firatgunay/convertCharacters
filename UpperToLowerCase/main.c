#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void upperToLower(char* );
void lowerToUpper(char *);

int main()
{
    setlocale(LC_ALL, "Turkish");
    char message[100];
    int choice;
    printf("Bir se�im yap�n�z :\n");
    printf("1 - b�y�k harften k���k harfe �evir\n");
    printf("2 - k���k harften b�y�k harfe �evir\n");
    scanf("%d", &choice);
    getchar();

    switch(choice){
        case 1:
             printf("b�y�k harflerden olu�an bir c�mle gir :\n");
             gets(message);
             upperToLower(message);
             break;
        case 2:
             printf("k���k harflerden olu�an bir c�mle gir :\n");
             gets(message);
             lowerToUpper(message);
             break;
        default:
            printf("yanl�� se�im!!");
            break;
    }

    return 0;
}
void upperToLower(char* str){
    for(; *str != '\0'; str++){
        if(*str >= 'A' && *str <= 'Z'){
            putchar(*str + 32); // ASCII
        }
        else{
            putchar(*str);
        }
    }
}
void lowerToUpper(char* str){
    for(; *str != '\0'; str++){
        if(*str >= 'a' && *str <= 'z'){
            putchar(*str - 32); // ASCII
        }
        else{
            putchar(*str);
        }
    }
}
