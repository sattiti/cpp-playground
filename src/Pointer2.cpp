#include <iostream>

using namespace std;

void changeToShohwa(int x){
    if(1926 < x && x < 1989){
        cout << "1: x = " << x << endl;
        x -= 1925;
        cout << "2: x = " << x << endl;
    }
    else{
        x = 0;
        cout << "3: x = " << x << endl;
    }
}

void change2ShohwaByPointer(int *p){
    if(1926 < *p && *p < 1989){
        cout << "1: *p = " << *p << endl;
        *p -= 1925;
        cout << "2: *p = " << *p << endl;
    }
    else{
        *p = 0;
        cout << "3: *p = " << *p << endl;
    }
}

void shohwa(){
    int nYear;
    
    cout << "西暦を入力して下さい > ";
    cin >> nYear;

    changeToShohwa(nYear);
    cout << "nYear = " << nYear << endl;

    if(nYear){
        cout << "その年は昭和 " << nYear << " 年です。" << endl;
    }
    else{
        cout << "その年は昭和ではありません。" << endl;
    }
}

void shohwa2(){
    int nYear;
    
    cout << "西暦を入力して下さい > ";
    cin >> nYear;
    
    change2ShohwaByPointer(&nYear);
    
    // nYear が change2ShohwaByPointer(&nYear) 
    // を実行することによって、変わってしまった！！
    cout << "nYear = " << nYear << endl;
    
    if(nYear){
        cout << "その年は昭和 " << nYear << " 年です。" << endl;
    }
    else{
        cout << "その年は昭和ではありません。" << endl;
    }
}

int main(int argc, char *argv[]){
    shohwa();
    shohwa2();
    return 0;
}
