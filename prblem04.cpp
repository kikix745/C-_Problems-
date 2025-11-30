#include <iostream>
using namespace std;

float totalsales()
{
    float totalsales;
    cout<<"enter your totalsales";
    cin>>totalsales;
    return totalsales;
}

float commission(float totalsales){
    if ( totalsales>1000000)
    {
       return  totalsales*0.1;
    }else if (totalsales>=500000)
    {
        return  totalsales*0.2;
    }else if (totalsales>=100000)
    {
         return  totalsales*0.3;
    }else if (totalsales>=50000)
    {
         return  totalsales*0.5;
    }else 
    {
        return 0;
    };
    
}

void print_result(float X){

    cout<<"the result is "<<X<<endl;
}


int main(){

print_result(commission(totalsales()));


}