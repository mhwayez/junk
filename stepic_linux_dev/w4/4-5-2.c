// Поиск ppid c использованием procfs

// Разработать программу solution, которая осуществляет поиск родительского PID текущего процесса в файловой системе proc и выводит найденное значение на консоль.  Результат, возвращаемый функций должен быть выведен отдельной строкой  в stdio.

// Пример вызова

// ./solution
// 13221


// Представление решения

// Решение предоставляется в виде двух файлов solution.c и Makefile, в последнем предполагается цель по умолчанию, которая приводит к сборке Вашего приложения.

// Вывод

// Программа выводит в стандартный поток вывода число в отдельную строку

// solution.c

#include <stdio.h>
#include <unistd.h>

int main ()
{
  // printf ("%d\n", (int) getpid ());
  printf ("%d\n", (int) getppid ());
  return 0;
}

// Makefile

all:    exe
exe:    solution.c
    gcc solution.c -o solution
