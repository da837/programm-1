#include <iostream>
using namespace std;

int main() {
//one way if statement
string word;
cout << "enter the word" << endl;
cin >> word;
if(word == "hello"){
    cout << "it says hello" << endl;
}

//two way if else statement
string word2;
cout << "enter the word" << endl;
cin >> word2;
if(word2 == "hi"){
    cout << "it says hi" << endl;
}
else{
    cout << "it not says hi" << endl;
}

//multi way if else statement
string word3;
cout << "enter the word" << endl;
cin >> word3;
if(word3 == "selam"){
    cout << "it says selam" << endl;
}
else if(word3 == "opera"){
    cout << "it says opera" << endl;
}
else{
    cout << "out of selam and opera" << endl;
}

//nedted if else statement
if(word3 == "hi"){
    if(word2 == "hello"){
        cout << "word3 is hi word2 is hello" << endl;
    }
}
else{
    cout << "both out of hi and hellp";
}
    return 0;
}


