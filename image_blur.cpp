#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

const int MAX 1024;
unsigned short img[MAX][MAX];
long long pre[MAX+1][MAX+1];

int main (){
    char name[MAX];
    while (cin>>name != EOF){
        int r,c,f;
        cin>>r>>c>>f;
        vector<vector<uint16_t>> image(r,vector<string>(c));
        for (int line = 0;line < r;line++){
            for (int i = 0;i < c;i++){
                cin>>image[line][i];
            }
        }
        
    }
}