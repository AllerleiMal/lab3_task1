//
// Created by Pavel Emelyanenko 08.03.2022
//

// Client file

#include <stdio.h>
#include "locale.h"
#include "m_interface.h"
#include <wchar.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
        setlocale(LC_ALL, "");
        if (argc < 3){
                printf("Not enough arguments\n");
                return 1;
        }

        wchar_t first[100];
        wchar_t second[100];
        mbstowcs(first, argv[1], 100);
        mbstowcs(second, argv[2], 100);
        
        if (compare_by_sh_position(first, second) == 1){
                printf("First sentence\n"); 
        }else{
                printf("Second sentence\n"); 
        }
        return 0;
}