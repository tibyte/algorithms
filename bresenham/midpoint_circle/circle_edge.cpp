/*
http://tibyte.kr/253
*/


#include <bits/stdc++.h>

const int SIZE = 28;

void drawCircle(int arr[SIZE][SIZE], int r, int x, int y);
void display(int arr[SIZE][SIZE]);

int main(void)
{	
	int arr[SIZE][SIZE] = {0,};
	
	drawCircle(arr, 11, 13, 13);
	display(arr);
	
	return 0; 
}


void drawCircle(int arr[SIZE][SIZE], int r, int cx, int cy)
{
	int x, y;
	int p;
	
	x = 0;
	y = r;
	p = 1 - r; 
	
	arr[y+cy][x+cx] = 1;
	arr[-y+cy][x+cx] = 1;
	arr[x+cy][y+cx] = 1;
	arr[x+cy][-y+cx] = 1;

	++x;
	while(x < y) {
		if(p < 0) {
			p += x+x + 1;
		}
		else {
			p += x+x -y-y + 1;
			--y;
		}
		
		arr[y+cy][x+cx] = 1;
		arr[-y+cy][x+cx] = 1;
		arr[y+cy][-x+cx] = 1;
		arr[-y+cy][-x+cx] = 1;
		arr[x+cy][y+cx] = 1;
		arr[-x+cy][y+cx] = 1;
		arr[x+cy][-y+cx] = 1;
		arr[-x+cy][-y+cx] = 1;
		
		++x; 
	}
}


void display(int arr[SIZE][SIZE])
{	
	for(int i=0; i<SIZE; i++) {
		for(int j=0; j<SIZE; j++) {
			if(arr[i][j])
				printf("��");
			else
				printf("��");
		}
		printf("\n");
	}
}