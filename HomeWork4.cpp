﻿#include <iostream>

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();

int main()
{
    setlocale(LC_ALL, "RU");
    
    //task1();
    //task2();
    //task3();
    task4();
    //task5();
    //task6();
    //task7();
}


/*
1. Создайте массив состоящий из элемениов 9,8,7,6,5,4,3,2,1,0.
   Выведите на экран только элементы с чётными индексами.
*/

void task1()
{
    const  int num = 10;
    int array[num] = { 9,8,7,6,5,4,3,2,1,0 };

    for (int i = 0; i < 10; i +=2)
    {
       
           printf("%d ", array[i]);
           
    }

}


/*
2. Создайте массив состоящий из элемениов 9,8,7,6,5,4,3,2,1,0.
   Выведите на экран в обратном порядке только элементы с нечётными индексами.
*/

void task2()
{
    const int size = 10;
    int array[size] = { 9,8,7,6,5,4,3,2,1,0 };

    for (int i = size - 1; i >= 0; i--)
    {
        if (i %2 != 0)                 //Проверяем каждый элемент массива на не четность
        {
           printf("%d  ", array[i]);
        }
    }
}


/*
3. Создайте массив состоящий из элементов 9,8,7,6,5,4,3,2,1,0.
   Выведите на экран сумму элементов массива, не кратных 3.
*/

void task3()
{
    const  int num = 10;
    int  sum = 0;
    int array[num] = { 9,8,7,6,5,4,3,2,1,0 };

    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 3 == 0)                   //Проверяем каждый элемент массива на кратность 3
        {
            printf("%d\n ", array[i]);
            sum += i;
        }
    }
           printf("Сумма элементов массива, не кратных 3 = %d\n ", sum);
}

/*

4. Создайте массив состоящий из 20 целочисленных элементов.
   Заполните массив квадратами чисел начиная с 1 (т.е. 1, 4, 9...). Выведите значения массива на экран.

*/
void task4()

{
    const  int num = 20;
    int sum = 0;
    int array[num] = {};
     
    for (int i = 0; i < num ; i++)            // Заполняем массив через цикл for
    {
        array[i] = (i + 1) * (i + 1);                    // Заполняем массив квадратами чисел
        printf("%d ", array[i]);
    }
}


/*
      Создайте массив из 11 элементов, организуйте ввод элементов массива с клавиатуры,
   выведите на экран все элементы массива в строку разделяя элементы одним пробелом.
   Инвертируйте элементы массива относительно центра (например если было 0,1,2,3,4,5,6,7,8,9,10,
   должно стать 10,9,8,7,6,5,4,3,2,1,0). Выведите значения массива на экран.
*/

void task5()

{
    const int size = 11;
    int array[size];
    //int array_new = 11;
    int temp;
    printf("Введите элемент массива: ");
    printf("\n\n");
    for (int i = 0; i < size; i++)
    {
        std::cout << i + 1 << "\\"<< size <<": ";
        std::cin >> array[i];           // Вводим с клавиатуры числа
    }
      for (int i = 0; i <  size; i++)   // Выводим массив в строку с пробелами
      {
            //printf("%d\n\n ", array[i]);
      }

      for (int i = 0; i < size / 2; i++)
      {
          temp = array[i];
          array[i] = array[(size - 1) - i];
          array[(size - 1) - i] = temp;
      }
      for (int i = 0; i < 11; i++)
      {
          std::cout << array[i] << " ";
      }    
}    


void task6()

{
    const int size = 6;
    int array1[size]{ 1,2,3,4,5,6};
    int array2[size];

    for (int i = 6; i != -1; i--)
    {
        array2[i] = array1[i];
    }

    for (int i = 0; i < size; i++)
        std::cout << array2[size];
}





















/*
     Создайте двумерный массив 10x10 целочисленных элементов.
  Заполните его значениями по следующему принципу: значением элемента массива является двузначное число,
  в разряде десятков которого записан номер строки, а в разряде единиц - номер столбца.
  Вывести значения массива на экран.
*/

//void task6()
//{
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j < 10; j++)
//            printf("%d %d", [i] [j]);
//    }
//
//
//
//}



/*
      Создайте двумерный массив 10x10 целочисленных элементов.
   Заполните его значениями по следующему принципу: значением элемента массива является произведение его индексов.
   Вывести значения массива на экран.
   Посчитать сумму элементов массив на главной диагонали массива и вывести её на экран.
*/


void task7()
{
    int array[10][10];
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++) {
            array[i][j] = i * 10 + j *10;

        }

    }

    for (int i = 1; i < 11; i++)
    {
        
        
        for (int j = 1; j < 11; j++)
        {
            std::cout << array[i][j] << std:: endl;

        }
        

    }

}



























/*
1. Создайте массив состоящий из элемениов 9,8,7,6,5,4,3,2,1,0.
Выведите на экран только элементы с чётными индексами.

2. Создайте массив состоящий из элемениов 9,8,7,6,5,4,3,2,1,0.
Выведите на экран в обратном порядке только элементы с нечётными индексами.

3. Создайте массив состоящий из элемениов 9,8,7,6,5,4,3,2,1,0.
Выведите на экран сумму элементов массива, не кратных 3.

4. Создайте массив состоящий из 20 целочисленных элементов.
Заполните массив квадратами чисел начиная с 1 (т.е. 1, 4, 9...). Выведите значения массива на экран.

5. Создайте массив из 11 элементов, организуйте ввод элементов массива с клавиатуры,
выведите на экран все элементы массива в строку разделяя элементы одним пробелом.
Инвертируйте элементы массива относительно центра (например если было 0,1,2,3,4,5,6,7,8,9,10,
должно стать 10,9,8,7,6,5,4,3,2,1,0). Выведите значения массива на экран.

6. Создайте двумерный массив 10x10 целочисленных элементов.
Заполните его значениями по следующему принципу: значением элемента массива является двузначное число,
в разряде десятков которого записан номер строки, а в разряде единиц - номер столбца. Вывести значения массива на экран.

7. Создайте двумерный массив 10x10 целочисленных элементов.
Заполните его значениями по следующему принципу: значением элемента массива является произведение его индексов.
Вывести значения массива на экран. Посчитать сумму элементов массив на главной диагонали массива и вывести её на экран.



*/


