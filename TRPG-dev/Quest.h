﻿#include<iostream>
#include<string>//K
using namespace std;
ofstream qwe;
ifstream qqe;
struct NPC
{
	string NPCName;
	string NPCQuest;
};
NPC A;
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
int Quest(string MapName, int NpcNumber)
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
	if (QuestNumber == 1)
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
	if (QuestNumber == 2)
	{
		qwe.close();
		return 1;
	}
	if (QuestNumber == 0)
	{
		qwe.close();
		return 0;
	}
}
int aa=0, bb=0, cc=0, dd=0,ee=0;
void QuestItem(int QuestNumber, string ItemName, int count)
{
	if (QuestNumber == 1)
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
	else if (QuestNumber == 2)
	{
		if (ItemName == "商人的錢包")
		{
			aa = count;
		}
	}
}
int DeleteItemCount(string name,int QuestNumber)
{
	if (QuestNumber == 1)
	{
		if (name == "碎石")
		{
			return 1;
		}
		else if (name == "羽毛")
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (QuestNumber == 2)
	{
		return 1;
	}
}
int QuestItem(int QuestNumber)
{
	if (QuestNumber == 1)
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
			return 0;
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
int PrizeMoneyCheck(string map, int who)
{
	if (map == "艾村" and who==2)return 300;
	if (map == "艾村" and who == 3)return 500;
	else
	{
		return 0;
	}
}
int PrizeExpCheck(string map, int who)
{
	if (map == "艾村" and who==2)return 80;
	if (map == "艾村" and who == 3)return 120;
	else
	{
		return 0;
	}
}
string PrizeItemCheck(string map, int who,string playerjob)
{
	if (map == "艾村" and who==2)return "NULL";
	if (map == "艾村" and who == 3)return "NULL";
}
