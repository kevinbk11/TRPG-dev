#include<iostream>
#include<string>
using namespace std;
string armr(string job,int damage,int str,int dex,int iq)//���βz�o��
{
	if (job == "fighter" and damage  == 3 and str == 5)
	{
		return "��C";
	}
	if (job == "fighter" and damage == 5 and str == 7)
	{
		return "�����C";
	}
}
/////////////////////////////////////////���U���N�n
int Damage(string ItemName)
{
	if (ItemName == "none")return 0;
	if (ItemName == "�P��")return 30;
	if (ItemName == "���")return 20;
	if (ItemName == "��}") return 30;
	if (ItemName == "��C") return 35;
	if (ItemName == "�����C") return 50;
	if (ItemName == "�s��W��") return 0;
	if (ItemName == "�s��Ǥl") return 0;
	if (ItemName == "�����Y��") return 0;
}
int Def(string ItemName)
{
	if (ItemName == "none")return 0;
	if (ItemName == "���")return 0;
	if (ItemName == "��}") return 0;
	if (ItemName == "��C") return 0;
	if (ItemName == "�P��")return 0;
	if (ItemName == "�����C") return 0;
	if (ItemName == "�s��W��") return 35;
	if (ItemName == "�s��Ǥl") return 20;
	if (ItemName == "�����Y��") return 150;
}
int Str(string ItemName)
{

	if (ItemName == "none")return 0;
	if (ItemName == "�P��")return 0;
	if (ItemName == "���")return 0;
	if (ItemName == "��}") return 0;
	if (ItemName == "��C") return 12;
	if (ItemName == "�����C") return 20;
	if (ItemName == "�s��W��") return 0;
	if (ItemName == "�s��Ǥl") return 0;
	if (ItemName == "�����Y��") return 0;
}
int Dex(string ItemName)
{	
	if (ItemName == "���")return 0;
	if (ItemName == "none")return 0;
	if (ItemName == "�P��")return 0;
	if (ItemName == "��}") return 16;
	if (ItemName == "��C") return 0;
	if (ItemName == "�����C") return 0;
	if (ItemName == "�s��W��") return 0;
	if (ItemName == "�s��Ǥl") return 0;
	if (ItemName == "�����Y��") return 0;
}
int Int(string ItemName)
{
	if (ItemName == "���")return 20;
	if (ItemName == "none")return 0;
	if (ItemName == "�P��")return 0;
	if (ItemName == "��}") return 0;
	if (ItemName == "��C") return 0;
	if (ItemName == "�����C") return 0;
	if (ItemName == "�s��W��") return 0;
	if (ItemName == "�s��Ǥl") return 0;
	if (ItemName == "�����Y��") return 0;
}
int Luk(string ItemName)
{
	if (ItemName == "���")return 0;
	if (ItemName == "�P��")return 16;
	if (ItemName == "��}") return 0;
	if (ItemName == "none")return 0;
	if (ItemName == "��C") return 0;
	if (ItemName == "�����C") return 0;
	if (ItemName == "�s��W��") return 0;
	if (ItemName == "�s��Ǥl") return 0;
	if (ItemName == "�����Y��") return 0;
}
int check(string ItemName)
{
	if (ItemName == "���")return 0;
	if (ItemName == "�P��")return 0;
	if (ItemName == "��}") return 0;
	if (ItemName == "��C") return 0;
	if (ItemName == "�����C") return 0;
	if (ItemName == "�s��W��") return 2;
	if (ItemName == "�s��Ǥl") return 3;
	if (ItemName == "�����Y��") return 1;
}
int UseItem(string Item)
{
	if (Item == "���")
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int ItemHp(string Item)
{
	if (Item == "���")
	{
		return 50;
	}
}
