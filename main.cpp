/*
 * В текстовом файле записано слово, нужно перевернуть его задом наперед и сохранить в новый файл
 * Проверка на палиндром
 * Покрыть гугл тесты на функцию палиндрома
 */

#include <iostream>
#include "src/lib.h"

using namespace std;

FILE* f = fopen ("../main.txt", "r+");
char* buffInput = new char[100];
char* buffOutput = new char[100];
int main() {

    if (f){
        cout << "Файл существует \n \n";
        fread(buffInput, 100, 1, f);
        if (!palindromeCheck(buffInput)){
            buffOutput = reverse(buffInput);
            cout << "Входное слово: " << buffInput << "\n";
            cout << "Результат реверса: " << buffOutput << "\n";
        } else {
            cout << "Входное слово " << buffInput << " является палиндромом\n";
        }
    }else{
        cout << "Файл не существует \n \n";
    }


    return 0;
}

