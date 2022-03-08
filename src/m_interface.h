//
// Created by Pavel Emelyanenko 08.03.2022
//

#ifndef H_INTER
#define H_INTER

#include "stddef.h"

// This functions are used in main.c client file. Implementation is in
// m_server.c server file

/// compare_by_sh_position
/// Function compares two strings by position of symbol "ш".
/// Arguments:
///    first - one string(char*)
///    second - another string(char*)
/// Return:
///    1, if first string has greater position
///    0, another
int compare_by_sh_position(wchar_t* first, wchar_t* second);

#endif