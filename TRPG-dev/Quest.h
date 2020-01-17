#include<iostream>
#include<string>
using namespace std;
ofstream qwe;
ifstream qqe;
int a, b, c, d, e;
void CountLoad()
{
	qqe >> a;
	qqe >> b;
	qqe >> c;
	qqe >> d;
	qqe >> e;
	qqe.close();
}
void CountSave()
{
	qwe << a << endl;
	qwe << b << endl;
	qwe << c << endl;
	qwe << d << endl;
	qwe << e << endl;
	qwe.close();
}
int Quest(string MapName, int NpcNumber) //回傳任務代碼 0就是沒有任務 1就是第一個任務 2就是第二個任務
{
	if (MapName == "艾村" and NpcNumber==2)
	{
		return 1;
	}
	else if (MapName == "艾村" and NpcNumber == 3)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}	
void loadQuest(int s)
{
	if (s == 1)
	{
	qqe.open("QuestSchedule.txt", ios::in);
	}
	else if (s == 2)
	{
		qqe.open("QuestSchedule2.txt", ios::in);
	}
	else if (s == 3)
	{
		qqe.open("QuestSchedule3.txt", ios::in);
	}
	else if (s == 4)
	{
		qqe.open("QuestSchedule4.txt", ios::in);
	}
	CountLoad();
}
int QuestReturn(int QuestNumber, string Monster,int s)
{
        switch (s)
		{
		case 1:
			qwe.open("QuestSchedule.txt", ios::out);
			break;
		case 2:
			qwe.open("QuestSchedule2.txt", ios::out);
			break;
		case 3:
			qwe.open("QuestSchedule3.txt", ios::out);
			break;
		case 4:
			qwe.open("QuestSchedule4.txt", ios::out);
			break;
		}
	if (QuestNumber == 1)//任務1 如果需要打算的話可以拿a b c d e這五個其中一個當計數變數
	{
		if (Monster == "轉轉鳥")
		{
			a++;
			if (a >= 1 and b >= 1)
			{
				CountSave();
				return 1;
			}
			CountSave();
			return 0;
		}
		if (Monster == "小石怪")
		{
			b++;
			if (a >= 1 and b >= 1)
			{
				CountSave();
				return 1;
			}
			CountSave();
			return 0;
		}
		if (a >= 1 and b >= 1)
		{
			CountSave();
			return 1;
		}
	}
	if (QuestNumber == 2)//任務2 這個任務不需要計算打的怪物數量 所以直接return 1
	{
		qwe.close();
		return 1;
	}
	if (QuestNumber == 0)//沒有任務
	{
		qwe.close();
		return 0;
	}
}
int aa=0, bb=0, cc=0, dd=0,ee=0;
void QuestItem(int QuestNumber, string ItemName, int count) // 計算怪物掉落物的數量
{
	if (QuestNumber == 1)//任務1
	{
		if (ItemName == "羽毛")
		{
			aa = count;
		}
		else if (ItemName == "碎石")
		{
			bb = count;
		}
	}
	else if (QuestNumber == 2)//任務2
	{
		if (ItemName == "商人的錢包")
		{
			aa = count;
		}
	}
}
int DeleteItemCount(string name,int QuestNumber)//刪除任務所需的道具
{
	if (QuestNumber == 1)//任務1 需要1個碎石1個羽毛 
	{
		if (name == "碎石")
		{
			return 1; //因為需要1個所以return 1 也就是刪除1個
		}
		else if (name == "羽毛")
		{
			return 1;//因為需要1個所以return 1 也就是刪除1個
		}
		else
		{
			return 0;//如果不是羽毛或碎石的話就return 0 也就是刪除0個
		}
	}
	if (QuestNumber == 2 and name=="商人的錢包")//任務2 需要一個錢包
	{
		return 1;//因為需要1個所以return 1 也就是刪除1個
	}
	else
	{
		return 0;//如果不是錢包的話就return 0 也就是刪除0個
	}
}
int QuestItem(int QuestNumber)//由於程式架構是先判斷怪物數量夠不夠 才會再判斷掉落物夠不夠
{
	if (QuestNumber == 1)//如果任務道具蒐集完畢的話 就將該任務使用過的計數變數歸零 並且return 1 也就是完成
	{
		if (aa >= 1 and bb >= 1)
		{
			aa = 0;
			bb = 0;
			a = 0;
			b = 0;
			CountSave();
			return 1;
		}
		else
		{
			return 0; //尚未完成
		}
	}
	else if (QuestNumber == 2)
	{
		if (aa == 1)
		{
			aa = 0;
			return 1;
		}
	}
}
int PrizeMoneyCheck(string map, int who)//金錢獎勵
{
	if (map == "艾村" and who==2)return 300;
	if (map == "艾村" and who == 3)return 500;
	else
	{
		return 0;
	}
}
int PrizeExpCheck(string map, int who)//經驗獎勵
{
	if (map == "艾村" and who==2)return 80;
	if (map == "艾村" and who == 3)return 120;
	else
	{
		return 0;
	}
}
string PrizeItemCheck(string map, int who,string playerjob)//道具獎勵 沒有的話return NULL
{
	if (map == "艾村" and who==2)return "NULL";
	if (map == "艾村" and who == 3)return "NULL";
}
