#include <iostream>

using namespace std;

const int MAX_LENGHT = 32;
const int MAX_EXAMS = 10;

struct Date
{
	int day;
	int month;
	int year;
};

enum ExamType
{
	Russian = 10,
	Mathematica = 20,
	History = 30,
	Biology = 40
};

struct Ege
{
	ExamType type;
	unsigned short mark;
};

struct Student
{
	char firstname[MAX_LENGHT];
	char lastname[MAX_LENGHT];
	unsigned int passport;
	Ege exams[MAX_EXAMS];
};

const char EXAM_TYPS[][32] 
	= { "Русский язык", "Математика профильная", "История", 
		"Биология", "Неизвестный предмет" };

int main()
{
	setlocale(0, "");

	cout << sizeof(Student) << endl;

	Student stu = { "Вадим", "Иванов", 589653, 
		{ { ExamType::Russian, 89 },{ ExamType::Mathematica, 89 } }
	};

	cout << stu.firstname << " " << stu.lastname << " " << stu.passport << endl;

	for (int i = 0; i < MAX_EXAMS; ++i)
	{
		if (stu.exams[i].mark != 0) 
		{
			ExamType type = stu.exams[i].type;
			switch (type)
			{
			case Russian:
				cout << EXAM_TYPS[0];
				break;
			case Mathematica:
				cout << EXAM_TYPS[1];
				break;
			case History:
				cout << EXAM_TYPS[2];
				break;
			case Biology:
				cout << EXAM_TYPS[3];
				break;
			default:
				cout << EXAM_TYPS[4];
				break;
			}

			cout << " " << stu.exams[i].mark << endl;
		}
	}	
}