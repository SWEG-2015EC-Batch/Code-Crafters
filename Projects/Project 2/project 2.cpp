/*
Developed by CODE-CRAFTERS
1.Yared Abebe ETS1378/15
2.Yared Habtamu ETS1379/15
3.Yared Wondatir ETS1375/15
4.Yared Deribe ETS1374/15
5.Yared Dereje ETS1372/15
*/
#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,k,s,y;
	cout << "Enter the number between 0 & 9:";
	cin >> n;

	for (i = n; i >= n; i--)
	{
		for (j = 0; j <= i;j++)
			cout << " " << j;
		for (k = i-1;k >= 0;k--)
			cout << " " << k;
		cout << endl;
	}

	for (i = n - 1; i >= 0; i--)
	{
		for (j = 0; j <= i;j++)
			cout << " " << j;
		for (s = n - 1;s >= i;s--)
			cout << "  ";
		for (y = i;y < n - 1;y++)
			cout << "  ";
		for (k = i;k >= 0;k--)
			cout << " " << k;
		cout << endl;
	}

	for (i = 1;i <= n-1;i++)
	{
		for (j = 0;j <= i;j++)
			cout << " " << j;
		for (s = n;s > i;s--)
			cout << "  ";
		for (y = i;y <= n-2;y++)
			cout << "  ";
		for (k = i;k >= 0;k--)
			cout << " " << k;
		cout<<endl;
	}

	for (i = n; i >= n; i--)
	{
		for (j = 0; j <= i;j++)
			cout << " " << j;
		for (k = i - 1;k >= 0;k--)
			cout << " " << k;
		cout << endl;
	}
	return 0;
}

