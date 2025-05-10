#include <iostream>
#include <conio.h>
using namespace std;

void Info(){
  system("cls");
  cout << "\t===== Project UTS =====" << endl;
  cout << "\n\nProgram ini berfungsi untuk melakukan \nInput pada array, Menampilkan \narray, serta menyorting/mengurutkannya" << endl;
  cout << "\n\nDibuat oleh :" << endl;
  cout << "\tNama \t: Hipni" << endl;
  cout << "\tNim \t: C030324071" << endl;
  cout << "\tKelas \t: TI - 2B" << endl;
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

void mPertama(string pesan){
  system("cls");
  cout<<"hallo saya menu "<<pesan;
  getch();
}


int main() {
  char pl;
  do
  {
      dMenu();
      pl=getch();
    switch (pl)
    {
    case '1':
      /* code */
      mPertama("pertama");
      break;
    case '2':
      mPertama("ke- dua");
      /* code */ 
      break;  
    case '3':
      mPertama("ke- tiga");
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