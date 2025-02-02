/* 汉诺塔.cpp */
#include <iostream>
using namespace std;
void hanoii(int n,char source,char target, char helper);

int main(int argc, char const *argv[]) {
  hanoii(3, 'q', 'w', 'e');
  return 0;
}


void hanoii(int n,char source,char target, char helper){
  if(n==1){
    cout<<"Move disk 1 from source "<<source<<" to target "<<target<<endl;
    return;
  }
  hanoii(n-1,source,helper,target);
  cout<<"Move disk "<<n<<" from source "<<source<<" to target "<<target<<endl;
  hanoii(n-1,helper,target,source);
}