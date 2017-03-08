#include <iostream>
#include <stdlib.h>

using namespace std;

void markingStar(int line, char **map, int x, int y);

int main(void)
{
	int input = 0;

	cin >> input;

	char** starMap;

	starMap = (char **)malloc(sizeof(char*)*input);
	for (int i = 0; i < input; i++){
		starMap[i] = (char *)malloc(sizeof(char)*(2 * input - 1));
	}
	for (int i = 0; i < input; i++){
		for (int j = 0; j < 2 * input - 1; j++){
			starMap[i][j] = ' ';
		}
	}
	markingStar(input, starMap, 0, input-1);

	for (int i = 0; i < input; i++){
		for (int j = 0; j < 2 * input - 1; j++){
			cout << starMap[i][j];
		}
		cout << endl;
	}

	free(starMap);
	return 0;
}

void markingStar(int line, char **map, int x, int y)
{
	if (line == 3){
		map[x][y] = '*';
		map[x + 1][y - 1] = '*';
		map[x + 1][y + 1] = '*';
		map[x + 2][y - 2] = '*';
		map[x + 2][y - 1] = '*';
		map[x + 2][y] = '*';
		map[x + 2][y + 1] = '*';
		map[x + 2][y + 2] = '*';
		return;
	}
	else
	{
		markingStar(line / 2, map, x, y);
		markingStar(line / 2, map, x + line / 2, y - line / 2);
		markingStar(line / 2, map, x + line / 2, y + line / 2);
		return;
	}
}