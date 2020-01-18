#include<iostream>
#include<string>
#include <fstream>
using namespace std;
ifstream w;
string armr(string job,int damage,int str,int dex,int iq)//不用理這裡
{
	if (job == "fighter" and damage  == 3 and str == 5)
	{
		return "木劍";
	}
	if (job == "fighter" and damage == 5 and str == 7)
	{
		return "高等劍";
	}
}
/////////////////////////////////////////更改下面就好
//typedef struct ItemData 未來可能會用
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
	if (ItemName == "匕首")return 30;
	if (ItemName == "木杖")return 20;
	if (ItemName == "木弓") return 30;
	if (ItemName == "木劍") return 35;
	if (ItemName == "高等劍") return 50;
	if (ItemName == "新手上衣") return 0;
	if (ItemName == "新手褲子") return 0;
	if (ItemName == "高級頭盔") return 0;
}
int Def(string ItemName)
{
	if (ItemName == "none")return 0;
	if (ItemName == "木杖")return 0;
	if (ItemName == "木弓") return 0;
	if (ItemName == "木劍") return 0;
	if (ItemName == "匕首")return 0;
	if (ItemName == "高等劍") return 0;
	if (ItemName == "新手上衣") return 35;
	if (ItemName == "新手褲子") return 20;
	if (ItemName == "高級頭盔") return 150;
}
int Str(string ItemName)
{

	if (ItemName == "none")return 0;
	if (ItemName == "匕首")return 0;
	if (ItemName == "木杖")return 0;
	if (ItemName == "木弓") return 0;
	if (ItemName == "木劍") return 12;
	if (ItemName == "高等劍") return 20;
	if (ItemName == "新手上衣") return 0;
	if (ItemName == "新手褲子") return 0;
	if (ItemName == "高級頭盔") return 0;
}
int Dex(string ItemName)
{	
	if (ItemName == "木杖")return 0;
	if (ItemName == "none")return 0;
	if (ItemName == "匕首")return 0;
	if (ItemName == "木弓") return 16;
	if (ItemName == "木劍") return 0;
	if (ItemName == "高等劍") return 0;
	if (ItemName == "新手上衣") return 0;
	if (ItemName == "新手褲子") return 0;
	if (ItemName == "高級頭盔") return 0;
}
int Int(string ItemName)
{
	if (ItemName == "木杖")return 20;
	if (ItemName == "none")return 0;
	if (ItemName == "匕首")return 0;
	if (ItemName == "木弓") return 0;
	if (ItemName == "木劍") return 0;
	if (ItemName == "高等劍") return 0;
	if (ItemName == "新手上衣") return 0;
	if (ItemName == "新手褲子") return 0;
	if (ItemName == "高級頭盔") return 0;
}
int Luk(string ItemName)
{
	if (ItemName == "木杖")return 0;
	if (ItemName == "匕首")return 16;
	if (ItemName == "木弓") return 0;
	if (ItemName == "none")return 0;
	if (ItemName == "木劍") return 0;
	if (ItemName == "高等劍") return 0;
	if (ItemName == "新手上衣") return 0;
	if (ItemName == "新手褲子") return 0;
	if (ItemName == "高級頭盔") return 0;
}
int check(string ItemName)//道具的種類 1是頭盔 2是衣服 3是褲子 4是鞋子 5是手套 0是武器
{
	if (ItemName == "木杖")return 0;
	if (ItemName == "匕首")return 0;
	if (ItemName == "木弓") return 0;
	if (ItemName == "木劍") return 0;
	if (ItemName == "高等劍") return 0;
	if (ItemName == "新手上衣") return 2;
	if (ItemName == "新手褲子") return 3;
	if (ItemName == "高級頭盔") return 1;
}
int UseItem(string Item) //回傳該道具是否能使用 不能使用就不用寫 能使用就要特別寫一個if (Item == "something") return 1
{
	if (Item == "艾草")
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int ItemHp(string Item) // 道具回復的血量
{
	if (Item == "艾草")
	{
		return 50;
	}
}
int ItemPrize(string Item) //道具賣出的單價
{
	if (Item == "碎石")return 20;
	if (Item == "羽毛")return 20;
	if (Item == "哥布林圖騰")return 25;
}
