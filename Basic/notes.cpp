/*count total no of notes in given amount - 1552
	500 - 3
	200- 0
	100- 0
	50 - 1
	10 - 0
	5 - 0
	1 - 2

n500 , n200 , n100=0;

1552/500 = 3

1552 - 500*3 = 52

52/50 = 1

52-50*1 = 2

*/

#include<iostream>
using namespace std;

int main()
{

    int n500,n200,n100,n50,n20,n10,n1;
    n500=n200=n100=n50=n20=n10=n1=0;

    int n;
    cout<<"Enter Ruppess: "<<endl;
    cin>>n;

    if(n>=500)
    {
        n500=n/500;
        n=n%500;
    }
    if(n>=100)
    {
        n100=n/100;
        n=n%100;
    }
    if(n>=50)
    {
        n50=n/50;
        n=n%50;
    }

    cout<<"500 notes = "<<n500<<endl;
    cout<<"100 notes = "<<n100<<endl;
    cout<<"50 notes = "<<n50<<endl;
}