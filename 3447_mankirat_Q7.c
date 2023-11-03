#include<stdio.h>
#include<math.h>

int main(){
	printf("Mankirat Singh 3447\n");
	int n,temp,digit,dinn=0,sod,sodopn=0,sodopf=0,pn,flag=0,i;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	while(temp!=0){
		//to get sum of digits of n
		temp/=10;
		++dinn;
		digit=(n%(int)pow(10,dinn))/pow(10,dinn-1);
		sod+=digit;
	}
	for(pn=2;pn<=n;pn++){
		flag=0;
		//to find all prime no.less than n
		for(temp=2;temp<pn;temp++){
			if(pn%temp==0){
				++flag;
			}
		}
		if(flag==0){
			if(n!=pn){
				//this means pn is prime
				temp=n;
				i=0;
				if(n%pn==0){
					
					while(temp%pn==0){
						//to find out, how many times pn divides temp
						temp=temp/pn;
						++i;
					}
					dinn=0;
					temp=pn;
					sodopn=0;
					while(temp!=0){
						//to get sum of digits of pn
						temp/=10;
						++dinn;
						digit=(pn%(int)pow(10,dinn))/pow(10,dinn-1);//digit=7
						sodopn+=digit;
					}
					
					sodopf+=(sodopn*i);
				}
			}else{
				sodopf=0;
			}
		}
	}
	if(sodopf==sod){
		printf("%d is a Smith number",n);
	}else{
		printf("%d is not a Smith number",n);
	}
	return 0;
}
