#pragma once
#include "Tasks.h"

#define RIGHT "completed successfully. Well DONE!!!"
#define WRONG "was not running successfully. Something was WRONG!"

void testingTask01() {

	bool result = task01(1, 1, 1, 2, 2, 2) == 3661
		&& task01(0, 0, 0, 1, 1, 1) == 3661
		&& task01(2, 2, 2, 3, 3, 3) == 3661
		&& task01(3, 3, 3, 4, 4, 4) == 3661
		&& task01(1, 2, 30, 1, 3, 20) == 50
		&& task01(0, 0, 0, 0, 0, 1) == 1
		&& task01(0, 0, 0, 0, 1, 0) == 60
		&& task01(0, 0, 0, 1, 0, 0) == 3600

		&& task01(1, 1, 1, 1, 1, 1) == 0
		&& task01(2, 2, 2, 1, 1, 1) == 3661
		&& task01(4, 4, 4, 3, 3, 3) == 3661
		&& task01(1, 3, 20, 1, 2, 30) == 50
		&& task01(0, 0, 1, 0, 0, 0) == 1
		&& task01(0, 1, 0, 0, 0, 0) == 60
		&& task01(1, 0, 0, 0, 0, 0) == 3600

		&& task01(-1, 1, 1, 1, 1, 1) == -1
		&& task01(1, -1, 1, 1, 1, 1) == -1
		&& task01(1, 1, -1, 1, 1, 1) == -1
		&& task01(1, 1, 1, -1, 1, 1) == -1
		&& task01(1, 1, 1, 1, -1, 1) == -1
		&& task01(1, 1, 1, 1, 1, -1) == -1

		;

	cout << "Task 01 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {

	bool result = task02(2002)
		&& task02(0)
		&& task02(1)
		&& task02(11)
		&& task02(111)
		&& task02(121)
		&& task02(1111)
		&& task02(9999)
		&& task02(9009)
		&& task02(9119)

		&& !task02(10)
		&& !task02(2008)
		&& !task02(9000)
		&& !task02(9900)
		&& !task02(9990)
		&& !task02(20)
		&& !task02(21)
		&& !task02(110)
		&& !task02(1110)

		&& !task02(-1)
		&& !task02(-1111)

		&& !task02(10000)
		&& !task02(99999);

	cout << "Task 02 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {

	bool result = task03(-1, 1) == 55
		&& task03(40, 2) == 24
		&& task03(0, 1) == 0
		&& task03(10, 0) == 0
		&& task03(1, 1) == 1
		&& task03(2, 1) == 2
		&& task03(2, 2) == 4
		&& task03(-2, 1) == 54
		&& task03(-2, 2) == 52
		&& task03(10, 1000) == 32
		&& task03(-10, 1000) == 24
		&& task03(-1000, 10) == 24
		&& task03(1000, 10) == 32

		&& task03(10, -1) == -1
		&& task03(-10, -1) == -1;

	cout << "Task 03 " << (result ? RIGHT : WRONG) << endl;
}

void testingTaskX() {

	bool result = taskX(10, 3, 2) == 8
		&& taskX(10, 2, 1) == 9
		&& taskX(10, 4, 2) == 4
		&& taskX(10, 5, 4) == 6
		&& taskX(10, 6, 5) == 5
		&& taskX(10, 7, 6) == 4
		&& taskX(10, 8, 7) == 3
		&& taskX(10, 9, 8) == 2
		&& taskX(10, 10, 9) == 1
		&& taskX(10, 6, 3) == 3
		&& taskX(10, 9, 3) == 2
		&& taskX(3, 2, 1) == 2
		&& taskX(100, 3, 2) == 98
		&& taskX(99, 100, 98) == 1
		&& taskX(4, 3, 2) == 2

		&& taskX(-4, 3, 2) == 0
		&& taskX(4, -3, 2) == 0
		&& taskX(4, 3, -2) == 0
		&& taskX(0, 3, 2) == 0
		&& taskX(4, 0, 2) == 0
		&& taskX(4, 3, 0) == 0
		&& taskX(4, 2, 3) == 0
		&& taskX(4, 3, 3) == 0
		&& taskX(2, 3, 2) == 0
		&& taskX(1, 3, 2) == 0;


	cout << "Task X  " << (result ? RIGHT : WRONG) << endl;
}