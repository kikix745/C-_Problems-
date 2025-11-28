#include <iostream>
using namespace std;

int read1(){
    int num1;
    cout<<"enter first number "<<endl;
    cin>>num1;
    return(num1);
}

int read2(){
    int num2;
    cout<<"enter second number "<<endl;
    cin>>num2;
    return(num2);
}
int max_number(int num1,int num2){
    if (num1>num2)
    {
        return num1;
    }else{
        return num2;
    }
}
void print_result(int number){

    cout<<"the max of these two numbers is "<<number<<endl;
}

int main(){

print_result(max_number(read2(),read1()));

}
