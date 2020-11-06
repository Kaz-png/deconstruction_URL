//
//  main.cpp
//  URL deconstruction
//
//  Created by Vin Cain on 11/5/20.
//

#include <iostream>
#include <string>
using namespace std;
void deconstruct_URL(std::string h);
int main() {
    string URL;
    cout << "Paste URL: ";
    cin >> URL;
    deconstruct_URL(URL);
    return 0;
}
void deconstruct_URL(std::string h){
    string scheme_;
    string authority_;
    string path_;
    int p;
    for(int i=0;i<h.size();i++){
        if(h[i]==':'){
            scheme_=h.substr(0, i+1);
        }
        if(h[i]=='/'&&h[i+1]=='/'){
            p=i;
            int b=h.find_first_of(':')+1;
            int g=h.find_first_of('/',i+2)-b;
            authority_=h.substr(i,g);
            path_=h.substr(h.find_first_of('/',g),h.size()-1);
        }
        
        
        
    }
    cout << "scheme: "<< scheme_ << "\n";
    cout << "authority: "<<authority_ << "\n";
    cout << "path: "<< path_ << "\n";
}
