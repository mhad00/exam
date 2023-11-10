#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Vemaybay {
private:
    string tenchuyen;
    string ngaybay;
    int giave;
public:
    Vemaybay(string ten, string ngay, int gia) {
        tenchuyen = ten;
        ngaybay = ngay;
        giave = gia;
    }
    
    int getgiave() {
        return giave;
    }
};

class Nguoi {
public:
    string hoten;
    string gioitinh;
    int tuoi;

    Nguoi(string ten, string gt, int age) {
        hoten = ten;
        gioitinh = gt;
        tuoi = age;
    }
};

class HanhKhach : public Nguoi {
private:
    vector<Vemaybay*> ve;
    int soluong;
public:
    HanhKhach(string ten, string gt, int age) : Nguoi(ten, gt, age) {
        soluong = 0;
    }
    
    void themVe(Vemaybay* v) {
        ve.push_back(v);
        soluong++;
    }
    
    int tongtien() {
        int total = 0;
        for (int i = 0; i < soluong; i++) {
            total += ve[i]->getgiave();
        }
        return total;
    }
    
    void xuat() {
        cout << "Ho ten: " << hoten << endl;
        cout << "Gioi tinh: " << gioitinh << endl;
        cout << "Tuoi: " << tuoi << endl;
        cout << "So luong ve: " << soluong << endl;
        cout << "Tong tien: " << tongtien() << endl;
    }
};

bool compareHanhKhach(HanhKhach* khach1, HanhKhach* khach2) {
    return khach1->tongtien() > khach2->tongtien();
}

int main() {
    int n;
    cout << "Nhap vao so luong hanh khach: ";
    cin >> n;
    
    vector<HanhKhach*> danhSachHanhKhach;

    for (int i = 0; i < n; i++) {
        string hoten, gioitinh;
        int tuoi;
        cout << "Nhap vao thong tin hanh khach " << i + 1 << endl;
        cout << "Ho ten: ";
        cin.ignore();
        getline(cin, hoten);
        cout << "Gioi tinh: ";
        getline(cin, gioitinh);
        cout << "Tuoi: ";
        cin >> tuoi;
        
        HanhKhach* khach = new HanhKhach(hoten, gioitinh, tuoi);
        danhSachHanhKhach.push_back(khach);
    }
    
    for (int i = 0; i < danhSachHanhKhach.size(); i++) {
        cout << endl << "Thong tin hanh khach " << i + 1 << endl;
        danhSachHanhKhach[i]->xuat();
    }
    
    sort(danhSachHanhKhach.begin(), danhSachHanhKhach.end(), compareHanhKhach);
    
    cout << endl << "Danh sach hanh khach sap xep theo chieu giam dan cua Tong tien: " << endl;
    for (int i = 0; i < danhSachHanhKhach.size(); i++) {
        danhSachHanhKhach[i]->xuat();
    }

    // Giải phóng bộ nhớ
    for (int i = 0; i < danhSachHanhKhach.size(); i++) {
        delete danhSachHanhKhach[i];
    }
    
    return 0;
}