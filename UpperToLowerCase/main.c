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
    printf("Bir seçim yapýnýz :\n");
    printf("1 - büyük harften küçük harfe çevir\n");
    printf("2 - küçük harften büyük harfe çevir\n");
    scanf("%d", &choice);
    getchar();

    switch(choice){
        case 1:
             printf("büyük harflerden oluþan bir cümle gir :\n");
             gets(message);
             upperToLower(message);
             break;
        case 2:
             printf("küçük harflerden oluþan bir cümle gir :\n");
             gets(message);
             lowerToUpper(message);
             break;
        default:
            printf("yanlýþ seçim!!");
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
