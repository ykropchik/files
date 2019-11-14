//
// Created by YKROPCHIK on 14.11.2019.
//

#include "lib.h"

char* reverse(char* bufferInput){
    char *bufferOutput = new char[100];
    unsigned short int pointer = 0;

    while (bufferInput[pointer] != '\0'){
        pointer++;
    }

    pointer--;

    for (int i = pointer; i >= 0; i--){
        bufferOutput[pointer - i] = bufferInput[i];
    }

    return bufferOutput;
}