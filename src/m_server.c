//
// Created by Pavel Emelyanenko 08.03.2022
//

// Implementation of m_interface.h functions

#include "m_interface.h"
#include "locale.h"
#include "stddef.h"

/// sh_position
/// Shows the last position of "ш" in string
/// Arguments:
///    str - string where we search the symbol
/// Return:
///    position of TARGET symbol
int sh_position(wchar_t* str, const wchar_t target);

int sh_position(wchar_t* str, const wchar_t target){
        setlocale(LC_ALL, "RU-ru");
        int pos = -1;
        unsigned long len = sizeof(str) / sizeof(wchar_t);

        for (int i = 0; str[i] != '\0'; ++i){
                if (str[i] == target){
                        pos = i;
                }
        }

        return pos;
}

int compare_by_sh_position(wchar_t* first, wchar_t* second){
        return sh_position(first, L'ш') >= sh_position(second, L'ш') ? 1 : 0;
}