#include<iostream>
#include<math.h>

using namespace std;

/*
Write a program to calculate mean, variance and standard deviation.
*/

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    float mean=sum/n;
    float var=0;
    for(int i=0;i<5;i++)
    {
        var+=pow(arr[i]-mean,2);
    }
    var=var/5;
    float sd=sqrt(var);
    cout<<mean<<endl;
    cout<<var<<endl;
    cout<<sd;
    return 0;
}
