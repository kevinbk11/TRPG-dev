#include<iostream>
using namespace std;
void shop(int Map,int ckk)
{
	if (Map == 1 and ckk == 3)
	{
		cout << "\n��J1�R�D�� ��J2��D��\n";
	}
}
string shoplist(int Map, int ckk,int money)
{
	if (Map == 1 and ckk == 3)
	{
		string list[10] = {"�����Ĥ�","�Ŧ��Ĥ�","end" };
		int moneylist[10] = { 50,50 };
		string effect[10] = { "��_�I�ͩR","��_�I�]�O" };
		for (int k = 0; list[k] != "end"; k++)
		{
			cout << k + 1 << "." << list[k] << setw(15) << effect[k]<<setw(10)<<moneylist[k] << "�㴴��" << endl << endl;
		}
		cout  << "�㴴��:" << money;
		cout << "\n\n��J�D��N�����ʶR ��J0��^\n";
		int g;
		cin >> g;
		while (g < 0 or g>=3)
		{
			cout<<"\n�Э��s��J!\n";
			cin >> g;
		}

		if (g == 0)return "stop";
		return list[g - 1];
	}
}
int ItemMoney(string ItemName)
{
	if (ItemName == "�����Ĥ�")return 50;
	if (ItemName == "�Ŧ��Ĥ�")return 50;
}