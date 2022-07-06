#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;
char str[100];
int x = 1, y = 1;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
char map[4] = { 'L', 'R', 'U', 'D' };

int main(void) {
    scanf(" %d ", &n);
    gets_s(str);

    for (int i = 0; i < strlen(str); i++) {
        char move = str[i];

        int nx = -1, ny = -1;
        for (int j = 0; j < 4; j++) {
            if (move == map[j]) {
                nx = x + dx[j];
                ny = y + dy[j];
            }
        }

        if (nx < 1 || ny < 1 || nx > n || ny > n) 
            continue;

        x = nx;
        y = ny;
    }
    printf("%d %d", x, y);
    return 0;
}