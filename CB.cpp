/*Optimus is very active in every aspect but is a little lazy due to which he's a tad fatter than others of his class. One day he has to meet a special person on the top floor of the building. He goes to the top floor on lift. While he's with that special person, his friends cut off the power supply to the lift. Optimus was forced to come down the stairs. But the stairs are not arranged properly.The stairs have a special property i.e., each stair can be pulled apart from it's place swapped with any other stair. The stairs are denoted by some random numbers. Optimus's task is to:

Given the vlaues n stairs, he needs to arrange them in non-increasing order one by one. Each stair needs to be placed just at the end of the stair that's one level above it.

Example:

let the stair numbers be: 5 4 3 2 1

Optimus needs to arrange them as:

      5
       |
        4
         |
          3
           |
            2
             |
              1



Help Optimus order the stairs.

Input:

first line consists of no of testcases(t)

for each testcase there will be 2 lines

first line consists of no of stairs(n)

next line consists of n stair numbers given within spaces



Output:

pattern of arranged steps

Constraints:

1<=t<=15

1<=n<=100

1<=a[i]<=1000000



program::*/

#include <bits/stdc++.h>
using namespace std;
int no(long int);
int main()
{
     long int tc;
     cin>>tc;
     while(tc--)
     {
         long int n,*a,i,j,k,*b;
         cin>>n;
         a=(long int *)malloc(n*sizeof(long int));
         for(i=0;i<n;i++)
            cin>>a[i];
         sort(a,a+n);
            long long int sum=0;
             for(i=0;i<2*(n-1)+1;i++)
             {
                 for(j=0;j<sum;j++)
                    cout<<" ";
                 if(i%2==0)
                 {

                     int x=n-int(i/2)-1;

                  cout<<a[x];
                  sum=sum+no(a[x]);
                 }
             else
             {
                cout<<"|";
                sum=sum+1;
             }
             cout<<endl;
             }

     }
     return 0;
}
int no(long int v)
{
  int  r = (v >= 1000000000) ? 10 : (v >= 100000000) ? 9 : (v >= 10000000) ? 8 :
    (v >= 1000000) ? 7 : (v >= 100000) ? 6 : (v >= 10000) ? 5 :
    (v >= 1000) ? 4 : (v >= 100) ? 3 : (v >= 10) ? 2 : 1;
    return r;
}
