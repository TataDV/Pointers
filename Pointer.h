# pragma once
#include <iostream>
# include <ctime>
using namespace std;
//Функция вывода рандомного массива
void RandomFillArray (int* arr, int size, int start, int end){
    srand (time (0));
    for (int i = 0; i < size; ++i){
        *(arr + i) = start + rand ()% (end - start + 1);
    }
}
//Функция вывода массива на экран

void PrintArray (int* arr, int size){
    cout << "{ ";
    for (int i = 0; i < size; ++i){
        cout << *(arr + i) << " ";
    }
    cout << "}" << endl;
}

//Функция, которая возвращает указатель на новый созданный массив с добавленным в конец элементом
int* AddElement (int* source, int* size, int element){
    int* temp = new int[*size + 1];
    for (int i = 0; i < *size; ++i){
        temp [i] = source[i];
        temp [*size] = element;

        *size = *size + 1;// необходимо для вывода на экран массива с новым размером
        return temp;
    }
}
//Функция вставки элемента по указанному индексу
int* InsertElement (int* source, int* size, int index, int element){
   int new_size = *size +1;
    int* temp = new int [new_size];
    for (int i = 0; i <index; ++i){
        temp [i] = source [i];
    }
    temp [index] = element;
    for (int i = index + 1; j = index; i < new_size; ++i; ++j){
        temp [i] = source [j];
        }
    *size = new_size;
    return temp;
}

//Функция удаления элемента по указанному индексу

*int DeleteElement (int* source, int* size, int index){
    int new_size = *size - 1;
    int* temp = new int [new_size];
    for (int i = 0, j = 0, i < *size; ++i){
        if (i == index) continue;

        temp [j] = source [i];
        j++;
    }
    * size = new_size;
    retutn temp;
}