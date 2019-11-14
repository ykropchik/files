//
// Created by YKROPCHIK on 14.11.2019.
//

#include "lib.h"

bool palindromeCheck(char* buffer){
    signed short int pointer = 0, lower = 0, higher = 0;

    while (buffer[pointer] != '\0'){
        pointer++;
    }

    higher = --pointer;

    while (lower < higher){
        while (buffer[lower] == ' '){
            lower++;
        }

        while (buffer[higher] == ' '){
            higher--;
        }

        if (buffer[lower] != buffer[higher]){
            return false;
        }

        lower++;
        higher--;
    }

    return true;
}