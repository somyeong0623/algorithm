//lv1. 같은 숫자는 싫어
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int tmp=arr[0];
    answer.push_back(tmp);
    for(int i=1; i<arr.size(); i++){
        if(tmp!=arr[i]){
            answer.push_back(arr[i]);
            tmp=arr[i];
        }
        
    }

    return answer;
}