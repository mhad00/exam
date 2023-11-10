#include <iostream>
#include <algorithm>
using namespace std;

class Vemaybay
{
private:
public:
    string tenchuyen;
    int ngaybay;
    double giave;

    Vemaybay(string _tenchuyen, int _ngaybay, double _giave)
    {
        tenchuyen = _tenchuyen;
        ngaybay = _ngaybay;
        giave = _giave;
    };
    ~Vemaybay(){};
    void nhap()
    {
        cin.ignore();
        cout << "Ten chuyen  :";
        getline(cin, tenchuyen);
        cout << "Ngay bay : ";
        cin >> ngaybay;
        cout << "Gia ve : ";
        cin >> giave;
    };
    void xuat()
    {
        cout << "Ten chuyen :" << tenchuyen << '\n';
        cout << "Ngay bay :" << ngaybay << '\n';
        cout << "Gia ve :" << giave << '\n';
    };
    double getgiave()
    {
        return giave;
    };
};

class Nguoi
{
public:
    string hoten;
    string gioitinh;
    int tuoi;

    Nguoi(string _ten, string _gioitinh, int _tuoi)
    {
        hoten = _ten;
        gioitinh = _gioitinh;
        this->tuoi = _tuoi;
    }
    ~Nguoi(){};
    void nhap()
    {
        cin.ignore();
        cout << "Ho ten : ";
        getline(cin, hoten);
        cout << "Gioi tinh : ";
        cin >> gioitinh;
        cout << "Tuoi : ";
        cin >> tuoi;
    };
    void xuat()
    {
        cout << hoten << '\n';
        cout << gioitinh << '\n';
        cout << tuoi << '\n';
    };
};


int main()
{
    int n;
    cout << "Nhap so khach : ";
    cin >> n;
    
    return 0;
}
