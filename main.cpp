#include <iostream>
uisng namespace std;
bool check_SCP(int n){
    int i = 0;
    while (i*i <= n){
        if(i*i == n){
            return true;
        }
        i++;
    }
    return false;
}
int main(){
    int a;
    cout << "Nhap so nguyen a: ";
    cin >> a;

     int n ;
     cout << "nhap n";
     cin >> n;
     if (check_SCP(n)) {
        cout << "la so chinh phuong: ";
     } else {
        cout << "khong la so chinh phuong";
     }
     return 1;
}
