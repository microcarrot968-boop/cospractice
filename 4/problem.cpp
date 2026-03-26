#include <iostream>
using namespace std;//함수집어넣어서 ppt 문제 풀기
int main(int argc, char *argv[])
{
	int a, b, sum;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	if (check_validity(a, b))
	{
		sum = sum_up(a,b);
	}
	return 0;
}
