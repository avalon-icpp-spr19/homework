#include <iostream>

using namespace std;

const int MAX_LENGHT = 32; // задаем максимальную длину текстовых данных
const int MAX_EXAMS = 10; // задаем максимальное количество экзаменов у одного студента

struct Date // объявляем структуру для хранения даты
{
	int day;
	int month;
	int year;
};

enum ExamType // объявляем перечисление,где описываем все возможные экзамены ЕГЭ
{
	Russian = 1,
	Mathematica,
	History,
	Biology
};

struct Ege // объявление структуры для хранения ЕГЭ
{
	ExamType type; // поле, где будем хранить название экзамена
	unsigned short mark; // поле, где будем хранить оценку за экзамен
};

struct Student
{
	char firstname[MAX_LENGHT];
	char lastname[MAX_LENGHT];
	unsigned int passport;
	Ege exams[MAX_EXAMS]; // поле, где будем хранить все экзамены студента, в виде массива
};

// Маассив, для хранения названия предметов
const char EXAM_TYPS[][32] 
	= { "Русский язык", "Математика", "История", 
		"Биология", "Неизвестный экзамен" };

int main()
{
	setlocale(0, "");

	cout << sizeof(Student) << endl;

	// Создаем и инициализируем переменную типа Student
	Student stu = { "Давид", "Иванов", 589653, 
		{ { ExamType::Russian, 89 },{ ExamType::Mathematica, 89 } }
	};

	// Выводи основную информацию о студенте
	cout << stu.firstname << " " << stu.lastname << " " << stu.passport << endl;

	// Выводим информацию про экзамены студента
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
