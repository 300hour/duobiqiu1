#include<graphics.h>
#include<conio.h>
void main() {
	initgraph(980, 580);
	int x = 490, y = 500;				//设置中心点
	setcolor(YELLOW);
	setfillcolor(GREEN);
	fillcircle(x, y, 30);
	char c = 0;
	while (c != 27) {

		c = _getch();
		setcolor(BLACK);
		setfillcolor(BLACK);
		fillcircle(x, y, 30);
		switch (c) {
		case 'a':if (x >= 30)x -= 3; break;		//左移动,边界为0+30
		case 'd':if (x <= 950) x += 3; break;		//右移动，边界为980-30
		case 'w':if (y >= 30) y -= 3; break;		//上移动
		case 's':if (y <= 550) y += 3; break;		//下移动
		case 27: break;
		}
		setcolor(YELLOW);
		setfillcolor(GREEN);
		fillcircle(x, y, 30);
		Sleep(1);
	}
	closegraph();
}