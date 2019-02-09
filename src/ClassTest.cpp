#include <iostream>
using namespace std;

class ClassTest{
    private:
        int _num;

    public:
        ClassTest(){
            _num = 1;
        }

    void display(){
        int *num = &_num;
        cout << *num << endl;
    }
};

int main(int argc, char *argv[]){
    cout << "// new の場合:"                  << endl;
    cout << "ClassTest *c = new ClassTest();" << endl;
    cout << "c->display();"                   << endl;
    cout << "delete c;"                       << endl;
    cout << "結果 : ";

    ClassTest *c = new ClassTest();
    c->display();
    delete c;
    cout << endl;

    cout << "// . の場合:" << endl;
    cout << "ClassTest d;" << endl;
    cout << "d.display();" << endl;
    cout << "結果 : ";
    ClassTest d;
    d.display();

    return 0;
}
