#include<iostream>
using namespace std;



int main(){
    int a;
    int b;
    int tmp;
    cout << "1つめの数字を入力" << endl;
    cin >> a;
    cout << "2つめの数字を入力" << endl;
    cin >> b;

    //
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }
    
    int r; //余りを格納 
    r = a%b;
    while(r!=0){
        a = b;
        b = r;
        r = a%b;
    }
    
    cout << "最大公約数は[" << b << "]である" <<endl;
}   