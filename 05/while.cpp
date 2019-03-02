/*
Задание 1
Программа получает на вход последовательность целых неотрицательных чисел,
каждое число отделено пробелом. Последовательность завершается числом 0,
при считывании которого программа должна закончить свою работу.
Выведите наименьший и наибольший элемент данной последовательности
Тестовые данные       Ожидаемый результат
1 2 -3 4 -5 0					-5 4
1 9 -3 -3 2 1	0				-3 9
1 2 5 4 3 5 4 5 0			1 5 

Задание 2
Программа получает на вход последовательность целых неотрицательных чисел,
каждое число отделено пробелом. Последовательность завершается числом 0,
при считывании которого программа должна закончить свою работу.
Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.
Формат входных данных
Вводится последовательность натуральных чисел, оканчивающаяся числом 0
(само число 0 в последовательность не входит, а служит как признак ее окончания).
Тестовые данные				Ожидаемый результат
1 2 3 4 5 0					  1
1 2 3 3 2 1	0				  2
1 2 5 4 3 5 4 5 0			3 

Задание 3
Дано целое неотрицательное число N.
Найти число, составленное теми же десятичными цифрами, что и N, но в обратном порядке.
Тестовые данные				Ожидаемый результат
1234						      4321
5555						      5555
15							      51
987654321					    123456789

Задание 4
Найдите минимальную степень двойки, превосходящую заданное число.
Тестовые данные				Ожидаемый результат
1							        2
2							        4
15							      16
100							      128

Задание 5
Последовательность Фибоначчи определяется так:
F(0) = 0, F(1) = 1, …, F(n) = F(n-1) + F(n-2).
По данному числу N определите N-е число Фибоначчи F(N).
Тестовые данные				Ожидаемый результат
0							        0
1							        1
2							        1
3							        2
4							        3
6							        8
10							      55
25							      75025

Задание 6 (дополнительное)
Элемент последовательности называется локальным максимумом,
если он строго больше предыдущего и последующего элемента последовательности.
Первый и последний элемент последовательности не являются локальными максимумами.
Дана последовательность натуральных чисел, завершающаяся числом 0.
Определите количество строгих локальных максимумов в этой последовательности.
Формат входных данных
Вводится последовательность натуральных чисел, оканчивающаяся числом 0
(само число 0 в последовательность не входит, а служит как признак ее окончания).
Тестовые данные				Ожидаемый результат
1 2 3 2 1 0					  1
1 2 2 1 0					    0
1 3 5 4 4 6 1 0				2
1 9 8 7 7 8 5 9 0			2
*/
