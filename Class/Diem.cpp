#include <iostream>
#include <math.h>
using namespace std;

class Diem {
    private:
        double x, y;
    public:
        //Cách khởi tạo hay dùng hơn
        Diem(double x = 0, double y = 0): x(x), y(y){};
        void Trungnhau(Diem u);
        double Khoangcach(Diem u);
        void Xuat();
};
void Diem::Xuat(){
    cout<<"("<<this->x<<", "<<this->y<<")\n";
}

// void Diem::Khoitao(double x, double y){
//     this->x = x;
//     this->y = y;
// }


double Diem::Khoangcach(Diem u){
    return sqrt(pow(u.x-this->x, 2) + pow(u.y-this->y, 2));
}
void Diem::Trungnhau(Diem u){
    if(this->x == u.x && this->y == u.y) cout<<"Trung nhau\n";
    else{
        cout<<"Khong trung nhau\n";
    }
}
int main(){
    Diem a(5,6);
    // a.Khoitao(5,6);
    a.Xuat();
    Diem b(2,5);
    // b.Khoitao(2,5);
    b.Xuat();

    
    a.Trungnhau(b);
    cout<<a.Khoangcach(b);
    return 0;
}