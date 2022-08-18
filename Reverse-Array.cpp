#include <iostream>
using namespace std;

int main(){

int num[10] = {};
cout << "Enter 10 Elements" << endl;
for (int i = 0; i < 10; i++){

    cin >> num[i];
}
    cout << "Normal : " << endl;
for (int i = 0; i <10; i++){

    cout << num[i] << endl;
}
    cout << "Reversed : " << endl;
for (int i = 9; i >= 0; i--){


    cout << num[i] << endl;
}

return 0;
}
