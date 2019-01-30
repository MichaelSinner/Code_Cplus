#include <cstdio>
#include <iostream>
using namespace std;
int main(){
int n,s;
while(scanf("%d",&n)&&n!=0){
  s = 0;
  if (n % 2 != 0) n++;
  for (int i = 0; i < 5; i++, n += 2) s += n;
  cout << s << endl;
  }

return 0;
}
