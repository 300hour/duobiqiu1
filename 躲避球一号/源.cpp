#include<graphics.h>
#include<conio.h>
void main() {
	initgraph(980, 580);
	int x = 490, y = 500;				//�������ĵ�
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
		case 'a':if (x >= 30)x -= 3; break;		//���ƶ�,�߽�Ϊ0+30
		case 'd':if (x <= 950) x += 3; break;		//���ƶ����߽�Ϊ980-30
		case 'w':if (y >= 30) y -= 3; break;		//���ƶ�
		case 's':if (y <= 550) y += 3; break;		//���ƶ�
		case 27: break;
		}
		setcolor(YELLOW);
		setfillcolor(GREEN);
		fillcircle(x, y, 30);
		Sleep(1);
	}
	closegraph();
}