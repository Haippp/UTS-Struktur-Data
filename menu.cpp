#include <iostream>
#include <conio.h>
using namespace std;

int lenArr = 0;

void inputArr(int Arr[]){
  system("cls");
  cout << "\t\t ===== Input Array =====" << "\n\n";
  cout << "Panjang Array : ";
  cin >> lenArr;
  for (int i = 0; i < lenArr; i++)
  {
    cout << "\nMasukkan nilai array ke - " << i << ": ";
    cin >> Arr[i];
  }
  cout << "\n\n\nTekan apa saja untuk melanjutkan....";
  getch();
}

void printArr(int Arr[]){
  for (int i = 0; i < lenArr; i++)
  {
    cout << Arr[i] << ' ';
  }
}

void insertionSort(int Arr[]){
  int temp;
  for (int i = 1; i < lenArr; i++)
  {
    int temp = Arr[i];
    int j = i -1;
    while (Arr[j] > temp && j >= 0)
    {
      Arr[j+1] = Arr[j];
      j--;
    }
    Arr[j+1] = temp;
  } 
}

void urutArr(int Arr[]){
  system("cls");
  cout << "\t\t==== Pengurutan Data(ASC) ====\n\n";
  cout << "Data Sebelum diurutkan : ";
  printArr(Arr);
  insertionSort(Arr);
  cout << "\nData Setelah diurutkan : ";
  printArr(Arr);
  cout << "\n\n\nTekan apa saja untuk melanjutkan....";
  getch();
}

void Info(){
  system("cls");
  cout << "\t===== Project UTS =====" << endl;
  cout << "\n\nProgram ini berfungsi untuk melakukan \nInput pada array, Menampilkan \narray, serta menyorting/mengurutkannya" << endl;
  cout << "\n\nDibuat oleh :" << endl;
  cout << "\tNama \t: Hipni" << endl;
  cout << "\tNim \t: C030324071" << endl;
  cout << "\tKelas \t: TI - 2B" << endl;
  cout << "\n\n\nTekan apa saja untuk melanjutkan....";
  getch();
}

void dMenu(){
  system("cls");
  cout<<"Aplikasi Tampilan Menu"<<"\n";   
  cout<<"1. Input Array"<<"\n";     
  cout<<"2. Tampilkan Array"<<"\n";
  cout<<"3. Urutkan Array"<<"\n";           
  cout<<"4. Info"<<"\n";            
  cout<<"5. Exit"<<"\n";           
  cout<<"Masukan angka :";        
}

int main() {
  char pl;
  int DataArr[lenArr];
  do
  {
    dMenu();
    pl=getch();
    switch (pl)
    {
    case '1':
      inputArr(DataArr);
      break;
    case '2':
      system("cls");
      printArr(DataArr);
      cout << "\n\n\nTekan apa saja untuk melanjutkan....";
      getch();
      break;  
    case '3':
      urutArr(DataArr);
      /* code */
      break;  
    case '4':
      Info();
      /* code */
      break;  
    case '5':
      /* code */
      break;
    
    default:
      system("cls");
      cout<<"Pilihan Tidak Tersedia";
      getch();
      break;
    }


  } while (pl!='5');
  return 0;
}