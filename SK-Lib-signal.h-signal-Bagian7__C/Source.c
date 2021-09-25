#include <signal.h>
#include <stdio.h>
#include <conio.h>

/*
	Source by CPPReference
	Modified For Learn by RK
	I.D.E : VS2019
*/

volatile sig_atomic_t gSignalStatus;

void signal_handler(int signal) {
	gSignalStatus = signal;
}

int main(void) {
	signal(SIGINT, signal_handler);

	printf("SignalValue: %d\n", gSignalStatus);
	printf("Sending signal: %d\n", SIGINT);
	raise(SIGINT);
	printf("SignalValue: %d\n", gSignalStatus);

	_getch();
	return 0;
}