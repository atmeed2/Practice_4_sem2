//
//  main.cpp
//  Practice_4_sem2
//
//  Created by Leonid Zemtsov on 13.03.2022.
//

#include <iostream>

/* Первое Задание */
void task1(int *num, int size) {
    int min, temp; // для поиска минимального элемента и для обмена
      for (int i = 0; i < size - 1; i++)
      {
        min = i; // запоминаем индекс текущего элемента
        // ищем минимальный элемент чтобы поместить на место i-ого
        for (int j = i + 1; j < size; j++)  // для остальных элементов после i-ого
        {
          if (num[j] < num[min]) // если элемент меньше минимального,
            min = j;       // запоминаем его индекс в min
        }
        temp = num[i];      // меняем местами i-ый и минимальный элементы
        num[i] = num[min];
        num[min] = temp;
      }
}

/* Второе Задание */
void task2() {
    int digitals[10]; // объявили массив на 10 ячеек
     
    std::cout << "Введите 10 чисел для заполнения массива: " << std::endl;
     
      for (int i = 0; i < 10; i++) {
          std::cin >> digitals[i]; // "читаем" элементы в массив
      }
     
      for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
          if (digitals[j] > digitals[j + 1]) {
            int b = digitals[j]; // создали дополнительную переменную
            digitals[j] = digitals[j + 1]; // меняем местами
            digitals[j + 1] = b; // значения элементов
          }
        }
      }
     
    std::cout << "Массив в отсортированном виде: ";
     
      for (int i = 0; i < 10; i++) {
          std::cout << digitals[i] << " "; // выводим элементы массива
      }
      system("pause");
      
}

/* Третье Задание */
void task3(int* arr,int n){
    int counter=0;
    for(int i=1;i<n;i++){
        for(int j=i; j>0 && arr[j-1]>arr[j];j--){
            counter++;
            int tmp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=tmp;
        }
    }
    std::cout<<counter<<std::endl;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
