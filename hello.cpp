#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Hello Newton. This is your first line of code in C++" << endl;
    typedef string newname;

    newname my_name = "Newton";
    my_name.pop_back();
    string bi;
    getline(cin,bi);
    cout << my_name << endl;
    my_name.push_back('.');
    cout << my_name << endl;
    bi.resize(3);
    cout << bi << endl;
    cout <<bi.length() <<endl;
    cout <<bi.capacity() <<endl;
    cout << my_name.capacity() <<endl;
    cout << my_name.length() <<endl;
    int a = 9;
    int b = 283;
    int add = 0;
    return 0;
}
int Add(int a, int b){
    int add = a + b;
    return add;
}