#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j=0,tmp=0,in[6] = { 3,2,7,8,1,10};
	for(i=0;i<=6;i++){
		for(j=0;j<=6;j++){
			if(in[i]>in[j]){
				tmp=in[j];
				in[j]=in[i];
				in[i]=tmp;
			}
		}
	}
	for(i=5;i>=0;i--)
		printf(" %d ",in[i]);
	return 0;
}