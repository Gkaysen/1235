// low001.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CTestCopy
{
	int x;
	int y;
public:
	void setXY(int a, int b)
	{
		x = a;
		y = b;
	}
	void display()
	{
		cout = "x=" << x << "y=" << y << endl;
	
	}
};


int main()
{
	CTestCopy ocpy;
	ocpy.display();
	ocpy.setXY(100, 230);
	ocpy.display();
    return 0;
}

