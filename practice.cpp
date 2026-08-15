#include<iostream>
using namespace std;
class rectangle {
    public:
    int length;
    int breadth;

    rectangle(int l ,int b){
        length =l;
        breadth =b;

    }


};

int main(){

    rectangle r1(23,24);

    cout << "Length = " << r1.length << endl;
cout << "Breadth = " << r1.breadth << endl;
cout << "Area = " << r1.length * r1.breadth << endl;
}
