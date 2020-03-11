/*
 * main.cpp
 *
 *  Created on: Mar 11, 2020
 *      Author: serbay.ozkan
 */

#include "CppUTest/CommandLineTestRunner.h"

int main(void)
{
	const char * av_override[] = { "exe", "-v" };

	CommandLineTestRunner::RunAllTests(2, av_override);

	return 0;
}
