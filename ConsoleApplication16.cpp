#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
using namespace std;
std::string intstring(int z)
{
	int m = z;
	char tt[10];
	sprintf_s(tt, "%d", m);
	std::string s(tt);//c[i]=s
	return s;
}
char stringtchar(std::string f)
{
	std::string str = f;
	const char* p = str.data();
	return *p;
}
int intlong(int u)
{
	int len = 0;        
	for (; u > 0; ++len)   
		u /= 10;	  
	return len;
}
int chaiint(int w, int v)//w:要拆的数,v:要取的数组位数
{
	int n = intlong(w);
	int number = w;
	//int x[100];
	vector<int>x(n+1);
	for (int i = n; i > 0; i--) {
		x[i] = number % 10;//放入数组a【i】
		number = number / 10;
	}
	return x[v];
}
int main()
{
	using namespace std;
	int a[]{ 3,321,312312,3};
	int b[]{ 5 };
	int ac = sizeof(a) / sizeof(a[0]);
	int bc = sizeof(b) / sizeof(b[0]);
	int acbc = ac + bc;//6
	vector<int>c(acbc);
	for (int i = 0; i < ac; i++)//1次
	{
		c[i] = a[i];
	}
	for (int i = 0; i < bc; i++)
	{
		c[ac + i] = b[i];
	}
	int t{ 0 };
	vector<int>temp;
	for (int v = 0; v < acbc; v++)//0011
	{
		for (int q = 1; q < (intchang(c[v]) + 1); q++)//1212
		{
			//temp[t] = chaiint(c[v], q);
			temp.push_back(chaiint(c[v], q));
			t++;//0123
		}
	}
	vector<char>ttemp(t);
	for (int v = 0; v < t; v++)//0123
	{
		ttemp[v] = strar(inting(temp[v]));
		cout << ttemp[v];
	}
}
//char+char
/*int main()
{
	using namespace std;
	char a[]{ "1" };
	char b[]{ "2" };
	int aa = (sizeof(a) / sizeof(a[0]));// + (sizeof(b) / sizeof(a[0]));
	int bb = (sizeof(b) / sizeof(b[0]));// + (sizeof(b) / sizeof(a[0]));
	int ab = aa + bb;
	vector<char>f(ab);
	for (int i = 0; i < aa; i++)//1次
	{
		f[i] = a[i];
	}
	for (int i = 0; i < bb; i++)
	{
		f[aa + i] = b[i];
	}
	for (int i = 0; i < ab; i++)
	{
		cout << f[i];
	}
	return 114514;
}*/
