#include"libOne.h"
void gmain() {
	window(800, 450);
	for (int j = 0; j < 9; j++) {
		for (int i = 0; i < 16; i++) {
			if ((j + i) % 2 == 0)fill(0);
			else fill(0, 100, 0);
			rect(50 * i, 50 * j, 50, 50);
		}
	}
	pause();
}