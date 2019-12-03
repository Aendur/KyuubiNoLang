#include <stdio.h>

void printvec(int vec[3], int n) {
	for(int i = 0; i < n; ++i) {
		printf("%d ", vec[i]);
	}
	printf("\n");
}

void changevec(int vec[3]) {
	vec[0] = 5;
	vec[1] = 6;
	vec[2] = 7;
}


int main() {
	int vec[3] = {1, 2, 3};
	printvec(vec, 3);
	changevec(vec);
	printvec(vec, 3);
}
