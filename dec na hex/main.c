/*
* Maciej P³oñski
* Temat : Konwersja liczby z systemu szesnastkowego na dziesietny
*/
#include <stdio.h>
#include <string.h>


int hex(char letter) {
    if (letter >= '0' && letter <= '9')
        return letter - '0';
    else if (letter >= 'A' && letter <= 'F')
        return 10 + (letter - 'A');
    else if (letter >= 'a' && letter <= 'f')
        return 10 + (letter - 'a');
    return 0;
}


int hexDec(char hexArr[]) {
    int lenArr = strlen(hexArr);
    int x = 1;
    int dec_value = 0;
    for (int i = lenArr - 1; i >= 0; i--) {
        dec_value += hex(hexArr[i]) * x;
        x *= 16;
    }
    return dec_value;
}

int main() {
    char hexArr[100];
    printf("Podaj liczbe w systemie szesnastkowym \(hex)\ : ");
    scanf("%s", hexArr);

    int decimalValue = hexDec(hexArr);
    printf("Wartosc dziesietna podanej liczby wynosi: %d\n", decimalValue);
    return 0;
}
