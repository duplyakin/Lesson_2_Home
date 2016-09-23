#include <iostream>
#include <cstdlib>
#include <cstring>
#include "logger.h"

int main(int argc, char** argv) {
  DBG("[Lesson 2]: 6");

  size_t SIZE = 4;
  int* array = new int[SIZE];
  memset(array, 0, SIZE*sizeof(int));

  char ch;
  int index = 0;
  
  char* buffer = new char[SIZE];
  memset(buffer, 0, SIZE*sizeof(char));
  while ( (ch = getchar()) != '\n' && index < SIZE ) {
    buffer[index++] = ch;

  }
  

  index--;
  for (int i = 0; i <= index; ++i) {
    array[i] = buffer[index - i] - '0';
  }
  
  int flag = 0; 
  for (int i = index; i >= 0; i--) {

    switch (i) {
      case 0:
        if (flag == 1) {
          switch (array[i]) {
            case 0: printf("десять рублей\n"); break;
            case 1: printf("одиннадцать рублей\n"); break;
            case 2: printf("двенадцать рублей\n"); break;
            case 3: printf("тринадцать рублей\n"); break;
            case 4: printf("четырнадцать рублей\n"); break;
            case 5: printf("пятнадцать рублей\n"); break;
            case 6: printf("шестьнадцать рублей\n"); break;
            case 7: printf("семьнадцать рублей\n"); break;
            case 8: printf("восемьнадцать рублей\n"); break;
            case 9: printf("девятьнадцать рублей\n"); break;
            default: printf("Неправильный символ\n"); break;  
          }
          break;

        } else {
          switch (array[i]) {
            case 0: printf("рублей\n"); break;
            case 1: printf("один рубль\n"); break;
            case 2: printf("два рубля\n"); break;
            case 3: printf("три рубля\n"); break;
            case 4: printf("четыре рубля\n"); break;
            case 5: printf("пять рублей\n"); break;
            case 6: printf("шесть рублей\n"); break;
            case 7: printf("семь рублей\n"); break;
            case 8: printf("восемь рублей\n"); break;
            case 9: printf("девять рублей\n"); break;
            default: printf("Неправильный символ\n"); break;  
          }
          break;
        }
       

      case 1:
        switch (array[i]) {
            case 0:  break;
            case 1: flag = 1; break;
            case 2: printf("двадцать "); break;
            case 3: printf("тридцать "); break;
            case 4: printf("сорок "); break;
            case 5: printf("пятьдесят "); break;
            case 6: printf("шестьдесят "); break;
            case 7: printf("семьдесят "); break;
            case 8: printf("восемьдесят "); break;
            case 9: printf("девяносто "); break;
            default: printf("Неправильный символ\n"); break;
          }
        break;

      case 2:
        switch (array[i]) {
            case 0:  break;
            case 1: printf("сто "); break;
            case 2: printf("двести "); break;
            case 3: printf("триста "); break;
            case 4: printf("четыреста "); break;
            case 5: printf("пятьсот "); break;
            case 6: printf("шестьсот "); break;
            case 7: printf("семьсот "); break;
            case 8: printf("восемьсот "); break;
            case 9: printf("девятьсот "); break;
            default: printf("Неправильный символ\n"); break;
          }
        break;

      case 3:
        switch (array[i]) {
            case 1: printf("одна тысяча "); break;
            case 2: printf("две тысячи "); break;
            case 3: printf("три тысячи "); break;
            case 4: printf("четыре тысячи "); break;
            case 5: printf("паять тысяч "); break;
            case 6: printf("шесть тысяч "); break;
            case 7: printf("семь тысяч "); break;
            case 8: printf("восемь тысяч "); break;
            case 9: printf("девять тысяч "); break;
            default: printf("Неправильный символ\n"); break;
          }
        break;
    }

  }



  delete[] buffer;
  delete[] array;


  DBG("[Lesson 2]: 6 [END]");
  return 0;
}
