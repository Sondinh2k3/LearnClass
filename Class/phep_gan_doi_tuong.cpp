#include <iostream>
#include <math.h>
using namespace std;

class Diem{
    //Đầu tiên là các thuộc tính, đoạn này để private :))
    private:
        double x, y;
    //Tiếp theo đến các phương thức, đoạn này để public :))
    public:
        //Có thể sử dụng hàm dựng để khởi tạo các giá trị như sau:
        Diem(double x = 0, double y = 0): x(x), y(y) {};
        //=> Khi dùng hàm trên rồi, không nhất thiết phải viết hàm khởi tạo(nhập giá trị) nữa
        void Xuat();
        void Khoangcach(Diem u);
};

void Diem::Xuat(){
    cout<<"("<<x<<", "<<y<<")\n";
}

void Diem::Khoangcach(Diem u){
    double kc = sqrt(pow(this->x - u.x, 2) + pow(this->y - u.y, 2));
    cout<<"Khoảng cách là: "<<kc<<endl;
}
int main(){
    Diem a(1,2);
    Diem b;
    b=a;
    b.Xuat();
    return 0;
}