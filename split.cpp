#include<bits/stdc++.h>

using namespace std;

vector<string> split(string input, string delimiter){
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while((pos = input.find(delimiter)) != string::npos){
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}

int main(){
    /*스플릿 함수를 만들어서 사용*/
    string s = "안녕하세요@감사합니다@잘있어요@다시만나요", d="@";
    vector<string> a = split(s,d);
    for(string b : a) cout << b << "\n";

    /*getline()함수를 이용하여 사용*/
    string str = "c c++ python java";
    istringstream ss(str);
    string strbuffer;
    vector<string> x;
    x.clear();
    while(getline(ss, strbuffer,' ')){  //Delimiter에 도달할 경우 그 문자 이전까지만 읽음
        x.push_back(strbuffer);
        cout<< strbuffer << " ";
    }

    for(int i = 0; i < x.size(); i++){
        cout<<x[i]<<endl;
    }
    return 0;
}