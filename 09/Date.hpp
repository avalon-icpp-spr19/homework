#pragma once
#include <string>

namespace ext
{
	enum Month
	{
		January = 1,
		February,
		March,
		April,
		May,
		June,
		July,
		August,
		September,
		October,
		Novemver,
		December
	};

	enum DateFormat
	{
		MonthAsInt,
		MonthAsString
	};
	
	enum Season
	{
		Winter,
		Spring,
		Summer,
		Autumn
	};

	struct Date
	{
		int year;
		Month month;
		int day;
	};

	/*
		¬озвращает ёлианскую дату
		https://ru.wikipedia.org/wiki/%D0%AE%D0%BB%D0%B8%D0%B0%D0%BD%D1%81%D0%BA%D0%B0%D1%8F_%D0%B4%D0%B0%D1%82%D0%B0
		раздел "¬ычисление номера юлианского дн€ (JDN) по дате григорианского календар€"
		“естовые данные				ќжидаемый результат
		1.12.2018					2458454
		1.1.2018					2458120
		1.6.2000					2451697
		21.12.2012					2456283
	*/
	unsigned int countJND(Date date);

	/*
		–ассчитывает количество дней между двум€ датами.
		ѕри реализвации используйте CountJND
	*/
	int countDistance(Date from, Date to);

	/*
		¬озвращает строку в которой содержитс€ дата в формате: dd.mm.yyyy (2.10.2001)
		≈сли параметр DateFormat равен MonthAsString, то вернуть строку в формате: dd monthName yyyy (2 окт€бр€ 2001)
	*/
	void print(Date data, DateFormat format = DateFormat::MonthAsInt);

	/*
		¬озвращает сезон (зима, весна, лето, осень) передаваемой даты
	*/
	Season getSeason(Date date);
		
	/*
		ѕровер€ет может ли существовать дата с передаваемыми значени€ми.
		¬ случае успеха возвращает true, и заполн€ет дату по переданному адресу.
		≈сли дата с переданными параметрами существовать не может,
		возвращает false.
	*/
	bool tryFillDate(Date * date, int year, int month, int day);
	
	/*
		ћен€ет даты местами
	*/
	void swap(Date * lhs, Date * rhs);

	/*
		—равнивает даты на эквивалентность
	*/
	bool isSame(Date* lhs, Date * rhs);

	/*
		¬озвращает указатель на большую дату
	*/
	Date * max(Date * lhs, Date * rsh);

	/*
		¬озвращает указатель на меньшую дату
	*/
	Date * Min(Date * lhs, Date * rsh);

	/*
		¬озвращает указатель на минимальную дату в переданном массиве дат
	*/
	Date * GetMinDate(Date dates[], int size);

	/*
		¬озвращает указатель на максимальную дату в переданном массиве дат
	*/
	Date * getMinDate(Date dates[], int size);
}