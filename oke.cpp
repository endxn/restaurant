#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include "oh.h"
#include "lo.h"

using namespace std;
int nm,isi,ch;

struct node
{
    int noMeja;
	string namaPelanggan;
	struct node *next;
}*front=NULL,*rear,*temp;

void InputPelanggan()
{
	temp=new node;
	string n;
	cout<<"Input No Meja\t\t: ";
	cin>>nm;
    cin.ignore(1,'\n');
    cout<<"Nama Pelanggan\t\t: ";
    getline(cin,n);
	temp->noMeja=nm;
	temp->namaPelanggan=n;
	temp->next=NULL;

	if(front==NULL)
		front=rear=temp;
	else
	{
		rear->next=temp;
		rear=temp;
	}
}

void hapus()

{
	if(front==NULL)
		{cout<<" Belum ada data nomor meja yang dapat dihapus !!\n";
		getch();}
	else
	{
		temp=front;
		front=front->next;
		cout<<" \n\nNomer Meja "<<temp->noMeja<<" telah dihapus";
		delete(temp);
		getch();
	}
}
void dis()
{
	if(front==NULL)
		{cout<<"Belum ada pelanggan !!\n";
		getch();}
	else
	{
		temp=front;
					cout<<"No Meja \t||\tNama Pelanggan"<<"\n==============================="<<endl;
		while(temp!=NULL)
		{

			cout<<temp->noMeja<<"\t\t||\t"<<temp->namaPelanggan<<"\n";

			temp=temp->next;
		}
		getch();
	}
}

void cari()
{
    node *temp;
    temp=front;
    int caridata;
    int ketemu=0;
    if(front != NULL)
    {
        cout<<"\n\nInput nomer meja \t: ";
        cin>>caridata;
        while(temp!=NULL)
        {
            temp->noMeja;
            if(caridata==temp->noMeja)
            {
                cout<<"\t  No Meja Terisi oleh :"<<temp->namaPelanggan<<endl;
                cout<<" ------------------------------"<<endl;
                cout<<"\n\n";
              ketemu=1;
            }
            temp=temp->next;
        }
        if(ketemu==0)
        {
            cout<<" Meja Belum ada pelanggan ";
        }
    }
    else cout<<"Belum ada pelanggan !";
    getch();
}

void cek()
{
    node *temp;
    temp=front;
    int ketemu=0;
    if(front != NULL)
    {
        cout<<"\n Input no meja\t: ";
        cin>>nm;
        while(temp!=NULL)
        {
            temp->noMeja;
            if(nm==temp->noMeja)
            {
                cout<<" \n\n\tMeja Terisi";
                ketemu=1;
            }
            temp=temp->next;
        }
        if(ketemu==0)
        {
		cout << " \n\n\tMeja Avaiable";
		}
    }
    else cout << "\n\tBelum ada pelanggan";
    getch();
}
int main()
{
	
	int ch,nm,isi,ya, lagi;
	while(1)
	{

	
menu :
		system("cls");
		cout<<"\n\n=================================================";
	    cout<<"\n                   WARUNG MALANG             ";
		cout<<"\n_________________________________________________";
		cout<<"\n                   PILIH SISTEM                    ";
        cout<<"\n=================================================";
		cout<<"\n\t 1.Input Meja Pelanggan ";
		cout<<"\n\t 2.Hapus Meja Pelanggan";
		cout<<"\n\t 3.Tampilkan Menu Makanan";
		cout<<"\n\t 4.Cek Avaiable Meja";
		cout<<"\n\t 5.Tampilkan Data Semua Meja";
		cout<<"\n\t 6.Reservasi";
		cout<<"\n\t 7.Keluar";
		cout<<"\n\n\t Masukkan Pilihan (1-4): ";
		cin>>ch;
		cout<<"\n=================================================";
		cout<<"\n";
		switch(ch)
		{
			case 1:
			    InputPelanggan();
                break;
			case 2:
			    hapus();
			    break;
            case 3:
                goto menumakan;
            case 4:
                cek();
                break;
			case 5:
			    dis();
                break;
            case 6:
                cari();
                break;
			case 7:
			    exit(0);
                break;
			default:
			    goto menu;
		}
	}

		
menumakan:	
	system("cls");
	Makanan Makanan1("Mie","Setan", 5000);
	Makanan Makanan2("Mie","Rainbow", 10000);
	Makanan Makanan3("Ayam","Geprek", 12000);
	Makanan Makanan4("Ayam","Rica", 14000);
	Makanan Makanan5("Nasi","Putih", 3000);
	Makanan Makanan6("Nasi","Jagung", 3000);
	
	cout<<"\n\n=================================================";
	cout<<"\n                   WARUNG MALANG             ";
	cout<<"\n_________________________________________________";
	cout<<"\n                   PILIH MENU                    ";
    cout<<"\n=================================================";
	cout << "\nMenu\t||\tVarian\t\t||\Harga" <<endl;
	cout << "=================================================" <<endl;
	Makanan1.lihat();
	Makanan2.lihat();
	Makanan3.lihat();
 	Makanan4.lihat();
	Makanan5.lihat();
	Makanan6.lihat(); 
	cout << "=================================================" <<endl;
		
	cout << "\n\n\n\tapakah anda ingin melanjutkan ? (1 untuk Ya)" <<endl;
	cin >> ya;
	if(ya==1){
			goto menu;
	} else {
		goto exit;
		}

exit :	

	return 0;

}

