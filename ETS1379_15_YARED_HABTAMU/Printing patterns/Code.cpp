#include<iostream>
using namespace std;
int main()
{
    int i, j, num;
    char n, m;
    cout << "Enter the number :";
    cin >> num;


    int column = 0;
    for (int i = 10; i <= 49; i++)
    {
        cout << i << " ";                       // 1 upto 49
        column++;
        if (column == 10) {
           cout <<endl;
            column = 0;
        }
    }

    cout << endl;

    for (int i = 1; i <= num; i++)                               //i is for raws and j&k are for columuns
    {
        for (int j = 1; j <= num; j++) {      //full rectangle
            cout << " * ";
        }
        cout << endl;
    }

    cout << endl;

    for (j = 1;j <= num;j++) {
        cout << "* ";
    }
    cout << endl;
    for (i = 1; i <= num;i++)                        //Hollow rectangle
    {
        for (j = 1; j <= num;j++) {

            if (j == 1  j == num)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }

    for (j = 1;j <= num;j++) {
        cout << "* ";
    }
    cout << endl;

    cout << endl;

    for (i = 0;i < num;++i)
    {
        for (j = 0;j <= i;++j)         //right triangle
        {
            cout << '*';
        }
        cout << endl;
    }

    cout << endl;

    for (i = num;i >= 1;--i)
    {
        for (j = i;j >= 1;--j)             //inverted right triangle
        {
            cout << '*';
        }

        cout << endl;

    }

    cout << endl;

    for (int i = 1; i <= num; i++)                   //Full pyramid
    {
        for (int j = i;j < num;j++)
        {
            cout << "   ";
        }
        for (int k = 1;k < (i * 2);k++) {
            cout << " * ";
        }
        cout << endl;
    }

    cout << endl;


    for (int i = 0; i < num; i++)
    {
        for (int j = i;j < num;j++)                                  //  Hollow pyramid triangle
        {
            cout << "   ";
        }
        for (int k = 0;k <= (i * 2);k++)
        {
            if (k == 0  k == (i * 2))
            {
                cout << " * ";
            }
            else
                cout << "   ";
        }
        cout << endl;
    }

    for (int z = 1;z <= (num * 2) + 1;z++)
    {
        cout << " * ";
    }

    cout << endl;
    cout << endl;
    for (int i = num; i >= 1; i--)      //i is for raws and j&k are for columuns
    {
        for (int j = num;j > i;j--)
        {                                             //Inverted full pyramid
            cout << " ";
        }
        for (int k = 1;k < (i * 2);k++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
  
    cout << endl;

    for (j = 1;j <= num + 1;j++)
    {
        cout << "*";
    }
    cout << endl;

    for (i = num;i >= 1;--i)
    {
        for (j = i;j >= 1;--j)             //inverted hollow right triangle
        {
            if (j == i || j == 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }

        cout << endl;

        cout << endl;

        for (n = 'A';n <= 'E';n++)
        {
            for (m = 'A';m <= n;m++)                //  A  AB  ABC...
                cout << m;
            cout << endl;

        }

        cout << endl;
        for (n = 'a';n <= 'e';n++)
        {
            for (m = 'a';m <= 'e';m++) {         //abcde
                cout << m;
            }
            cout << endl;
        }


        for (i = 1;i <= num;i++)
        {
            for (j = 1;j <= i;j++)                  // 1 12 123 ...
                cout << j;
            cout << endl;
        }

        cout << endl;

        for (i = 1;i <= 5;i++)
        {                                            //12345
            for (j = 1;j <= 5;j++) {
                cout << j;
            }
            cout << endl;
        }
        cout << endl;

int columun = 0;
        for (n = 'A';n <= 'X'; n++)
        {
            cout << n << " ";
            columun++;                                   //From A to X in 6 columun
            if (columun == 6) {
                cout << endl;
                columun = 0;
            }
        }

        cout << endl;

        for (i = 1;i <= num;i++)
        {
            for (j = 1;j <= num - i;j++)            // Inverted number list
                cout << " ";
            for (int k = i;k >= 1;k--)
                cout << k;
            cout << endl;
        }
  
        return 0;
}
