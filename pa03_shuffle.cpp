#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int shuffle(vector<int>List1,vector<int>List2, vector<int>List3 ,int n) {
    int countingS = 0;
    while (true) {

        if (List1 == List2) {
            return countingS;
            break;
        }
        else if (List1 == List3 && countingS!=0) {
            return -9;
            break;
        }

        if (n % 2 == 0) {
            vector<int> card_a(n / 2), card_b(n / 2);
            for (int i = 0; i < n; i++) {
                if (i < n / 2)
                    card_a[i] = List1[i];
                else
                    card_b[i - n / 2] = List1[i]; // 여기가 포인트
            }
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0)
                    List1[i] = card_a[i / 2];
                else
                    List1[i] = card_b[i / 2]; // 여기가 아니라
            }
        }

        else {

            vector<int> card_a((n / 2) + 1), card_b(n / 2);
            for (int i = 0; i < n; i++) {
                if (i < (n / 2) + 1)
                    card_a[i] = List1[i];
                else
                    card_b[i - ((n / 2) + 1)] = List1[i]; // 여기가 포인트
            }
            for (int i = 0; i < n; i++) {

                if (i % 2 == 0)
                    List1[i] = card_a[i / 2];
                else
                    List1[i] = card_b[i / 2]; // 여기가 아니라
            }
        }
        
        
        countingS++;
    }

}

int main() {

    int index = 0, N = 0;
    int cnt = 0;

    int arr[5001] = { 0, };
    int arr2[5001] = { 0, };

    for (int i = 0;i < 5001; i++) {
        cin >> index;
        if (index == -9) break;
        
        arr[i] = index;
        cnt++;
        index = 0;
    }
    vector<int>L0;
    vector<int>L0_or;
    vector<int>L1;
    vector<int>L1_or;

    L0.assign(arr, arr + cnt);
    L0_or.assign(arr, arr + cnt);
    L1.assign(arr, arr + cnt);
    L1_or.assign(arr, arr + cnt);
   
    
    //====================L2
    index = 0;
    cnt = 0;

    for (int i = 0;i < 5001; i++) {
        cin >> index;
        if (index == -9) break;
        
        arr2[i] = index;
        cnt++;
        index = 0;
    }

    vector<int>L2;
    vector<int>L2_or;

    L2.assign(arr2, arr2 + cnt);
    L2_or.assign(arr2, arr2 + cnt);

    //---------------------------------sorting

    sort(L0.begin(), L0.end());
    sort(L0_or.begin(), L0_or.end());

    //=================================test
    /*
    cout << endl;
    cout << "L1 \n";
    for (int i = 0; i < cnt; i++) {
        cout << L1[i] << " ";
    }
    cout << endl;
    cout << "L0 \n";
    for (int i = 0; i < cnt; i++) {
        cout << L0[i] << " ";
    }
    cout << endl;

    cout << "L2 \n";
    for (int i = 0; i < cnt; i++) {
        cout << L2[i] << " ";
    }
    cout << endl;
    */
    //----------------------------------------
    //L1 - L2 끼리 비교
    int d0, d1, d2, d3, d4;

        if (shuffle(L1, L2, L1_or, cnt) == -9) {
            cout << "NOT";
            return 0;
        }
        else {
            d0 = shuffle(L1, L2, L1_or, cnt);
            //cout << shuffle(L1, L2, L1_or, cnt);
        }
    //----------------------------------
    //L0-L1거리
    //L0-L2거리 차
        if (shuffle(L1, L0, L1_or, cnt) == -9) {
            cout << "NOT";
            return 0;
        }
        else {
            d1 = shuffle(L1, L0, L1_or, cnt);
            //cout << shuffle(L1, L0, L1_or, cnt);
        }

        if (shuffle(L2, L0, L2_or, cnt) == -9) {
            cout << "NOT";
            return 0;
        }
        else {
            d2 = shuffle(L2, L0, L2_or, cnt);
            //cout << shuffle(L2, L0, L2_or, cnt);
        }

        int min1 = abs(d1 - d2);

 //---------------------------------------------------

        
        if (shuffle(L0, L1, L0_or, cnt) == -9) {
            cout << "NOT";
            return 0;
        }
        else {
            d3 = shuffle(L0, L1, L0_or, cnt);
            //cout << shuffle(L0, L1, L0_or, cnt);
        }

        if (shuffle(L0, L2, L0_or, cnt) == -9) {
            cout << "NOT";
            return 0;
        }
        else {
            d4 = shuffle(L0, L2, L0_or, cnt);
            //cout << shuffle(L0, L2, L0_or, cnt);
        }

        int min2 = abs(d3 - d4);
        //=------------------------------------------- min 

        int  Min = min(min1, min2);
        int D = min(d0, Min);

        cout << D;
	return 0;
}