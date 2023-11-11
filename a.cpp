#include <iostream>
using namespace std;
bool KTSoHoanThien(int a) {
    bool flag = false;
	int sum=0;
	for (int i = 1; i < a; i++) {
		if (a%i == 0) {
			sum+=i;
		}
	}
    if(sum==a){
        flag = true;
    }
bool KTSoChinhPhuong(int a) {
	bool flag = false;
	for (int i = 0; i < a / 2; i++) {
		if (i*i == a) {
			flag = true;
		}
	}
	return flag;
}
int main() {
	int a;
	cout << "Nhap a: ";
	cin >> a;
	if (KTSoHoanThien(a)) {
		cout << a << " la so hoan thien." << endl;
	}
	else{
		 cout << a << " khong la so hoan thien." << endl;
	if (KTSoChinhPhuong(a)) {
		cout << a << " la so chinh phuong." << endl;
	}
	else{
		 cout << a << " khong la so chinh phuong." << endl;
	}
	return 0;
}