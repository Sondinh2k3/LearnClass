#include <iostream>
#include <math.h>
using namespace std;

class Diem {
    private:
        double x, y;
    public:
        void Khoitao(double xx, double yy);
        void Trungnhau(Diem u);
        double Khoangcach(Diem u);
        void Xuat();
};
void Diem::Xuat(){
    cout<<"("<<x<<", "<<y<<")\n";
}

void Diem::Khoitao(double xx, double yy){
    x = xx;
    y = yy;
}

double Diem::Khoangcach(Diem u){
    return sqrt(pow(u.x-x, 2) + pow(u.y-y, 2));
}
void Diem::Trungnhau(Diem u){
    if(x == u.x && y == u.y) cout<<"Trung nhau\n";
    else{
        cout<<"Khong trung nhau\n";
    }
}
int main(){
    Diem a;
    a.Khoitao(5,6);
    a.Xuat();
    Diem b;
    b.Khoitao(2,5);
    b.Xuat();
    a.Trungnhau(b);
    cout<<a.Khoangcach(b);
    return 0;
}