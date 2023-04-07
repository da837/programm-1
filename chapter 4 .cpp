#include<iostream>
using namespace std;
int main(){
	//listing element of the one dimensional array
	int matrix[]={1,3,5,6,4,7};
	cout<<" element of the matrix are"<<endl;
	for(int i=0;i<6;i++)
	cout<<matrix[i]<<" "<<endl;
	cout<<"the element of matrix"<<endl;
	//element of two dimensional array
	int matrix1[3][4]={1,3,4,5,6,7,8,9,8,9,3,4};
	for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
		cout<<matrix1[i][j]<<" ";
		}
		cout<<endl;
	}
	//maximum element of the array
	int index,max;
int sales[]={22, 6, 163, 999, 14};
max=sales[0];
for (index = 0; index < 5; index++){
if (max < sales[index])
max = sales[index];
}
cout << "Largest element in sales array is " << max;
       char str1[20];
	   char str2[]="happy holiday";
	   strcpy(str1,str2);
	   cout<<str1<<endl;
	   cout<<strcat(str1,"mom");
	   cout<<str1<<endl;
	   strncpy(str1,"love you",4);
	   cout<<str1<<endl;
	   strcmp("hello","mom");
	   cout<<strlen(str1)<<endl;
	   //the reverse order of string
	   char str[20]="hello world";
	   for(int i=0,j=strlen(str)-1;i<j;i++,j--){
	   	char temp;
	   	temp=str[i];
	   	str[i]=str[j];
	   	str[j]=temp;
	   	}
		   cout<<str;
	   return 0;
}
	
	
