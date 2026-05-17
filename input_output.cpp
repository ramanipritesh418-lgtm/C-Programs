// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     cout<<"Enterd number is:"<<n;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int num=1000;
// int main()
// {
//     int num=10;
//     cout<<::num;
//     return 0;
// }


#include<iostream>
using namespace std;
namespace first{
void show()
{
    cout<<"Cpp is best.\n";
}
}
namespace second{
    void show()
{
    cout<<"Cpp is best.";
}
}
int main()
{
    first::show();
    
    return 0;
}


