#include <stdio.h>

char map[50][50];

int main(void)
{
	int M, N;
	scanf("%d %d\n", &M, &N);

	for (int i = 0; i < M; i++) {
		for (int j = 0; j <= N; j++) {
			char temp;
			if (i == M - 1 && j == N)break;
			temp = getchar();
			if (temp == 'B' || temp == 'W') {
				map[i][j] = temp;
			}
			
		}
	}

	int min = 32;

	for (int i = 0; i < M-7; i++) {
		for (int j = 0; j < N-7; j++) {
			char color = map[i][j];
			int change_O = 0;
			int change_X = 0;
			int local_min = 0;
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 8; l++) {
					if ((k + l) % 2 == 0) {
						if (map[i + k][j + l] == color)change_X++;
						else change_O++;
					}
					else {
						if (map[i + k][j + l] == color)change_O++;
						else change_X++;
					}
					if (change_O > change_X)local_min = change_X;
					else local_min = change_O;
				}
				if (local_min > min)break;
			}
			if (local_min < min)min = local_min;
		}
	}
	printf("%d", min);


	return 0;
}