// Вводится один символ, измените его регистр. То есть, если была введена строчная буква - сделайте ее заглавной и наоборот. Символы, не являющиеся латинской буквой, нужно выводить без изменений.

// Входные данные

// Вводится единственый символ.

// Выходные данные

// Выведите ответ на задачу.

// Sample Input:

// b

// Sample Output:

// B

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char c;
    cin >> c;
    if(c >= 'a' && c <= 'z'){
        c += ('A' - 'a') ;
        cout << c;
    }   else    {
        if(c >= 'A' && c <= 'Z'){
            c -= ('A' - 'a');
            cout << c;
        }   else    {
            cout << c;
        }
    }
  return 0;
}