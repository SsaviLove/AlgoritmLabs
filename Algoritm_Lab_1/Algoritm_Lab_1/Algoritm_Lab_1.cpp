#include <iostream>
#include <stdio.h>
#include <time.h>

void InputMatr(int** matr, int m)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++) scanf_s("%d", &matr[i][j]);
}

void OutputMatr(int** matr, int m)
{
    for (int i = 0; i < m; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++) printf("%d ", matr[i][j]);
        printf("\n");
    }
}

void RandMatr(int **matr,int m)
{
    srand(time(0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            matr[i][j] = rand() % 21;
            if (i == j) matr[i][j] = 0;
        }
    }
}

//void Perestanovka(int** matr, int m)
//{
//    int max_i;
//    int* swp;
//    for (int i = 0; i < m; i++) {
//        if (matr[i] < matr[i + 1]) max_i = i;
//    }
//    for (int j = 0; max_i < j <= m; j++) {
//        if (matr[max_i] < matr[j]) {
//            swp = matr[max_i];
//            matr[max_i] = matr[j];
//            matr[j] = swp;
//        }
//    }
//    for (int j = m, max_i + 1; max_i < m; max_i++) {
//        swp = matr[max_i];
//        matr[max_i] = matr[j];
//        matr[j] = swp;
//    }
//}

int main()
{
    int cnt_city, start;
    int i=0;
    int** matr;
    setlocale(LC_ALL, "Russian");
    printf("Введи кол-во городов: "); std::cin >> cnt_city;
    matr = new int* [cnt_city];
    for (; i < cnt_city; i++)
        matr[i] = new int[cnt_city];
    RandMatr(matr, cnt_city);
    OutputMatr(matr, cnt_city);
    std::cout << "начальный город: ";
    std::cin >> start;
    for (i = 0; i < cnt_city; i++) delete[]matr[i];
    delete[] matr;
}