#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X,Y; //X:number of rows, Y: number of columns
    X = Y = 10; //assuming 10X10 matrix

    int NumWays[X][Y]; //declare the NumWays matrix
    NumWays[0][0] = 1;
    // initialize first row of NumWays matrix
    for(int j = 1; j <= Y-1; j++)
        NumWays[0][j] = 1;
    //Initialize first column of NumWays Matrix
    for(int i = 1; i <= X-1; i++)
        NumWays[i][0] = 1;
    //This bottom-up approach ensures that all the sub-problems needed
    // have already been calculated.
    for(int i = 1; i <= X-1; i++)
    {
        for(int j = 1; j <= Y-1; j++)
        {
            //Calculate number of ways visiting (i,j) using the
            //recurrence relation discussed above
            NumWays[i][j] = NumWays[i-1][j] + NumWays[i][j-1];
        }
    }

    cout<<"Number of ways from(0,0) to (X,Y) is "<<NumWays[X-1][Y-1];
    return 0;
}
