#include <iostream>

int main() {
    // Определение размеров массива
    const int rows = 5;
    const int cols = 5;

    // Инициализация двумерного массива
    int digits[rows][cols];

    // Переменная для хранения текущего числа
    int number = 0;

    // Переменная-множитель для изменения направления
    int multiplier = 1;

    // Внешний цикл по строкам
    for (int i = 0; i < rows; ++i) {
        // Внутренний цикл по столбцам
        for (int j = 0; j < cols; ++j) {
            // Расчет индекса столбца с учетом направления
            int colIndex = (multiplier == 1) ? j : cols - j - 1;
            
            // Инициализация элемента массива
            digits[i][colIndex] = number;
            
            // Инкремент текущего числа
            number += 1;
        }
        
        // Смена направления для следующей строки
        multiplier *= -1;
    }

    // Вывод массива на экран
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << digits[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
