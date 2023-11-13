#include <iostream>
uisng namespace std;
bool Check_SHT(int N)
{
    int S = 0;
    for (int i = 1; i < N; i++)
        if (N % i == 0)
            S += i;  // S = S + i

    if (S == N)
        return true; // Là số hoàn thiện
    return false;     // Không là số hoàn thiện
}
int main(){
    int a;
    cout << "Nhap so nguyen a: ";
    cin >> a;

     int n ;
     cout << "nhap n";
     cin >> n;
     if (check_SHT(n)) {
        cout << "la so hoan hien: ";
     } else {
        cout << "khong la so hoan thien";
     }
     return 1;
}
