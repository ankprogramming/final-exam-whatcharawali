#include <iostream>
using namespace std;

int main() {
    int a,b,cmd,result_1,result_2,result_3,result_4;
    cout << "Welcome to CLL Calculator V1.00" << endl;
    cout << "Number 1 : ";
    cin >> a;
    cout << "Number 2 : ";
    cin >> b;
    do{
        cout << "menu\n1.+\n2.-\n3.*\n4/\n5.quit" << endl;
        cin >> cmd;
    if(cmd==1){
        result_1=a+b;
        cout << "Result = " << result_1 << endl;
    }else if (cmd==2){
         result_2=a-b;
        cout << "Result = " << result_2 << endl;
    }else if (cmd==3){
         result_2=a*b;
        cout << "Result = " << result_3 << endl;
    }else if (cmd==4){
         result_2=a/b;
        cout << "Result = " << result_4 << endl;
    } {break;}
    }while(1);
    return 0;
}
