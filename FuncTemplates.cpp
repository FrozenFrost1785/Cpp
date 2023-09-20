/*#include<iostream>
using namespace std;
int max(int x,int y);   //returns only int values
int main()
{   
    cout<<max(12,15)<<"\n";
    return 0;
}
int max(int x,int y)
{
    return (x>y) ? x : y;
}*/

#include<iostream>
using namespace std;
template <typename T,typename U>
auto max(T x,U y)   //works for any data type but no two data types work together so for that
{
    return (x>y) ? x : y;
}
int main()
{   
    cout<<max(13.5,12)<<"\n";
    return 0;
}