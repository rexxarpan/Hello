#include <iostream> 
using namespace std;
int main() 
{
for(int i = 1; i < maxNumber; ++i)
{
    if(i%3==0) cout<<"Fizz";
    if(i%5==0) cout<<"Buzz";
    if(i%3!=0 && i%5!=0) cout<<"FizzBuzz";
    cout<<endl;
}
}
