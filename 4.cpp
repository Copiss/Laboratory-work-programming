/*Придумайте механизм упаковки нескольких значений в 1 байт.
Вариант 8.
Целые числа от 0 до 15.
*/

#include <iostream>
#include <bitset> //Подключение доп.библиотеки

std::bitset<8> compression(unsigned int a, unsigned int b) //Сжатие 2 чисел в одно (1 байт)
{
    std::bitset<8> b1(a); //инициализация первого числа как как экземпляр класса bitset
    std::bitset<8> b2(b); //инициализация второго числа как как экземпляр класса bitset
    std::bitset<8> b3 = (b1 << 4) | b2; //1 число в 4 чтарших разряда, 2 число в 4 младших
    return b3; //возвращаем полученное
}

void extraction(std::bitset<8> a) //метод распаковки
{
    unsigned int b = (a >> 4).to_ulong(); //преобразование старших разрядов 
    unsigned int c = ((a << 4) >> 4).to_ulong(); //преобразование младших разрядов
    std::cout << b << std::endl; //вывод 1 числа
    std::cout << c; //вывод 2 числа
}

int main()
{
    int a = 12; 
    int b = 7; 
    std::cout << compression(a, b) << std::endl; 
    extraction(compression(a, b)); 
}