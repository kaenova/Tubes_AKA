#include "ADT.h"

void SelectionSortMenu(int data[100000]){
    int temp[100000];
    for (int j = 0 ; j < 100000 ; j++){
        temp[j] = data[j];
    }
    int n;
    cout<<"Selection Sort"<<endl;
    cout<<"How many data you want to sort? (674 < n < 100001 ; n: integer): ";
    cin>>n;
    cout<<endl;
    while (n > 100000 || n < 675){
        cout<<"Please type again"<<endl;
        cout<<"How many data you want to sort? (674 < n < 100001 ; n: integer): ";
        cin>>n;
    } 

    for (int i = 0 ; i <3 ; i++){
        cout<<"Processing"<<endl;
        data = temp;
        auto start = chrono::steady_clock::now();
        SelectionSort(data, n);
        auto end = chrono::steady_clock::now();
        cout << "Elapsed time in nanoseconds : "
            << chrono::duration_cast<chrono::nanoseconds>(end - start).count()
            << " ns" << endl;
    };

    enter_to_continue();
};

void SelectionSort(int angka[], int n){

    for (int i = 0 ; i < n ; i++){
        int minimal = i;
        for (int j = i+1 ; j<n-1 ; j++){
            if (angka[minimal] > angka[j]){
                minimal = j;
            }
        }
        int temp = angka[i];
        angka[i] = angka[minimal];
        angka[minimal] = temp;
    }
}
