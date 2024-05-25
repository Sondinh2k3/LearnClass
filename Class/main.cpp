#include <iostream>
using namespace std;

class Diem{
    private:
        double x,y;
    public:
        void Khoitao(double xx, double yy){
            x = xx; y =  yy;
        };
        void Nhap(){
            cout<<"Nhap x = ";
            cin>>x;
             cout<<"Nhap y = ";
             cin>>y;
        };
        void Xuat();
        void Dichuyen(double dx, double dy);
};


int main(){

    return 0;
}