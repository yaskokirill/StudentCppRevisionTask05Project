#include "tasks.h"

/*	Task 01. Time Period [разность времени]
*
*	Даны значения двух моментов времени, принадлежащих одним и тем же суткам:
*	часы, минуты и секунды для каждого из моментов времени.
*	Определите, сколько секунд прошло между двумя моментами времени.
*
*	Примечание
*	1) Моменты времени могут задаваться по-разному.
*	2) Не забудьте про "защиту от дурака": если данные некорректны, то нужно возвратить -1.
*	3) Для реализации алгоритма задания попробуйте использовать только встроенные операции языка С/С++.
*
*	Формат входных данных [input]
*	Функция на вход получает три целых числа: часы, минуты, секунды,
*	задающие один момент времени и три целых числа, задающих ещё один момент времени.
*
*	Формат выходных данных [output]
*	Функция возвращает число секунд между этими моментами времени или -1 при ошибочных данных.
*
*	[ input 1]: 1 1 1 2 2 2
*	[output 1]: 3661
*
*	[ input 2]: 2 2 2 1 1 1
*	[output 2]: 3661
*
*	[ input 3]: 1 2 30 1 3 20
*	[output 3]: 50
*
*	[ input 4]: 0 0 0 0 0 0
*	[output 4]: 0
*
*	[ input 5]: 1 2 -30 1 3 20
*	[output 5]: -1
*/

int task01(int hour1, int minute1, int second1, int hour2, int minute2, int second2) {
	int result = 0;

	if (hour1 < 0 || minute1 < 0 || second1 < 0 || hour2 < 0 || minute2 < 0 || second2 < 0) {
		return -1;
	}
	else {
		result += hour1 < hour2 ? ((hour2 - hour1) * 3600) : ((hour1 - hour2) * 3600);
		result += minute1 < minute2 ? ((minute2 - minute1) * 60) : ((minute1 - minute2) * 60);
		if (minute1 > minute2 && second1 > second2) {
			result += second1 - second2;
		}
		else if (minute1 > minute2 && second1 < second2) {
			result -= second2 - second1;
		}
		else if (minute2 > minute1 && second2 > second1) {
			result += second2 - second1;
		}
		else if (minute2 > minute1 && second2 < second1) {
			result -= second1 - second2;
		}
		else if (second1 == second2) {
			result += 0;
		}
		else if (minute1 == minute2 && second1 > second2) {
			result += second1;
		}
		else if (minute1 == minute2 && second1 < second2) {
			result += second2;
		}

		return result;
	}
}