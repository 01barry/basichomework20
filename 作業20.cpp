#include<stdio.h>
#include<stdlib.h>

struct Phone{
	
	char *phone_brand;
	char *phone_model;
	char *phone_yearofmanufacture;
	int   phone_price;
	
	
}phone[2]; 
int main(void){
	int i=0;
	struct Phone phone[5]={"oppo","reno10x","2019",24990,
						   "sansung","s10+","2019",29700,
						   "vivo","nex","2018",21990,
						   "asus","zef6","2019",18999,
						   "htc","u12+","2015",15000,};
	for(i=0;i<5;i++){
		
		printf("����~�P:");
		puts(phone[i].phone_brand);
		printf("�������:");
		puts(phone[i].phone_model);
		printf("����X�t���:");
		puts(phone[i].phone_yearofmanufacture);
		printf("�������:");
		printf("%d\n",phone[i].phone_price);
	
	}                    
	
	system("pause");
	return 0;
	
}
