﻿
#include <iostream>

//struct Address {
//    std::string street;
//    std::string city;
//    std::string zipCode;
//};


class Matrix {
private:
    int data[3][3] =
    {
        {5,6,2},
        {1,7,3},
        {9,4,8}
    };

public:
    void vich() {
        int sum = 0; 
        std::cout << "Массив: \n";
        for (int i = 0; i < 3; i++)
        {
            sum = 0;
            for (int j = 0; j < 3; j++)
            {
                std::cout << data[i][j];
                sum = data[i][j] + data[i][j];
            }
            std::cout << "\n";
        }
        std::cout << "Сложение матриц: " << sum;
    }

};

int main()
{
    //1
    /*int arr[7] = {-4, 2, 4, -1, 3, 5, -8 };
    int count = 0;
    std::cout << "Массив: ";
    for (int i = 0; i < 7; i++)
    {
        std::cout << arr[i] << " ";

        if (arr[i] > 0)
        {
            count++;
        }
    }
    std::cout << "\n";
    std::cout << "Количество положительных чисел в одномерном массиве: " << count;*/

    //2
    /*int sum = 0;
    int A[2][4][3] = 
    {
        {
            {2,4,3},
            {5,6,7},
            {10,24,3},
            {1,14,5},
        },
        {
            {7,2,9},
            {2,2,9},
            {9,12,4},
            {5,6,7},
        }
    };
    for (int i = 0; i < 2; i++)
    {  
        for (int j = 0; j < 4; j++) 
        {
            sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum = sum + A[i][j][k];
                
            }
            std::cout << "Сумма элементов " << i + 1 << " глубокого массива " << j + 1 << " равна: " << sum << "\n";
        }
    }*/



    //3
    /*Address adres;
    adres.street = "Ул";
    adres.city = "Г";
    adres.zipCode = "pospt";
    std::cout << "Информация о адресе \n";
    std::cout << "Улица: " << adres.street << "\n";
    std::cout << "Город: " << adres.city << "\n";
    std::cout << "zipКод: " << adres.zipCode << "\n";*/


    //4
    Matrix matrix1;
    matrix1.vich();
}




// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
