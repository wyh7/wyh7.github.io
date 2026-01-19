#include<iostream>
#include<string>
using namespace std;
int main()
{
    char str[3];
    std::cin>>str;

    string temp;
// [1,2,3]
    for(int i=1;i<3;i++){
        std::cout<<str[i];
        temp = str[0]+str[i];
        std::cout<<temp;
        // temp = str[i]+str[i+1];
        cout<<temp;
    }

    std::cout<<str;

    
} // namespace std  