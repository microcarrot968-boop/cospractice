#include <iostream>
using namespace std;
int run() {
    char str[6] = {'h', 'e', 'l', 'l', 'o', 0};
    char *p;
    int i;

    p = str;

    for (i=0; i<32; i++) // i를 0부터 31까지 증가시키면서 총 32번 반복
        cout << "p[" << i << "] = " << hex << (0xff & p[i]) << endl;

    return 0;
}ㅇ

int main(int argc, char *argv[]){
    cout << "main = " << (void *)main << endl;

    run();

    return 0;
}
