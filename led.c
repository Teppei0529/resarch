#include<stdio.h>
#include<wiringPi.h>

#define CS1 6
#define CS2 7
#define CS3 8

#define CODE1 12
#define CODE2 13

#define SW  14

int main(void){
	int data1,data2,data3;
	int i,n,g;
	int t,d;
	
	if(wiringPiSetupGpio() == -1)return 1;

	pinMode(CS1,INPUT);
	pinMode(CS2,INPUT);
	pinMode(CS3,INPUT);

	pinMode(CODE1,OUTPUT);
	pinMode(CODE2,OUTPUT);

	pinMode(SW,OUTPUT);

	scanf("%d",&t);
	if(t == 1){ 
		digitalWrite(CODE1,HIGH);
	}
	else	
	{
		digitalWrite(CODE1,LOW);
	}

	scanf ("%d",&d);
	if(d == 1){
		digitalWrite(CODE2,HIGH);
	}
	else
	{
		digitalWrite(CODE2,LOW);
	}

	digitalWrite(SW,HIGH);
	delay(1000);
	digitalWrite(SW,LOW);

	for(i=0;i<1;i++){
		data1 = digitalRead(CS1);
	}
	for(n=0;n<1;n++){
		data2 = digitalRead(CS2);
	}
	for(g=0;g<1;g++){
		data3 = digitalRead(CS3);
		printf("%d %d %d\n",data3,data2,data1);
	}
	return 0;
}
