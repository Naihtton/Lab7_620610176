#include<iostream>
#include<string>

using namespace std;

string rev(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string up(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string low(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string x,result;
    cout << "Input text: ";
	cin >> x;
    cout << "Reversed text: " << rev(x) << endl;
	string y,c1,c2;

    y = rev(x);
    c1 = up(x);
    c2 = up(y);
    if (c1 == c2){
        cout << "Palindrome: Yes";
    }else{
        cout << "Palindrome: No";
    }
    return 0;
}
