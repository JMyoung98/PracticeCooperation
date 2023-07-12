#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    int WordNum;
    string Word;
    vector<string> WordAry;

    cout << "단어 수 입력 : ";
    cin >> WordNum;
    if(WordNum > 0 ){
        cout << "단어 입력 : ";
        for(int i = 0; i<WordNum;i++){
            cin >> Word;
            WordAry.push_back(Word);
        }
    }else{
        cout << "양의 정수를 입력";
        return 0;
    }
    for(int i =0; i<WordNum; i++){
        cout <<"vector["<<i<<"] : "<<WordAry[i]<<endl;
    }
    WordAry.clear();
    return 0;
}