//Muhammad Afin Alfiansyah 20230140164
//Tipe soal 2

//1.	Jelaskan bagaimana algoritma Bubble Sort membandingkan serta menukar elemen-elemen.?
//dengan mengulang mengurutkan data per blok 1 dan 2, 2 dan 3, 3 dan 4, dan seterusnya denngan angka yang lebih besar di kiri akan dipindah ke kanan  

//2.	Jelaskan bagaimana algoritma Shell Sort membandingkan serta menukar elemen-elemen.
//dengan membagi array dibagi menjadi beberapa bagian dan per bagiannya berisi data berkelipatan 3 lalu per bagiannya diurutkan dengan insertionsort, setelah semua bagian sudah berurutan semua bagian  dikembalikan sesuai posisi data semula lalu diurunkan dengan insertion sort kembali 

//3.	Dalam algorithma sortir, jika data sudah ada beberapa yang berutan, maka algorithma mana yang harus dipilih? Jelaskan mengapa.
// menggunakan algoritma insertion sort karena dalam algoritma insertion sort membutuhkan data yang berurutan agar dapat efisien


#include <iostream>
using namespace std;

int afin[64];
int n;


void input() {															
	while (true) {														
		cout << "Masukkan banyaknya element pada array : " << endl;				
		cin >> n;														
		if (n <= 64)													
			break;														
		else {															
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";	
		}
	}
	cout << endl;														
	cout << "=====================" << endl;							
	cout << "Masukkan Elemen Array" << endl;							
	cout << "=====================" << endl;							

	for (int i = 0; i < n; i++) {										
		cout << "Data ke-" << (i + 1) << ": ";							
		cin >> afin[i];													
	}
}
void selectionsort()
{
	int j, i;
	int temp;
	int min_index;

	for (j = 1; j <= n - 1; j++)
	{
		min_index = j;
		for (j = 0; j + 1 < n - 1;)
		{
			if (afin[i] < afin[min_index]) {
				min_index = i;
				int temp = afin[j];										
				afin[j] = afin[min_index];								
				afin[min_index] = temp;
			}
		}

	}
}

void display() {														
	cout << endl;														
	cout << "================================" << endl;					
	cout << "Elemen Array Yang Telah Tersusun" << endl;					
	cout << "================================" << endl;			
	for (int j = 0; j < n; j++) {										
		cout << "Data ke-" << j + 1 << ": ";					
		cout << afin[j] << endl;											
	}
	cout << endl;														
}

int main() {
	input();
	selectionsort();
	display();
}


