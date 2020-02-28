#include<iostream>
#include<string>
#include<time.h>
using namespace std;
int p;
int HisHP(string Monster)
{
	if (Monster == "小石怪")
	{
		return 135;
	}
	else if (Monster == "轉轉鳥")
	{
		return 90;
	}
	else if (Monster == "哥布林小鬼")
	{
		return 140;
	}
	else if (Monster == "哥布林戰士")
	{
		return 177;
	}
	else if (Monster == "大石怪")
	{
		return 0;
	}
	else if (Monster == "摳摳龜")
	{
		return 0;
	}
	else if (Monster == "中古龜")
	{
		return 0;
	}
}
int HisDamage(string Monster)
{
	if (Monster == "小石怪")
	{
		return 12;
	}
	else if (Monster == "轉轉鳥")
	{
		return 9;
	}
	else if (Monster == "哥布林小鬼")
	{
		return 15;
	}
	else if (Monster == "哥布林戰士")
	{
		return 18;
	}
	else if (Monster == "大石怪")
	{
		return 0;
	}
	else if (Monster == "摳摳龜")
	{
		return 0;
	}
	else if (Monster == "中古巨龜")
	{
		return 0;
	}
}
int HisEXP(string Monster)
{
	if (Monster == "小石怪")
	{
		return 35;
	}
	else if (Monster == "轉轉鳥")
	{
		return 30;
	}
	else if (Monster == "哥布林小鬼")
	{
		return 35;
	}
	else if (Monster == "哥布林戰士")
	{
		return 40;
	}
	else if (Monster == "大石怪")
	{
		return 0;
	}
	else if (Monster == "摳摳龜")
	{
		return 0;
	}
	else if (Monster == "中古巨龜")
	{
		return 0;
	}
}
int HisSkill(string Monster) //1就是觸發技能 0 就是未觸發
{
	srand(time(NULL));
	p = ((rand() * rand()) % 1648) % 100;
	if (Monster == "小石怪")
	{
		return 0;
	}
	else if (Monster == "轉轉鳥")
	{
		if (p >= 20)
		{
			return 0;
		}
		else if (p < 20)
		{
			return 1;
		}
	}
	else if (Monster == "哥布林小鬼")
	{
		return 0;
	}
	else if (Monster == "哥布林戰士")
	{
		if (p >= 20)
		{
			return 0;
		}
		else if (p < 20)
		{
			return 1;
		}
	}
	else if (Monster == "大石怪")
	{
		return 0;
	}
	else if (Monster == "摳摳龜")
	{
		return 0;
	}
	else if (Monster == "中古巨龜")
	{
		return 0;
	}
}
int LV(string MonsterName) //怪物等級 目前還不清楚要幹嘛
{
	if (MonsterName == "轉轉鳥")
	{
		return 1;
	}
	else if (MonsterName == "小石怪")
	{
		return 2;
	}
	else if (MonsterName == "哥布林小鬼")
	{
		return 3;
	}
	else if (MonsterName == "哥布林戰士")
	{
		return 4;
	}
	else if (MonsterName == "大石怪")
	{
		return 6;
	}
	else if (MonsterName == "摳摳龜")
	{
		return 7;
	}
	else if (MonsterName == "中古巨龜")
	{
		return 9;
	}
}
float GetSkillDamage(string HisSkillName) //怪物的技能傷害倍率
{
	if (HisSkillName == "二連啄")
	{
		return 2;
	}
	if (HisSkillName == "重捶")
	{
		return 1.5;
	}
}
int SpecialEffect(string Monster)
{
	srand(time(NULL));
	p = ((rand() * rand()) % 1608) % 100; //601是暈眩
	//if (Monster == "轉轉鳥")
	//{
	//	if (p < 10)
	//	{
	//		return 601;
	//	}
	//	else
	//	{
	//		return 0;
	//	}
	//}
}
string HisSkillName(string Monster) //怪物的技能名稱
{
	if (Monster == "小石怪")
	{
		return "none";
	}
	else if (Monster == "轉轉鳥")
	{
		return "二連啄";
	}
	else if (Monster == "哥布林小鬼")
	{
		return "none";
	}
	else if (Monster == "哥布林戰士")
	{
		return "重捶";
	}
	else if (Monster == "大石怪")
	{
		return "none";
	}
	else if (Monster == "摳摳龜")
	{
		return "none";
	}
	else if (Monster == "中古巨龜")
	{
		return "none";
	}
}
string GetPrize(string MonsterName,int QuestOrNot ,int done) //怪物掉落物 
{
	int p;
	if (MonsterName == "轉轉鳥")
	{
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (QuestOrNot == 2 and done==0)
		{
			if (p >= 75)
			{
				cout << "你獲得了商人的錢包";
				return "商人的錢包";
			}
		}
		if (p >= 20)
		{
			cout << "你獲得了羽毛";
			return "羽毛";
		}
		else
		{
			return "none";
		}
	}
	else if (MonsterName == "小石怪")
	{
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (p >= 20)
		{
			cout << "你獲得了碎石";
			return "碎石";
		}
		else
		{
			return "none";
		}
	}
	else if (MonsterName == "哥布林小鬼")
	{
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (p >= 20)
		{
			cout << "你獲得了哥布林圖騰";
			return "哥布林圖騰";
		}
		else
		{
			return "none";
		}
	}
	else if (MonsterName == "哥布林戰士")
	{
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (p >= 20)
		{
			cout << "你獲得了哥布林圖騰";
			return "哥布林圖騰";
		}
		else
		{
			return "none";
		}
	}
}
int GetCount(string MonsterName,int Quest) //掉落物掉幾個
{
	int p;
	if (MonsterName == "轉轉鳥")
	{
		if (Quest == 2)
		{
			cout << "!\n\n";
			return 1;
		}
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (p >= 50)
		{
			cout << "x2!\n\n";
			return 2;
		}
		else
		{
			cout << "!" << endl << endl;
			return 1;
		}
	}
	else if (MonsterName == "小石怪")
	{
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (p >= 50)
		{
			cout << "x2!\n\n";
			return 2;
		}
		else
		{
			cout << "!\n\n";
			return 1;
		}
	}
	else if (MonsterName == "哥布林小鬼")
	{
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (p >= 50)
		{
			cout << "x2!\n\n";
			return 2;
		}
		else
		{
			cout << "!\n\n";
			return 1;
		}
	}
	else if (MonsterName == "哥布林戰士")
	{
		p = (rand() * 35 % 352 * rand() + 32) % 100;
		if (p >= 50)
		{
			cout << "x2!\n\n";
			return 2;
		}
		else
		{
			cout << "!\n\n";
			return 1;
		}
	}
}

