#include <bits/stdc++.h>
using namespace std;

class sinhVien{
    private:
        int tuoi, id;
        double gpa;
        string ten;

    public:
        void xinchao();
        void dihoc();
};

void sinhVien::xinchao(){
    cout<<"Hello\n";
}

void sinhVien::dihoc(){
    cout<<"Di hoc \n";
}

int main(){
   sinhVien x;
   x.xinchao();
   x.dihoc();

    return 0;
}