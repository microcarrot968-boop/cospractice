#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    char str1[6] = {'h','e','l','l','o',0}; // 0으로 끝이 어딘지 표시 출력하다가 \0 만나면 멈춤! 만약 0이 없다면 hello ????? 끝이 없음
    char str2[6] = {'w','o','r','l','d',0};
    char *p;
    int i;

    p=str2; // p=str2[0]
    
    cout << "str1=" << str1 << endl;
    cout << "str2=" << str2 << endl;

    p[-1] = ','; // *(p-1)=','; // 원래 str1 끝에는 \0이 있었는데 이걸 , 로 바꿈 그래서 계속 읽어서 월드 뒤에서 끝나게 함. (메모리 자체를 바꾼거임)

    cout << "str1=" << str1 << endl;

    return 0;
}