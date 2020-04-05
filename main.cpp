#include <iostream> 
std::cout << std::endl;
int main() 
{
for(int i=1; i<101; ++i)
{
    if(i%3==0) cout<<"Fizz";
    if(i%5==0) cout<<"Buzz";
    if(i%3!=0 && i%5!=0) cout<<"FizzBuzz";
    cout<<endl;
}
}
