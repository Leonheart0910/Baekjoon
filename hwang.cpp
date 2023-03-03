#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
template<typename T>
int findMaximum(std::vector<T> const &vec) {
    int max = INT_MIN;
    for (const T &i: vec) {
        if (max < i) {
             max = i;
        }
    }
    return max;
}
template<typename T>
int findMinimum(std::vector<T> const &vec) {
    int min = INT_MAX;
    for (const T &i: vec) {
        if (min > i) {
             min = i;
        }
    }
    return min;
}
int main(){
    int n, x, ogmax = -21000000, max = -21000000, ogmin = 21000000, min = 21000000;
    cin >> n;
    vector<int>train(n);
    vector<int>result;
    int rest = 0;
    for (int i=0; i<n; i++)
    {
        cin >> train[i];
    }
    ogmax = findMaximum(train);
    ogmin = findMinimum(train);
    int max_index = max_element(train.begin(), train.end())- train.begin();
    int min_index = min_element(train.begin(), train.end())- train.begin();
    if (train[0] != ogmin){
        result.push_back(train[0]);
        cout << "first element is not minimum!!, so result : " << result[0] << '\n';
    }
    else{ rest = train[0]; cout << "first element is minimum! "<< '\n'; }
    for (int i=1; i<n; i++){
        min = findMinimum(result); max = findMaximum(result); 
        //max = *max_element(result.begin(), result.end());
        //min = *min_element(result.begin(), result.end());
        cout << "max : " << max << ", min : " << min << '\n';
        cout << "i == " << i << '\n';
        if ((ogmin == min) || (ogmax == max)){
            if ((rest > min) && (rest < max)){
                break;
            }
        }
        if ((train[i] == (max + 1))) { //this one
        result.insert(result.begin(), train[i]); cout << "plus1 train[i]: " << train[i] << '\n'; 
        cout << "result : ";
            for (int i:result){
                cout << i << ' ';
            }
        cout << "rest : " << rest << '\n';
        continue;}
        if (train[i] == (max - 1)){
            result.insert(result.begin()+1, train[i]); cout << "minus1 train[i]: " << train[i] << '\n'; 
        cout << "result : ";
            for (int i:result){
                cout << i << ' ';
            }
        cout << "rest : " << rest << '\n';
        continue;
        }
        if ((train[i] == (min - 1)) || train[i] == (min + 1)) {result.insert(result.end(), train[i]); cout << "(4)train[i]: " << train[i] << '\n'; 
        cout << "result : ";
            for (int i:result){
                cout << i << ' ';
            }
        continue;}
        if ((rest == 0) && (train[i] > max)) { rest = train[i]; 
        cout << "result : ";
            for (int i:result){
                cout << i << ' ';
            }
        cout << "(2)rest : " << rest << '\n'; continue;}
        if (train[i] == ogmax){
            cout << "in here? " << '\n';
            // result.insert(result.end(), rest);
            // rest = train[i];
            result.insert(result.begin(), train[i]);
            cout << "result : ";
            for (int i:result){
                cout << i << ' ';
            }
        cout << "rest : " << rest << '\n';
            continue;
        }
        if (train[i] == ogmin){
            cout << "if min has occured!" << '\n';
            if (rest == 0) {rest = train[i];}
            else{
                if (rest > max){
                    result.insert(result.begin(), rest);
                    rest = ogmin;
                }
                else if (rest < min){
                    result.insert(result.end(), rest);
                    rest = ogmin; }
            }
            for (int i:result){
                cout << i << ' ';
            }
            cout << "rest : " << rest << '\n';
            cout << "------" << '\n';
            continue;
        }
        if (max < train[i]) {
            result.insert(result.begin(), train[i]);
            cout << "(5)if greater than current max : " << train[i] << '\n';
            cout << "result : ";
            for (int i:result){
                cout << i << ' ';
            }
            cout << "rest : " << rest << '\n';
            cout << "------" << '\n';
            continue;
        }
        if (rest == ogmin){
            if (train[i] > ogmin){
                if (train[i] > max){
                    result.insert(result.begin(), train[i]);
                    continue;
                }
                if (train[i] < min){
                    result.insert(result.end(), train[i]);
                    continue;
                }
            }
        }
        if (train[i] < max) {
            cout << "(6)if lower than current max : " << train[i] << '\n';
            cout << "before result : ";
            for (int i:result){
                cout << i << ' ';
            }
            if (rest == 0) {
                rest = train[i]; //continue;
            }
            else if (rest == ogmin){
                result.insert(result.end(), rest);
                rest = train[i];
            }
            else if (rest == ogmax){
                result.insert(result.begin(), rest);
                rest = train[i];
            }
            else{
                if (rest > max) {
                    result.insert(result.begin(), rest);
                    rest = train[i];
                }
                else{
                    result.insert(result.end(), rest);
                    rest = train[i]; //continue; 
                }
            }
            cout << "after result : " ;
            for (int i:result){
                cout << i << ' ';
            }
            cout << "rest : " << rest << '\n';
            cout << "------" << '\n';
            continue;
        }
        cout << "------" << '\n';
    }
    if (rest > max) {
        result.insert(result.begin(), rest);
    }
    if ((rest < min) && (rest!=0)){
        result.insert(result.end(), rest);
    }
    cout << '\n' << "final -----" << '\n';
     for (int i:result){
                cout << i << ' ';
            }
            cout << "rest : " << rest << ", cnt : " << result.size() << '\n';
            cout << "------" << '\n';
    return 0;

}
