#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include <bitset>
#include<time.h>

int len=100;
int ckeck = 0;

void vcomp(std::vector<int> *vsold, std::vector<int>* vsnew) 
{
	int ckeck = 0,o = 0;
	for (int i = 0; i < len; i++)
	 {
		vsold->at(i) = vsnew->at(i) || vsold->at(i);
		ckeck += vsold->at(i);
		printf("%d", vsold->at(i));
	}
}
using namespace std;
int main() 
{
	int ran;
	int times = 100;
	printf("�п�J�}�C�����סG");
	cin >> len;
	printf("�п�J���N���ơG");
    cin >> times;
    vector<int> vsold(len,0);
	srand(time(NULL));
	for (int i = 0; i < times; i++) {
		vector<int> vsnew=vsold;
		ran = rand() % len;
		vsnew.at(ran) = !vsnew.at(ran);
		printf("%d : ", i+1);
		vcomp(&vsold, &vsnew);
		printf("\n");
		if (ckeck == len) break;
	}

}

