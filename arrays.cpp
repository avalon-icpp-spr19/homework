#include <iostream>
#include <random>

/* ������� 1
�������� ������ ��� �������� 10-�� ������������� ���������
�������� ����������� ������ ��� �������� 20-�� ������������ ���������
�������� ������ ��� �������� 2-� ���������� ���������

����� ���� ������ ����������� ��������� �������:
int data[6] = { 2, 4, 8, 16, 32, 64 };
����� ������ ����� ������ ������?
������ ������ ���� �� ������
���� ����� ������� ������� � �������� 0?
���� ����� ������� ������� � �������� 3?
����� ������ � �������� 8?
����� ������ � �������� 32?
��������� ������� �������� ������� �������� 1.
������� �������� ���������� �������� � �������.
�������� �������� ������� �� ����� ����� ������.

�������� ������ ��� �������� 5-�� �������� ������ ���� � ������������������ ��� � ������� ������ �������������
�������� ����������� ������ �� �����.

����� �� �� ��������� ������ ������� ��� ��� ��������?
���� �����, �� ���������������� ���.

����� ������ �������� ��������� �������:
int data[5] = { 1, 2 }
����� ������ ������� �������?
���� ����� ������� � �������� 1? ���� ����� ������� � �������� 2?
��������� ������ � ������� ��������.
�������� ��� �������� ������� �� �����.

����� ������ �������� ��������� �������:
const char alpha[3] = { 'a', 'b', 'c' }
����� ������ ������� �������?
���� ����� ������� � �������� 0? ���� ����� ������ � �������� 'c' 
��������� �� ��������� ���������:
alpha[0];
alpha[3];
alpha[1] = 'd';
alpha[1] = 'b';
�������� ��� �������� ������� �� �����.
*/

/*
������� 2
�������� ������ ��� �������� ���������� ���� int �������� 20;

�������� � ����������� ������ ������ 20 ����������� ����� � ������� �����������
�������� ��� �������� ������� �� ����� 

�������� � ���� �� ������ ������ 20 ������ ����� � ������� �����������
�������� ��� �������� ������� �� �����

�������� � ���� �� ������ ������ 20 �������� ������ (2^0, 2^1, ... , 2^19). ������� pow �� ������������
�������� ��� �������� ������� �� ����� �� 5 ��������� � ����� ������

�������� � ���������� ������� ��� �������� � �������� �������� (i = 1, 3, ..., 19);
�������� ��� �������� ������� �� ����� �� 5 ��������� � ����� ������
*/

/* ������� 3
��� ���������� ���������� ������� ��� ���������� ������� ���������� ������� ������������ ������� ext::GetRandomValue �� Extention.hpp
��������:
int data[10];
for(int i = 0; i < 10; ++i)
{
	data[i] = ext::GetRandomValue(0, 100, true);
}
����� ���������� ������� ���� ������ data ����� ��������� 10 ����� � ��������� �� 0 �� 100.

������������ ������ �� 10 ��������� � ��������� �� -10 �� 10.
�������� ��� �� �����
������� ���������� ������� � �������.
�������� �� ����� �������� ����� �������� � ��� ������
(���� ������������ ��������� ��������� ������� ������ ������).

������������ ������ �� 100 ��������� � ��������� �� -100 �� 100.
���������� � �������� �� �����
	����� ���� ��������� ����� �������.
	���������� ��������� ������ 0, ���������� ��������� ������ 0, ���������� ��������� ������ 0
	
������������ ������ �� 100 ��������� � ��������� �� 1 �� 100.
������� �� �����
	�������� � ������ ������� ����������� ����� 2
	�������� � ������ ������� �� ����������� �������� �����

������� ����������� ������� �� ���� ���������� �������, ������� ���������� �������� � ����� ������
�������� �� ����� ������������ ������ �� 10 ��������� � ������.

������������ ������ �� 100 ��������� � ��������� �� 1 �� 100.
��������� ������������ ������ ����� �� ����� �� ���������.
	����������� ����� �������� � �������.
	���� ����� ���� � ������� �������� ��� ������, ���� ����� ��� �������� -1.
	���������� � �������� �� ����� ���������� ��������� �������, ��� ��������� ������������� �����.
*/

/* ������� 4
������������ ������ ���� char �� 100 ��������� � ��������� �� a �� z.
���������: ������� ��������� ���������� �������� ����� ������� ��������� �������:
GetRandomValue('a','z');
�������� ������������ ������ �� ����� � ���� ����� ������.
�������� �� ����� ��� ����� ������ ����� ����������� � ��������������� �������.
�������� �� ����� ������������ ����������� ������������ ������� ��������.
������: "aabbdddz" ��� ����� ������ ��������� ��������� �����������:
|**
|**
|
|***
|
|
... 
|
|
|*
�� ��������� ������������� �������� �������� �������� ������������� �� �����������, ������������ �� �������� '*'
*/

/* ������� 5
����� ���� ��������� ������ ����������� ��������� �������:
int data[3][2] = { {2, 4}, {8, 16}, {32, 64} };
���� ����� ���������� ����� � ������ �������?
���� ����� ���������� ��������� � ������ ������?
����� ������ ����� ������ ������?
������ ������ ���� �� ������?
��� ���������� � �������� �� ��������� 8?
��� ���������� � �������� �� ��������� 64?
��������� ������� �������� ������� �������� 1.
������� �������� ���������� �������� � �������.

�������� ��������� ������ �������� 4�2 ������ ���� � ������������������ ��� � ������� ������ �������������

����� �� �� ��������� ������ ���������� ������� ��� ��� ��������?
���� �����, �� ���������������� ���.

����� ������ �������� ��������� �������:
int data[][4] = { {1, 2}, {3,4,5} }
����� ������ ������� �������?
���� ����� ������� data[0][0]? ���� ����� ������� data[1][2]?
��������� ������ � ������� ��������.
��������� � ��� ���� ������ ������� � ������ �������.
�������� ��� �������� ������� �� �����.
������������ ����� for
*/

/* ������� 6
������������ ��������� ������ �������� 10x10.
��������� ��� ���������� ���������� �� 0 �� 100
������� � �������� �� �����:
	��������������� ������
	����� ���� ��������� �������
	���������� ���� ������ ���������.
	������������ � ����������� �������� ������� ������ � �� ���������
*/

/* �������������� �������
�� ���� �������� ������, ����������� �������� �� ���� � ���� "��������-������".
�� �� ��������� ���������� ��������� ��������� ������ char field[3][3],
�, ��������������� ���, ������� ���������� ��� Draw,
���� ���������� ������������������ ��� �� � ������, ���� ���� � �����.

�������� ������				��������� ���������
XXX OO. ...					Winner is X
OXO XO. .XO					Draw 
OXO XOX OX.					Draw
XOX OXO OXO					Draw
... ... ...					Draw
XXX OOO ...					Draw
XOO XOO XX.					Winner is X
.O. XO. XOX					Winner is O
*/