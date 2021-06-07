/****************************************************************************
	Переводчик русской кодировки для дисплеев типа 1602
	Михаил Белкин <dltech174@gmail.com> 2012

*****************************************************************************/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <wchar.h>
#include <locale.h>

int main()
{

    int i = 0;
    wchar_t str[1000];
    uint8_t outstr[100];

    setlocale(LC_ALL, "");

    wscanf(L"%ls", str);

    while ( str[i] != L'\0' )
    {
        switch (str[i])
        {
            case L'а':
                outstr[i] = 0x61;
                break;
            case L'б':
                outstr[i] = 0xb2;
                break;
            case L'в':
                outstr[i] = 0xb3;
                break;
            case L'г':
                outstr[i] = 0xb4;
                break;
            case L'д':
                outstr[i] = 0xe3;
                break;
            case L'е':
                outstr[i] = 0x65;
                break;
            case L'ё':
                outstr[i] = 0xb5;
                break;
            case L'ж':
                outstr[i] = 0xb6;
                break;
            case L'з':
                outstr[i] = 0xb7;
                break;
            case L'и':
                outstr[i] = 0xb8;
                break;
            case L'й':
                outstr[i] = 0xb9;
                break;
            case L'к':
                outstr[i] = 0xba;
                break;
            case L'л':
                outstr[i] = 0xbb;
                break;
            case L'м':
                outstr[i] = 0xbc;
                break;
            case L'н':
                outstr[i] = 0xbd;
                break;
            case L'о':
                outstr[i] = 0x6f;
                break;
            case L'п':
                outstr[i] = 0xbe;
                break;
            case L'р':
                outstr[i] = 0x70;
                break;
            case L'с':
                outstr[i] = 0x63;
                break;
            case L'т':
                outstr[i] = 0xbf;
                break;
            case L'у':
                outstr[i] = 0x79;
                break;
            case L'ф':
                outstr[i] = 0xe4;
                break;
            case L'х':
                outstr[i] = 0x78;
                break;
            case L'ц':
                outstr[i] = 0xe5;
                break;
            case L'ч':
                outstr[i] = 0xc0;
                break;
            case L'ш':
                outstr[i] = 0xc1;
                break;
            case L'щ':
                outstr[i] = 0xe6;
                break;
            case L'ъ':
                outstr[i] = 0xc2;
                break;
            case L'ы':
                outstr[i] = 0xc3;
                break;
            case L'ь':
                outstr[i] = 0xc4;
                break;
            case L'э':
                outstr[i] = 0xc5;
                break;
            case L'ю':
                outstr[i] = 0xc6;
                break;
            case L'я':
                outstr[i] = 0xc7;
                break;
            case L'А':
                outstr[i] = 0x41;
                break;
            case L'Б':
                outstr[i] = 0xa0;
                break;
            case L'В':
                outstr[i] = 0x42;
                break;
            case L'Г':
                outstr[i] = 0xa1;
                break;
            case L'Д':
                outstr[i] = 0xe0;
                break;
            case L'Е':
                outstr[i] = 0x45;
                break;
            case L'Ё':
                outstr[i] = 0xa2;
                break;
            case L'Ж':
                outstr[i] = 0xa3;
                break;
            case L'З':
                outstr[i] = 0xa4;
                break;
            case L'И':
                outstr[i] = 0xa5;
                break;
            case L'Й':
                outstr[i] = 0xa6;
                break;
            case L'К':
                outstr[i] = 0x4b;
                break;
            case L'Л':
                outstr[i] = 0xa7;
                break;
            case L'М':
                outstr[i] = 0x4d;
                break;
            case L'Н':
                outstr[i] = 0x48;
                break;
            case L'О':
                outstr[i] = 0x4f;
                break;
            case L'П':
                outstr[i] = 0xa8;
                break;
            case L'Р':
                outstr[i] = 0x50;
                break;
            case L'С':
                outstr[i] = 0x43;
                break;
            case L'Т':
                outstr[i] = 0x54;
                break;
            case L'У':
                outstr[i] = 0xa9;
                break;
            case L'Ф':
                outstr[i] = 0xaa;
                break;
            case L'Х':
                outstr[i] = 0x58;
                break;
            case L'Ц':
                outstr[i] = 0xe1;
                break;
            case L'Ч':
                outstr[i] = 0xab;
                break;
            case L'Ш':
                outstr[i] = 0xac;
                break;
            case L'Щ':
                outstr[i] = 0xe2;
                break;
            case L'Ъ':
                outstr[i] = 0xad;
                break;
            case L'Ы':
                outstr[i] = 0xae;
                break;
            case L'Ь':
                outstr[i] = 0x62;
                break;
            case L'Э':
                outstr[i] = 0xaf;
                break;
            case L'Ю':
                outstr[i] = 0xb0;
                break;
            case L'Я':
                outstr[i] = 0xb1;
                break;
            default :
                outstr[i] = (char)str[i];
        }

//        if ( (str[i] == L'A') || (str[i] == L'B') || (str[i] == L'C') || (str[i] == L'E') || (str[i] == L'H') || (str[i] == L'K') || (str[i] == L'M') || (str[i] == L'O') || (str[i] == L'P') && (str[i] == L'T') && (str[i] == L'X') &&
//            (str[i] == L'a') || (str[i] == L'c') || (str[i] == L'e') || (str[i] == L'o') || (str[i] == L'p') || (str[i] == L'y') )
        if ( outstr[i] < 0x80 )
                printf("%c", outstr[i]);
        else
            printf("\\%3o", outstr[i]);
        ++i;
    }

    printf("\n");

    return 0;
}
