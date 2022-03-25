//#include <iostream>
//#include <ctime>
//#include "console.h"
//using namespace std;
//#define Len 1
//#define Xuong 2
//#define Trai 3
//#define Phai 4
//#define Tuong_Tren 2
//#define Tuong_Duoi 28
//#define Tuong_Trai 3
//#define Tuong_Phai 90
//
//struct ToaDo
//{
//	int x;
//	int y;
//};
//
//ToaDo ran[103];
//int Sodot = 3;
//
//void iMenu();
//void BangMucDo();
//void HuongDan();
//void Play();
//int ChucNang();
//int ChonDoKho(int);
//void Tuong();
//void Ransanmoi();
//void XuatRan(ToaDo);
//ToaDo Randichuyen(int);
//void DieuKhienRan(int &);
//bool KTthua();
//void Xulyneuthua();
//ToaDo HienthiMoi();
//bool XulyAnDuocMoi(ToaDo);
//void RanThemDot();
//
//void main()
//{
//	clrscr();
//	noCursorType();
//	setTextColor(13);
//	Tuong();
//	iMenu();
//	int t;
//	setTextColor(14);
//	gotoXY(30, 13);
//	cout << "Nhan so 1 roi enter de tiep tuc: ";
//	cin >> t;
//	while (t != 1)
//	{
//		clrscr();
//		setTextColor(12);
//		Tuong();
//		iMenu();
//		gotoXY(35, 13);
//		setTextColor(12);
//		cout << "Nhap sai, hay nhap lai : ";
//		cin >> t;
//	}
//	switch (t)
//	{
//		case 1:
//			clrscr();
//			Play();
//			break;
//	}
//	_getch();
//}
//
//
//void iMenu()
//{
//	setTextColor(14);
//	gotoXY(42, 8);
//	cout << "1. Play" << endl;
//}
//
//
//void HuongDan()
//{
//	setTextColor(10);
//	gotoXY(20, 4);
//	cout << "\tBang huong dan cach dieu khien che do choi." << endl;
//	gotoXY(10, 6);
//	cout << " _ Nhap 1 trong cac phim: w hoac W de di chuyen LEN" << endl;
//	gotoXY(10, 7);
//	cout << " _ Nhap 1 trong cac phim: a hoac A de di chuyen SANG TRAI" << endl;
//	gotoXY(10, 8);
//	cout << " _ Nhap 1 trong cac phim: s hoac A de di chuyen XUONG" << endl;
//	gotoXY(10, 9);
//	cout << " _ Nhap 1 trong cac phim: d hoac D de di chuyen SANG PHAI" << endl;
//	gotoXY(35, 24);
//	setTextColor(12);
//	cout << "SAU 4 GIAY SE MAT";
//}
//
//
//void Play()
//{
//	noCursorType();
//	setTextColor(13);
//	Tuong();
//	HuongDan();
//	Sleep(4000);
//	clrscr();
//	int k = ChucNang();
//	setTextColor(13);
//	Tuong();
//	Ransanmoi();
//	setTextColor(14);
//	ToaDo moi = HienthiMoi();
//	int Huong = Phai;
//	int x = 0, y = 0;
//	int diem = 0;
//	gotoXY(Tuong_Phai + 5, Tuong_Tren + 2);
//	cout << "Diem: " << diem;
//	while (true)
//	{
//		setTextColor(13);
//		ToaDo DotCuoi = Randichuyen(Huong);
//		XuatRan(DotCuoi);
//		DieuKhienRan(Huong);
//		setTextColor(14);
//		if (XulyAnDuocMoi(moi) == true)
//		{
//			moi = HienthiMoi();
//			RanThemDot();
//			diem++;
//			gotoXY(Tuong_Phai + 5, Tuong_Tren + 2);
//			cout << "DIEM: " << diem;
//		}
//		if (KTthua() == true)
//			break;
//		Sleep(k);
//	}
//	setTextColor(12);
//	Tuong();
//	Xulyneuthua();
//	setTextColor(14);
//	gotoXY(35, 9);
//	cout << "DIEM CUA BAN LA: " << diem << " Diem. ";
//}
//
//
//void BangMucDo()
//{
//	setTextColor(3);
//	gotoXY(30, 3);
//	cout << "Chon do kho tuong duong voi muc do: " << endl;
//	setTextColor(10);
//	gotoXY(12, 4);
//	cout << " _ 1: De" << endl;
//	setTextColor(14);
//	gotoXY(12, 5);
//	cout << " _ 2: Trung binh" << endl;
//	setTextColor(12);
//	gotoXY(12, 6);
//	cout << " _ 3: Kho" << endl;
//	setTextColor(11);
//}
//
//
//int ChucNang()
//{
//	setTextColor(13);
//	Tuong();
//	int n;
//	BangMucDo();
//	gotoXY(15, 8);
//	cout << "Muc do toi chon la: ";
//	cin >> n;
//	while (n < 1 || n > 3)
//	{
//		clrscr();
//		setTextColor(12);
//		Tuong();
//		BangMucDo();
//		gotoXY(15, 8);
//		setTextColor(12);
//		cout << "Nhap sai cap do, hay nhap lai: ";
//		cin >> n;
//	}
//	gotoXY(35, 13);
//	cout << "Hay cho trong giay lat." << endl;
//	Sleep(1000);
//	clrscr();
//	int k = ChonDoKho(n);
//	return k;
//}
//
//
//int ChonDoKho(int n)
//{
//	int k;
//	if (n == 1)
//		k = 320;
//	else if (n == 2)
//		k = 170;
//	else if (n == 3)
//		k = 100;
//	return k;
//}
//
//
//void DieuKhienRan(int &Huong)
//{
//	int p = inputKey();
//	if ((p == KEY_UP || p == 'w' || p == 'W') && Huong != Xuong)
//	{
//		Huong = Len;
//	}
//	else if ((p == KEY_LEFT || p == 'a' || p == 'A') && Huong != Phai)
//	{
//		Huong = Trai;
//	}
//	else if ((p == KEY_DOWN || p == 's' || p == 'S') && Huong != Len)
//	{
//		Huong = Xuong;
//	}
//	else if ((p == KEY_RIGHT || p == 'd' || p == 'D') && Huong != Trai)
//	{
//		Huong = Phai;
//	}
//}
//
//
//ToaDo Randichuyen(int Huong)
//{
//	ToaDo DotCuoi = ran[Sodot - 1];
//	for (int i = Sodot - 1; i >= 1; i--)
//	{
//		ran[i] = ran[i - 1];
//	}
//	switch (Huong)
//	{
//	case Len:
//		ran[0].y--;
//		break;
//	case Xuong:
//		ran[0].y++;
//		break;
//	case Trai:
//		ran[0].x--;
//		break;
//	case Phai:
//		ran[0].x++;
//		break;
//	}
//	return DotCuoi;
//}
//
//
//void XuatRan(ToaDo DotCuoi)
//{
//	setTextColor(9);
//	gotoXY(ran[0].x, ran[0].y);
//	cout << (char)233;
//	for (int i = 1; i < Sodot; i++)
//	{
//		setTextColor(11);
//		gotoXY(ran[i].x, ran[i].y);
//		cout << (char)232;
//	}
//	gotoXY(DotCuoi.x, DotCuoi.y);
//	cout << " ";
//}
//
//
//void Ransanmoi()
//{
//	ran[0].x = Tuong_Trai + 3;
//	ran[1].x = Tuong_Trai + 2;
//	ran[2].x = Tuong_Trai + 1;
//	ran[0].y = Tuong_Tren + 1;
//	ran[1].y = Tuong_Tren + 1;
//	ran[2].y = Tuong_Tren + 1;
//}
//
//
//void Tuong()
//{
//	for (int i = Tuong_Trai; i <= Tuong_Phai; i++)
//	{
//		gotoXY(i, Tuong_Tren);
//		cout << (char)220;
//	}
//
//	for (int i = Tuong_Trai; i <= Tuong_Phai; i++)
//	{
//		gotoXY(i, Tuong_Duoi);
//		cout << (char)223;
//	}
//
//	for (int j = Tuong_Tren + 1; j < Tuong_Duoi; j++)
//	{
//		gotoXY(Tuong_Trai, j);
//		cout << (char)221;
//	}
//
//	for (int j = Tuong_Tren + 1; j < Tuong_Duoi; j++)
//	{
//		gotoXY(Tuong_Phai, j);
//		cout << (char)222;
//	}
//}
//
//
//bool KTthua()
//{
//	if (ran[0].y == Tuong_Tren)
//		return true;
//	if (ran[0].y == Tuong_Duoi)
//		return true;
//	if (ran[0].x == Tuong_Trai)
//		return true;
//	if (ran[0].x == Tuong_Phai)
//		return true;
//	for (int i = 1; i <= Sodot - 1; i++)
//		if (ran[0].x == ran[i].x && ran[0].y == ran[i].y)
//			return true;
//}
//
//
//void Xulyneuthua()
//{
//	if (KTthua() == true)
//	{
//		Sleep(400);
//		clrscr();
//		setTextColor(12);
//		Tuong();
//		gotoXY(42, 8);
//		cout << "GAME OVER" << endl;
//	}
//}
//
//
//ToaDo HienthiMoi()
//{
//	srand(time(NULL));
//	int x = Tuong_Trai + 1 + rand() % (Tuong_Phai - Tuong_Trai - 1);
//	int y = Tuong_Tren + 1 + rand() % (Tuong_Duoi - Tuong_Tren - 1);
//	gotoXY(x, y);
//	cout << (char)233;
//	ToaDo temp;
//	temp.x = x;
//	temp.y = y;
//	return temp;
//}
//
//
//bool XulyAnDuocMoi(ToaDo moi)
//{
//	if (ran[0].x == moi.x && ran[0].y == moi.y)
//		return true;
//	else
//		return false;
//}
//
//
//void RanThemDot()
//{
//	Sodot++;
//	ran[Sodot] = ran[Sodot - 1];
//}



#include<iostream>
#include<iomanip>
#include<io.h>
#include<conio.h>
#include<concrt.h>
#include"console.h"
#include<ctime>
#include<string>
using namespace std;
#define Snake 250
#define moi 249
#define moito 5
#define topWall 2
#define botWall 20
#define leftWall 5
#define rightWall 55
#define Top 1
#define bot 2
#define left 3
#define right 4
struct XYsnake
{
	int xSnake;
	int ySnake;
};
int key;
int key1;
int giay = 0;
int tocdo = 300;
int somoi;
XYsnake MoiTo; // toa do moi to
XYsnake Moi; // toa do moi nho
XYsnake snake[100];
XYsnake snake2[100];// bien con ran 100 dot
XYsnake DotC;
XYsnake DotC2;
int Sodot = 3; //so dot dau tien ran 1
int Sodot2 = 3; // so dot dau tien ran 2
int huong = right; // huong bat dau la ben phai
int huong1 = left; // huong bat dau di chuyen ran 2 la ben trai
int flag = 1; //vo hieu hoa di chuyen
int flag2 = 0; // dung de thoat man hinh
int flag3 = 1; // vo hieu hoa di chuyen ran thu 2
int diem = 0; // diem so
int diem2 = 0;
int dem = 0;  //Dem so moi nho da an, tao moi to

void iWALL(); //tao tuong
void createSNAKE();
XYsnake iMove(XYsnake[], int, int&);
void inSnake(XYsnake[], XYsnake, int);
void Doichieu();
void vohieuhoaDiChuyen();
bool ktgameOver();
bool ktgameOver2(XYsnake[], XYsnake[], int, int);
void taoMoi();
void taoMoiTo();
void ktAnmoi(XYsnake[], int &);
void tinhDiem();
bool ktgameWin();
void playGame();
void giaodienGame();
void huongdan();
void hang();
void nguoilam();
int choilai();
void reset();
void taoran2();
void choi1nguoi();
void choi2nguoi();
int main()
{
	int flag1 = 1;
	do {
		clrscr();
		setTextColor(15);
		iWALL();
		setTextColor(13);
		giaodienGame();
		noCursorType(); // xoa con tro chuot
		key = _getch(); // nhap giao dien
		switch (key)
		{
		case 49: //(1)
			playGame();
			break;
		case 50: //(2)
			huongdan();
			break;
		case 51:
			hang();
			break;
		case 52:
			nguoilam();
			break;
		default:
			setTextColor(12);
			giaodienGame();
			Sleep(200);
		}
		if (key == 48)
			flag1 = 0;
	} while (flag1 != 0);
	noCursorType();
}
//////////////////////// Main
void huongdan()
{
	clrscr();
	int thoat;
	do {
		for (int i = 20; i <= 45; i++)
		{
			gotoXY(i, 6 - 1);
			cout << char(220);
			gotoXY(i, 16);
			cout << char(223);
		}
		for (int i = 6; i < 16; i++)
		{
			gotoXY(20, i);
			cout << char(221);
			gotoXY(45, i);
			cout << char(222);
		}
		gotoXY(21, 8);
		cout << "W :  len";
		gotoXY(21, 9);
		cout << "S :  Xuong";
		gotoXY(21, 10);
		cout << "A :  Qua trai";
		gotoXY(21, 11);
		cout << "D :  Qua phai";
		gotoXY(21, 12);
		cout << "Dung tuong : chet";
		gotoXY(21, 13);
		cout << "Can' than minh : chet";
		gotoXY(21, 14);
		cout << "Diem >= 100 : Win";
		gotoXY(30, 17);
		cout << "0. Thoat";
		thoat = _getch();
		noCursorType();
	} while (thoat != 48);
}
void hang()
{
	clrscr();
	int thoat;
	do {
		cout << "(None): Chua Cap Nhat\n";
		cout << "0. ESC";
		thoat = _getch();
	} while (thoat != 48);
}
void nguoilam()
{
	clrscr();
	int thoat;
	do {
		for (int i = 20; i <= 40; i++)
		{
			gotoXY(i, 6 - 1);
			cout << char(220);
			gotoXY(i, 16);
			cout << char(223);
		}
		for (int i = 6; i < 16; i++)
		{
			gotoXY(20, i);
			cout << char(221);
			gotoXY(40, i);
			cout << char(222);
		}
		gotoXY(24, 9);
		cout << "Le Cong Tien";
		gotoXY(24, 10);
		cout << "Le Vinh Tan";
		gotoXY(21, 15);
		cout << "0. ESC";
		thoat = _getch();
		noCursorType();
	} while (thoat != 48);
}
void tinhDiem()
{
	gotoXY(leftWall, botWall + 2);
	setTextColor(13);
	cout << "Diem So: " << diem;
}
void iWALL()
{
	for (int i = leftWall; i <= rightWall; i++)
	{
		gotoXY(i, topWall - 1);
		cout << char(220);
		gotoXY(i, botWall);
		cout << char(223);
	}
	for (int i = topWall; i < botWall; i++)
	{
		gotoXY(leftWall, i);
		cout << char(221);
		gotoXY(rightWall, i);
		cout << char(222);
	}

}
void createSNAKE()
{
	snake[0].ySnake = snake[1].ySnake = snake[2].ySnake = 9;
	snake[0].xSnake = 15;
	snake[1].xSnake = 14;
	snake[2].xSnake = 13;
	if (flag2 == 1)
		taoran2();
}
void taoran2()
{
	snake2[0].ySnake = snake2[1].ySnake = snake2[2].ySnake = 9;
	snake2[0].xSnake = 50;
	snake2[1].xSnake = 51;
	snake2[2].xSnake = 52;
}
// gan toa do cua ran
void inSnake(XYsnake x[], XYsnake y, int z)
{
	gotoXY(x[0].xSnake, x[0].ySnake);
	setTextColor(11);
	cout << char(254);
	for (int i = 1; i < z; i++)
	{
		gotoXY(x[i].xSnake, x[i].ySnake);
		cout << char(Snake);
	}
	gotoXY(y.xSnake, y.ySnake);
	cout << " ";
}
// hien thi ran ra
XYsnake iMove(XYsnake x[], int dotran, int &huongdichuyen)
{
	XYsnake y = x[dotran - 1];
	for (int i = dotran - 1; i>0; i--)
	{
		x[i] = x[i - 1];
	}
	switch (huongdichuyen)
	{
	case Top:
		x[0].ySnake--;
		break;
	case bot:
		x[0].ySnake++;
		break;
	case left:
		x[0].xSnake -= 1;
		break;
	case right:
		x[0].xSnake += 1;
		break;
	}
	return y;
}
//di chuyen ran
void Doichieu()
{
	if (flag == -1)
	{
		key = inputKey();
		if (key == 'w' || key == 'W')
			huong = Top;
		else if (key == 's' || key == 'S')
			huong = bot;
	}
	else
	{
		key = inputKey();
		if (key == 'a' || key == 'A')
			huong = left;
		else if (key == 'd' || key == 'D')
			huong = right;
	}
}
void Doichieu2()
{
	if (flag3 == -1)
	{
		key1 = inputKey();
		if (key == 1072)
			huong1 = Top;
		else if (key == 1080)
			huong1 = bot;
	}
	else
	{
		key1 = inputKey();
		if (key == 1075)
			huong1 = left;
		else if (key == 1077)
			huong1 = right;
	}
}
void vohieuhoaDiChuyen()
{
	if (huong == left || huong == right)
		flag = -1;
	else
		flag = 1;
}
void vohieuhoaDiChuyen2()
{
	if (huong1 == left || huong1 == right)
		flag3 = -1;
	else
		flag3 = 1;
}
bool ktgameOver()
{
	if (snake[0].xSnake == rightWall || snake[0].ySnake == botWall || snake[0].ySnake == topWall || snake[0].xSnake == leftWall)
		return true;
	for (int i = 1; i < Sodot; i++)
		if (snake[0].xSnake == snake[i].xSnake &&snake[0].ySnake == snake[i].ySnake)
			return true;
}
bool ktgameOver2(XYsnake x[], XYsnake y[], int dotrandau, int dotransau)
{
	if (x[0].xSnake == rightWall || x[0].ySnake == botWall || x[0].ySnake == topWall || x[0].xSnake == leftWall)
		return true;
	for (int i = 1; i < dotrandau; i++)
		if (x[0].xSnake == x[i].xSnake &&x[0].ySnake == x[i].ySnake)
			return true;
	for (int i = 0; i < dotransau; i++)
		if (x[0].xSnake == y[i].xSnake && x[0].ySnake == y[i].ySnake)
			return true;
	if (x[0].xSnake == y[0].xSnake && x[0].ySnake == y[0].ySnake)
		return true;
}
void taoMoiTo()
{
	if (dem == 5)
	{
		MoiTo.xSnake = (rightWall - 1) - rand() % (rightWall - leftWall - 1);
		MoiTo.ySnake = (botWall - 1) - rand() % (botWall - topWall - 1);
		for (int i = 0; i < Sodot; i++)
			if (MoiTo.xSnake == snake[i].xSnake && MoiTo.ySnake == snake[i].ySnake)
			{
				MoiTo.xSnake = (rightWall - 1) - rand() % (rightWall - leftWall - 1);
				MoiTo.ySnake = (botWall - 1) - rand() % (botWall - topWall - 1);
			}
		gotoXY(MoiTo.xSnake, MoiTo.ySnake);
		cout << char(moito);
		dem = 0;
	}
}
void taoMoi()
{

	Moi.xSnake = (rightWall - 1) - rand() % (rightWall - leftWall - 1);
	Moi.ySnake = (botWall - 1) - rand() % (botWall - topWall - 1);
	for (int i = 0; i < Sodot; i++)
		if (Moi.xSnake == snake[i].xSnake && Moi.ySnake == snake[i].ySnake)
		{
			Moi.xSnake = (rightWall - 1) - rand() % (rightWall - leftWall - 1);
			Moi.ySnake = (botWall - 1) - rand() % (botWall - topWall - 1);
		}
	gotoXY(Moi.xSnake, Moi.ySnake);
	cout << char(moi);

}
void taomoi2()
{
	Moi.xSnake = (rightWall - 1) - rand() % (rightWall - leftWall - 1);
	Moi.ySnake = (botWall - 1) - rand() % (botWall - topWall - 1);
	for (int i = 0; i < Sodot; i++)
		if (Moi.xSnake == snake[i].xSnake && Moi.ySnake == snake[i].ySnake && Moi.xSnake == snake2[i].xSnake && Moi.ySnake == snake2[i].ySnake)
		{
			Moi.xSnake = (rightWall - 1) - rand() % (rightWall - leftWall - 1);
			Moi.ySnake = (botWall - 1) - rand() % (botWall - topWall - 1);
		}
	for (int i = 0; i < Sodot2; i++)
		if (Moi.xSnake == snake[i].xSnake && Moi.ySnake == snake[i].ySnake && Moi.xSnake == snake2[i].xSnake && Moi.ySnake == snake2[i].ySnake)
		{
			Moi.xSnake = (rightWall - 1) - rand() % (rightWall - leftWall - 1);
			Moi.ySnake = (botWall - 1) - rand() % (botWall - topWall - 1);
		}
	gotoXY(Moi.xSnake, Moi.ySnake);
	cout << char(moi);

}
void ktAnmoi(XYsnake x[], int &dotran)
{
	if (x[0].xSnake == MoiTo.xSnake && x[0].ySnake == MoiTo.ySnake)
	{
		diem += 2;
		tocdo -= 5;
		dotran += 2;
	}
	else if (x[0].xSnake == Moi.xSnake && x[0].ySnake == Moi.ySnake)
	{
		setTextColor(8);
		taoMoi();
		dem++;
		diem++;
		tocdo -= 2;
		dotran++;
	}
}
bool ktgameWin()
{
	if (Sodot == 100)
		return true;
}
void playGame()
{
	int thoat;
	do
	{
		clrscr();
		setTextColor(15);
		iWALL();
		gotoXY(23, 9);
		cout << "1.Choi don";
		gotoXY(23, 10);
		cout << "2.Choi doi";
		gotoXY(23, 11);
		cout << "0.Thoat";
		thoat = _getch();
		switch (thoat)
		{
		case 49:
			choi1nguoi();
			break;
		case 50:
			flag2 = 1;
			somoi = 2;
			choi2nguoi();
			break;
		default:
			setTextColor(12);
			iWALL();
			break;
		}
	} while (thoat == 48);
}
// xet choi lai
int choilai()
{
	clrscr();
	setTextColor(15);
	iWALL();
	gotoXY(23, 9);
	cout << "Diem So: " << diem;
	gotoXY(23, 10);
	cout << "1.Choi lai\n";
	gotoXY(23, 11);
	cout << "0.Thoat.";
	int thoat;
	thoat = _getch();
	reset();
	if (thoat == 49)
		return 1;
	return 0;
}
void giaodienGame()
{
	gotoXY(22, 8);
	cout << "1. Choi\n";
	gotoXY(22, 9);
	cout << "2. Huong Dan\n";
	gotoXY(22, 10);
	cout << "3. Hang\n";
	gotoXY(22, 11);
	cout << "4. Nguoi lam\n";
	gotoXY(22, 12);
	cout << "0. ESC\n";
}
void reset()
{
	if (flag2 = 1)
	{
		Sodot2 = 3;
		Sodot = 3;
	}
	else
	{
		tocdo = 250;
		Sodot = 3;
		diem = 0;
		flag = 1;
	}
}
void choi1nguoi()
{
	do
	{
		clrscr();
		srand(time(NULL));
		setTextColor(4);
		iWALL();
		createSNAKE();
		setTextColor(8);
		taoMoi();
		huong = right;
		while (ktgameOver() != true && ktgameWin() != true)
		{
			XYsnake DotC = iMove(snake, Sodot, huong);
			setTextColor(2);
			inSnake(snake, DotC, Sodot);
			Doichieu();
			vohieuhoaDiChuyen();
			ktAnmoi(snake, Sodot);
			setTextColor(6);
			taoMoiTo();
			tinhDiem();
			Sleep(tocdo);
			if (key == 13)
				break;
			noCursorType();
		}
		gotoXY(23, 10);
		if (ktgameWin() == true || key == 13)
			cout << "Thang roi WINNER!!!";
		else
			cout << "Game Over";
		Sleep(700);
		clrscr();
	} while (choilai() != 0); // neu sai thi tro lai man hinh chinh
}
void choi2nguoi()
{
	do
	{
		clrscr();
		srand(time(NULL));
		setTextColor(4);
		iWALL();
		createSNAKE();
		setTextColor(8);
		taoMoi();
		huong = right;
		huong1 = left;
		while (ktgameOver2(snake, snake2, Sodot, Sodot2) != true && ktgameOver2(snake2, snake, Sodot2, Sodot) != true)
		{
			XYsnake DotC = iMove(snake, Sodot, huong);
			Doichieu();
			XYsnake DotC2 = iMove(snake2, Sodot2, huong1);
			Doichieu2();
			setTextColor(2);
			inSnake(snake, DotC, Sodot);
			inSnake(snake2, DotC2, Sodot2);
			vohieuhoaDiChuyen();
			vohieuhoaDiChuyen2();
			ktAnmoi(snake, Sodot);
			ktAnmoi(snake2, Sodot2);
			setTextColor(6);
			taoMoiTo();
			Sleep(150);
			noCursorType();
		}
		gotoXY(23, 10);
		if (ktgameOver2(snake, snake2, Sodot, Sodot2) == true)
			cout << "WINNER!!! Player 2";
		else
			cout << "WINNER!!! Player 1";
		Sleep(1000);
		clrscr();
	} while (choilai() != 0); // neu sai thi tro lai man hinh chinh
}

