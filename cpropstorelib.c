#include "cpropstorelib.h"
#include <stdio.h>

__stdcall unsigned char getProperty (unsigned char key, signed int *value)
{
    unsigned char errorCode, success;
    errorCode = 0; // Отсутсвие ошибок
    success = 0;
    FILE *fp;
    fp = fopen("prop.txt", "r");

    if (fp != NULL)
    {
        char buff[100];
        int k, v;
        while ( feof(fp) == 0  )
        {
            fgets(buff, 100, fp);
            if ( sscanf (buff, "%i %i\n", &k, &v) == 2 )
            {
                if ( k == key )
                {
                    *value = v;
                    success = 1;
                    break;
                }
            }
            else
            {
                errorCode |= 0x40; // Ошибка чтения строки файла
            }
        }

        if ( success != 1 ) // Достигнут конец файла, а ключ не найден
            errorCode |= 0x08;

        fclose(fp);
    }
    else
    {
        errorCode |= 0x80;
    }

    return errorCode;
}
