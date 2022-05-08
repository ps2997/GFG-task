#include <iostream>
using namespace std;

void move_element(int index, int array[6], int num){
	for(int u=6; u>index; u--)
    {
	 array[u]=array[u-1];
	}

	array[index]=num;

	for(int i=0; i<=6; i++)
    {
	 cout << array[i]<<endl;
	}
	return;
}


int main(){
    int arr[6] = {1,2,3,4,5,6};

	int num, index;
	cout<< "Enter a number:"<<endl;
	cin>>num;
	cout<<"Enter index";
	cin>>index;
	
    move_element(index,arr,num);


	return 0;

}