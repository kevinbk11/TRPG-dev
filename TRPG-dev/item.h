#include<iostream>
#include<string>
#include <fstream>
using namespace std;
ifstream w;
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
//typedef struct ItemData ���ӥi��|��
//{
//	int id;
//	string name;
//	int damage;
//}ItemType;
//ItemType I[100];
//void ReadItemData()
//{
//	w.open("ItemData.txt", ios::in);
//	for (int read = 0; 1; read++)
//	{
//		w >> I[read].id;
//		if (I[read].id == -1)break;
//		w >> I[read].name;
//		w >> I[read].damage;
//	}
//	w.close();
//}
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
int check(string ItemName)//�D�㪺���� 1�O�Y�� 2�O��A 3�O�Ǥl 4�O�c�l 5�O��M 0�O�Z��
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
int UseItem(string Item) //�^�ǸӹD��O�_��ϥ� ����ϥδN���μg ��ϥδN�n�S�O�g�@��if (Item == "something") return 1
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
int ItemHp(string Item) // �D��^�_����q
{
	if (Item == "���")
	{
		return 50;
	}
}
int ItemPrize(string Item) //�D���X�����
{
	if (Item == "�H��")return 20;
	if (Item == "�Ф�")return 20;
	if (Item == "�����L����")return 25;
}
