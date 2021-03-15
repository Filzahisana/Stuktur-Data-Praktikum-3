/*Tugas3 Prak. Struktur Data*/
/*Queue - No.5*/
/*Filza Hisana*/
/*NIM: 20051397018*/

#include <iostream>
using namespace std;
 
int main () 
{
	int a = 0; 
	int i;
	int sum = 0, max = 0, min = 0;
	 
	cout << "Banyaknya element yang akan diinput :";
	cin >> a;
	 
	int data[a];
	 
	for(i=0; i<a; i++) 
	{
		cout << "Input element ke ";
		cout << i+1;
		cout << " : ";
		cin >> data[i];
	}

	cout << "\n Pake Array :";
	cout << "\n data yang anda masukan adalah "; 
	max = min = data[0];
	
	for(i=0; i<a; i++) 
	{
		cout << data[i] << ',';
		sum = sum + data[i];
		if (max < data[i]) 
		{
			max = data[i];
		}
	
		if (min > data[i]) 
		{
			min = data[i];
		}
	}
	cout << "\n Jumlah data : " << sum;
	cout << "\n Rata-rata : " << sum/a;
	cout << "\n terkecil :" << min;
	cout << "\n terbesar : " << max;
	cout << "\n================================\n";
	 
	sum = 0;
	int *ptr;
	ptr = data;
	 
	cout << "\n Pake Pointer :";
	cout << "\n data yang anda masukan adalah ";
	max = min = *ptr;
	for(i=0; i<a; i++) 
	{
		cout << *(ptr + i) << ',';  
		sum = sum + *(ptr + i);
	
		if (max < *(ptr + i)) 
		{
			max = *(ptr + i);
		}
	
		if (min > *(ptr + i)) 
		{
			min = *(ptr + i);
		}
	}
	cout << "\n Jumlah data : " << sum;
	cout << "\n Rata-rata : " << sum/a;
	cout << "\n terkecil :" << min;
	cout << "\n terbesar : " << max;
	return 0;
}
