
#include<iostream>
#define N 100
using namespace std;

void transpose(int A[N][N],int no_rows,int no_col)
{
    int big,small;
    if(no_rows>no_col)
    {
        big=no_rows;small=no_col;
    }
    else
    {
        big=no_col;small=no_rows;
    }

    for(int i=0;i<small;i++)
    {
        for(int j=0;j<big;j++)
        {
            if(i>j)
                continue;
            else
            {
                int temp;
                temp=A[i][j];
                A[i][j]=A[j][i];
                A[j][i]=temp;
            }
        }
    }
}

int main()
{
    int no_rows,no_c;
    int tempsize,count=1;

    cout<<"\nRows & Col";
    cin>>no_rows>>no_c;

    int A[N][N];

    for(int i=0;i<no_rows;i++)
    {
        for(int j=0;j<no_c;j++)
            A[i][j]=count++;
    }
    for(int i=0;i<no_rows;i++)
    {
        for(int j=0;j<no_c;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    transpose(A,no_rows,no_c);
    for(int i=0;i<no_c;i++)
    {
        for(int j=0;j<no_rows;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
   
}
