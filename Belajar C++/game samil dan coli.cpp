#include <iostream>
#include <string>
using namespace std;
int grobak = 1 ,daging = 1 ,bumbu = 1 ,bakar = 1;
int ddaging = 100 ,dbumbu = 100 ,dbakar = 100;
float bank = 100000;
int pelanggan = 20, min_grobak;
int harga = 15000;
int level = 1;
void data();
void Cout(int i, int j, int N, string data, int item, int durab);
void main_menu();
void shop();
void upgrade(int item)
{
	int pil;
	int harga_grobak [2] = {250000,500000}
		,harga_lain [2] = {200000,300000};
	int harga_refill [3] = {10000,20000,30000};
	string string_item;
	int level, durabil = 0;
	if (item==1)
	{
		string_item = "Gerobak = lvl";
		level = grobak;	
	}
	else if (item==2)
	{
		string_item = "daging = lvl";
		level = daging;	
		durabil = ddaging;
	}
	else if (item==3)
	{
		string_item = "bumbu = lvl";
		level = bumbu;
		durabil = dbumbu;
			
	}
	else if (item==4)
	{
		string_item = "bakar = lvl";
		level = bakar;
		durabil = dbakar;
	}
	else 
	{
		cout<<"error";
		shop();		
	}
	ulang:
	for (int i=0;i<40;i++)
	{
		for (int j=0;j<40;j++)
		{
			string data = "1.upgrade        3.back", data2 = "2.refill";
			if (i==8)
				Cout(i,j,i,"saldo = ",bank,0);
			else if (i==10)
				Cout(i,j,i,string_item,level,durabil);
			else if ( i==12 && (j >= 10 && j <= (10+data.length())) )
				cout<<" "<<data[j-10]<<" ";
			else if (item > 1 && i==14 && (j >= 10 && j <= (10+data2.length())) )
				cout<<" "<<data2[j-10]<<" ";
			else if (i==0||j==0||i==39||j==39)
				cout<<" * ";
			else
				cout<<"   ";
		}
		cout<<endl;
	}
	cin>>pil;
	switch (pil)
	{
		case 1 :
//			upgrade
			if (item==1)
			{
				input:
				for (int i=0;i<40;i++)
				{
					for (int j=0;j<40;j++)
					{
					string data = "upgrade gerobak?", data2 = "1.yes     2.no";
					if (i==7)
						Cout(i,j,i,"saldo = ",bank,0);
					else if (i==9)
						Cout(i,j,i,"harga = ",harga_grobak[grobak-1],0);
					else if (i==10)
						Cout(i,j,i,string_item,level,durabil);
					else if ( i==12 && (j >= 10 && j <= (10+data.length())) )
						cout<<" "<<data[j-10]<<" ";
					else if (i==14 && (j >= 10 && j <= (10+data2.length())) )
						cout<<" "<<data2[j-10]<<" ";
					else if (i==0||j==0||i==39||j==39)
						cout<<" * ";
					else
						cout<<"   ";
					}
					cout<<endl;
				}
				cin>>pil;
				if (pil==1 && grobak <= 3 && bank >= harga_grobak[grobak-1])
				{
					bank -= harga_grobak[grobak-1];
					grobak++;
					pelanggan = 5 * (3 + grobak);
					min_grobak = pelanggan - 5;		
					
				}
				else if (pil==2)
					goto ulang;
				else 
				{
					cout<<"Anda salah input atau item lvl max";
					goto input;
				}
			}
			else if (item==2)
			{
				for (int i=0;i<40;i++)
				{
					for (int j=0;j<40;j++)
					{
					string data = "upgrade daging?", data2 = "1.yes     2.no";
					if (i==8)
						Cout(i,j,i,"saldo = ",bank,0);
					else if (i==9)
						Cout(i,j,i,"harga = ",harga_lain[daging-1],0);
					else if (i==10)
						Cout(i,j,i,string_item,level,durabil);
					else if ( i==12 && (j >= 10 && j <= (10+data.length())) )
						cout<<" "<<data[j-10]<<" ";
					else if (i==14 && (j >= 10 && j <= (10+data2.length())) )
						cout<<" "<<data2[j-10]<<" ";
					else if (i==0||j==0||i==39||j==39)
						cout<<" * ";
					else
						cout<<"   ";
					}
					cout<<endl;
				}
				cin>>pil;
				if (pil==1 && daging <= 3 && bank >= harga_lain[daging-1])
				{
					bank -= harga_lain[daging-1];
					harga += 10000 * daging;
					daging++;					
				}
				else if (pil==2)
					goto ulang;
				else 
				{
					cout<<"uang tidak cukup atau item lvl max";
					goto input;
				}
			}
			else if (item==3)
			{
				for (int i=0;i<40;i++)
				{
					for (int j=0;j<40;j++)
					{
					string data = "upgrade bumbu?", data2 = "1.yes     2.no";
					if (i==8)
						Cout(i,j,i,"saldo = ",bank,0);
					else if (i==9)
						Cout(i,j,i,"harga = ",harga_lain[bumbu-1],0);
					else if (i==10)
						Cout(i,j,i,string_item,level,durabil);
					else if ( i==12 && (j >= 10 && j <= (10+data.length())) )
						cout<<" "<<data[j-10]<<" ";
					else if (i==14 && (j >= 10 && j <= (10+data2.length())) )
						cout<<" "<<data2[j-10]<<" ";
					else if (i==0||j==0||i==39||j==39)
						cout<<" * ";
					else
						cout<<"   ";
					}
					cout<<endl;
				}
				cin>>pil;
				if (pil==1 && bumbu <= 3 && bank >= harga_lain[bumbu-1])
				{
					bank -= harga_lain[bumbu-1];
					harga += 10000 * bumbu;
					bumbu++;					
				}
				else if (pil==2)
					goto ulang;
				else 
				{
					cout<<"uang tidak cukup atau item lvl max";
					goto input;
				}			
			}
			else if (item==4)
			{
				ulang2:
				for (int i=0;i<40;i++)
				{
					for (int j=0;j<40;j++)
					{
					string data = "upgrade pembakar?", data2 = "1.yes     2.no";
					if (i==8)
						Cout(i,j,i,"saldo = ",bank,0);
					else if (i==9)
						Cout(i,j,i,"harga = ",harga_lain[bakar-1],0);
					else if (i==10)
						Cout(i,j,i,string_item,level,durabil);
					else if ( i==12 && (j >= 10 && j <= (10+data.length())) )
						cout<<" "<<data[j-10]<<" ";
					else if (i==14 && (j >= 10 && j <= (10+data2.length())) )
						cout<<" "<<data2[j-10]<<" ";
					else if (i==0||j==0||i==39||j==39)
						cout<<" * ";
					else
						cout<<"   ";
					}
					cout<<endl;
				}
				cin>>pil;
				if (pil==1 && bakar <= 3 && bank >= harga_lain[bakar-1])
				{
					bank -= harga_lain[bakar-1];
					harga += 10000 * bakar;
					bakar++;					
				}
				else if (pil==2)
					goto ulang;
				else 
				{
					cout<<"uang tidak cukup atau item lvl max";
					goto input;
				}
			}
			else 
			{
				cout<<"error";
				shop();		
			}
			break;
		case 2 :
//			refill();
			if (item==1)
			{
				cout<<"Error retry"<<endl;
				goto ulang;
			}
			else if (item==2)
			{
				for (int i=0;i<40;i++)
				{
					for (int j=0;j<40;j++)
					{
					string data = "refill daging?", data2 = "1.yes     2.no";
					if (i==8)
						Cout(i,j,i,"saldo = ",bank,0);
					else if (i==9)
						Cout(i,j,i,"harga = ",harga_refill[daging-1],0);
					else if (i==10)
						Cout(i,j,i,string_item,level,durabil);
					else if ( i==12 && (j >= 10 && j <= (10+data.length())) )
						cout<<" "<<data[j-10]<<" ";
					else if (i==14 && (j >= 10 && j <= (10+data2.length())) )
						cout<<" "<<data2[j-10]<<" ";
					else if (i==0||j==0||i==39||j==39)
						cout<<" * ";
					else
						cout<<"   ";
					}
					cout<<endl;
				}
				cin>>pil;
				if (pil==1 && daging <= 3 && bank >= harga_refill[daging-1])
				{
					bank -= harga_refill[daging-1];
					ddaging = 100;					
				}
				else if (pil==2)
					goto ulang;
				else 
				{
					cout<<"error uang tidak cukup";
					goto input;
				}
			}
			else if (item==3)
			{
				for (int i=0;i<40;i++)
				{
					for (int j=0;j<40;j++)
					{
					string data = "refill bumbu?", data2 = "1.yes     2.no";
					if (i==8)
						Cout(i,j,i,"saldo = ",bank,0);
					else if (i==9)
						Cout(i,j,i,"harga = ",harga_refill[bumbu-1],0);
					else if (i==10)
						Cout(i,j,i,string_item,level,durabil);
					else if ( i==12 && (j >= 10 && j <= (10+data.length())) )
						cout<<" "<<data[j-10]<<" ";
					else if (i==14 && (j >= 10 && j <= (10+data2.length())) )
						cout<<" "<<data2[j-10]<<" ";
					else if (i==0||j==0||i==39||j==39)
						cout<<" * ";
					else
						cout<<"   ";
					}
					cout<<endl;
				}
				cin>>pil;
				if (pil==1 && bumbu <= 3 && bank >= harga_refill[bumbu-1])
				{
					bank -= harga_refill[bumbu-1];
					dbumbu = 100;					
				}
				else if (pil==2)
					goto ulang;
				else 
				{
					cout<<"error uang tidak cukup";
					goto input;
				}	
			}
			else if (item==4)
			{
				for (int i=0;i<40;i++)
				{
					for (int j=0;j<40;j++)
					{
					string data = "refill pembakar?", data2 = "1.yes     2.no";
					if (i==8)
						Cout(i,j,i,"saldo = ",bank,0);
					else if (i==9)
						Cout(i,j,i,"harga = ",harga_refill[bakar-1],0);
					else if (i==10)
						Cout(i,j,i,string_item,level,durabil);
					else if ( i==12 && (j >= 10 && j <= (10+data.length())) )
						cout<<" "<<data[j-10]<<" ";
					else if (i==14 && (j >= 10 && j <= (10+data2.length())) )
						cout<<" "<<data2[j-10]<<" ";
					else if (i==0||j==0||i==39||j==39)
						cout<<" * ";
					else
						cout<<"   ";
					}
					cout<<endl;
				}
				cin>>pil;
				if (pil==1 && daging <= 3 && bank >= harga_refill[bakar-1])
				{
					bank -= harga_refill[bakar-1];
					dbakar = 100;					
				}
				else if (pil==2)
					goto ulang;
				else 
				{
					cout<<"error uang tidak cukup";
					goto input;
				}
			}
			else 
			{
				cout<<"error";
				shop();		
			}
			break;
		case 3 :
			shop();
			break;
		default :
			cout<<"Error";
			goto ulang;
	}
	shop();
}
void shop()
{
	int pil;
	for (int i=0;i<40;i++)
	{
		for (int j=0;j<40;j++)
		{
			string data = "welcome to shop", data2 = "pick item ingin di upgrade/refill", data3 = "5.back";
			if ( i==12 && ( j>= 20-(data.length()/2) && j <= ( 20+(data.length()/2)) ) )
				cout<<" "<<data[j-(20-(data.length()/2))]<<" ";
			else if ( i==13 && ( j>= 20-(data2.length()/2) && j <= ( 20+(data2.length()/2)) ) )
				cout<<" "<<data2[j-(20-(data2.length()/2))]<<" ";
			else if (i==17)
				Cout(i,j,i,"saldo = ",bank,0);
			else if (i==19)
				Cout(i,j,i,"1.Gerobak = lvl",grobak,0);
			else if (i==21)
				Cout(i,j,i,"2.Daging = lvl",daging,ddaging);
			else if (i==23)
				Cout(i,j,i,"3.Bumbu = lvl",bumbu,dbumbu);
			else if (i==25)
				Cout(i,j,i,"4.Bakar = lvl",bakar,dbakar);
			else if ( i==27 && ( j>= 20-(data3.length()/2) && j <= ( 20+(data3.length()/2)) ) )
				cout<<" "<<data3[j-(20-(data3.length()/2))]<<" ";
			else if (i==0||j==0||i==39||j==39)
				cout<<" * ";
			else
				cout<<"   ";
		}
		cout<<endl;
	}	
	cin>>pil;
	if (pil==5)
		data();
	upgrade (pil);
}
void gameover()
{
	for (int i=0;i<40;i++)
	{
		for (int j=0;j<40;j++)
		{
			string data = "GAME OVER";
			if ( i==15 && ( j>= 20-(data.length()/2) && j <= ( 20+(data.length()/2)) ) )
				cout<<" "<<data[j-(20-(data.length()/2))]<<" ";
			else if (i==17)
				Cout(i,j,i,"saldo = ",bank,0);
			else if (i==19)
				Cout(i,j,i,"Gerobak = lvl",grobak,0);
			else if (i==21)
				Cout(i,j,i,"Daging = lvl",daging,ddaging);
			else if (i==23)
				Cout(i,j,i,"Bumbu = lvl",bumbu,dbumbu);
			else if (i==25)
				Cout(i,j,i,"Bakar = lvl",bakar,dbakar);
			else if (i==0||j==0||i==39||j==39)
				cout<<" * ";
			else
				cout<<"   ";
		}
		cout<<endl;
	}
}
void level_start ()
{
	bank += pelanggan * harga;
	bank -= ((50000 * level / 100) + 50000);
	ddaging -= 10;
	dbumbu -= 10;
	dbakar -= 10;
	level++;
	if (pelanggan >= min_grobak)
		pelanggan--;
	if (ddaging > 0 && dbumbu > 0 && dbakar > 0)
		data();
	else
		gameover();
}
void Cout(int i, int j, int N, string data, int item, int durab)
{
	int array = data.length();
	if (i==N && (j>=10 && j<=(10+array)))
		cout<<" "<<data[j-10]<<" ";
	else if (j==10+(array+1))
		cout<<" "<<item<<" ";
	else if (j==10+(array+2))
		cout<<" "<<"|"<<" ";
	else if (j==10+(array+3))
	{
		if (durab!=0)
			cout<<" "<<durab<<"%";
	}
	else
		cout<<"   ";
}
void data()
{
	int pil;
	for (int i=0;i<40;i++)
	{
		for (int j=0;j<40;j++)
		{
			string data = "inventory", data2 = "1.mulai   2.shop   3.main menu";
			if (i==3 && (j>=20-(data.length()/2) && j<=(20+(data.length()/2))))
				cout<<" "<<data[j-(20-(data.length()/2))]<<" ";
			else if (i==5)
				Cout(i,j,i,"Gerobak = lvl",grobak,0);
			else if (i==7)
				Cout(i,j,i,"Daging = lvl",daging,ddaging);
			else if (i==9)
				Cout(i,j,i,"Bumbu = lvl",bumbu,dbumbu);
			else if (i==11)
				Cout(i,j,i,"Bakar = lvl",bakar,dbakar);
			else if (i==13)
				Cout(i,j,i,"saldo = ",bank,0);
			else if (i==30 && (j>=20-(data2.length()/2) && j<=(20+(data2.length()/2))))
				cout<<" "<<data2[j-(20-(data2.length()/2))]<<" ";
			else if (i==0||j==0||i==39||j==39)
				cout<<" * ";
			else
				cout<<"   ";	
		}
		cout<<endl;
	}
	ulang:
	cin>>pil;
	switch (pil)
	{
		case 1 :
			level_start();
			break;
		case 2 :
			shop();
			break;
		case 3 :
			main_menu();
			break;
		default :
			cout<<"Error";
			goto ulang;
	}
}
void main_menu()
{
	grobak = 1 ,daging = 1 ,bumbu = 1 ,bakar = 1;
	ddaging = 100 ,dbumbu = 100 ,dbakar = 100;
	bank = 1000000;
	pelanggan = 20;
	harga = 15000;
	level = 1;
	int pil;
	for (int i=0;i<40;i++)
	{
		for (int j=0;j<40;j++)
		{
			string start="1.start",quit = "2.quit",judul="Tukang sate simulator";
			if(i==19&&(j>=16&&j<=22))
			{	
				cout<<" "<<start[j-16]<<" ";
			}else if(i==17&&(j>=10&&j<=31))
			{
				cout<<" "<<judul[j-10]<<" ";
			}else if(i==20&&(j>=16&&j<=21))
			{
				cout<<" "<<quit[j-16]<<" ";
			}else if(i==0||j==0||i==39||j==39)
			{
				cout<<" * ";
			}else
			{
				cout<<"   ";	
			} 	
		}
		cout<<endl;
	}
	ulang:
	cin>>pil;
	switch (pil)
	{
		case 1 :
			data();
			break;
		case 2 :
			break;
		default :
			cout<<"Error";
			goto ulang;
	}
}
int main() 
{
	main_menu();
	return 0;
}
