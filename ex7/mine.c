#include <stdio.h>

int main(int argc, char *argv[]) {
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char inital = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";

    first_name[3] = 'c';

	printf("You are %d miles away.\n", distance);
	printf("You have %f powers.\n", power);
	printf("You have %f awesome super powers.\n", super_power);
	printf("Your initial is %c.\n", inital);
	printf("You're last name is %s\n", first_name);
	printf("You're last name is %s.\n", last_name-4);

	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

    // Long Format
	unsigned long universe_of_defects = 1L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 8;
	printf("Universe has %ld bugs.\n", universe_of_defects);

	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n", expected_bugs);

	double part_of_universe = expected_bugs / universe_of_defects;
    // Lo ponemos en notacion cientifica mediante %e
	printf("This is only a %e portion of the universe.\n", part_of_universe);

	// this makes no sense, just a demo of something weird
	// char nul_byte = '\0'; // Esto es un null bytes
	// int care_percentage = bugs * nul_byte;
    // ojo que aqui el % se introduce tal que '%%'
	// printf("Which means you should care %d%% but null its %s or even %c.\n", care_percentage, nul_byte, nul_byte);

	return 0;
}