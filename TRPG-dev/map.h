#include<iostream>
#include<string>
#include<time.h>
using namespace std;
struct MAP
{
	string MapName;
	string MonsterName;
};
MAP MapData;

int PrintMonster(int map) // return 1 就是有怪 return 0 就是沒怪 也就不用cout了 return 2 是遇到菁英怪的訊息
{
	int p;
	p =( rand() * 459 / 246 + 947*rand()/320 * 472 % 49 * 973) % 100;
	if (map == 0)
	{
		cout << "輸入1與轉轉鳥戰鬥   輸入2與小石怪戰鬥   輸入0返回\n";
		return 1;
	}
	else if (map == 1)
	{
		return 0;
	}
	else if (map == 2)
	{
		cout << "輸入1與哥布林小鬼戰鬥   輸入2與哥布林戰士戰鬥   輸入0返回\n";
		return 1;
	}
	else if (map == 3)
	{
		if (p <90)
		{
			cout << "輸入1與大石怪戰鬥   輸入2摳摳龜戰鬥   輸入0返回\n";
			return 1;
		}
		if (p >= 90)
		{
			cout << "你看見了中古巨龜!\n輸入1與大石怪戰鬥   輸入2與摳摳龜戰鬥   輸入3和中古巨龜戰鬥   輸入0返回\n";
			return 1;//2
		}
	}
	else if (map == 4)
	{
		if (p < 90)
		{
			cout << "輸入1與刺殼蝸牛戰鬥   輸入2與箭甲龜戰鬥   輸入3與古代犰狳戰鬥   戰鬥輸入0返回\n";
			return 1;
		}
		if (p >= 90) 
		{
			cout << "你看見了史前巨龜!\n輸入1與刺殼蝸牛戰鬥   輸入2與箭甲龜戰鬥   輸入3與古代犰狳戰鬥   戰鬥4和史前巨龜戰鬥   輸入0返回\n";
			return 2;
		}
	}
	else if (map == 5)
	{
		cout << "輸入1與感染病患戰鬥   輸入2與感染屍體戰鬥   輸入3與血蝙蝠戰鬥   戰鬥輸入0返回\n";
		return 1;
	}
	else if (map == 6)
	{
		cout << "輸入1與異變病患戰鬥   輸入2與異變屍體戰鬥   輸入3與血蜘蛛戰鬥   戰鬥輸入0返回\n";
		return 1;
	}
	else if (map == 7)
	{
		cout << "輸入1與哥布林小鬼戰鬥   輸入2與哥布林戰士戰鬥   輸入0返回\n";
		return 1;
	}

}
void RePrint(int map, int boss)
{
	if (map == 3 and boss == 0)
	{
		cout << "輸入1與大石怪戰鬥   輸入2摳摳龜戰鬥   輸入0返回\n";
	}
	else if (map == 3 and boss == 1)
	{
		cout << "你看見了中古巨龜!\n輸入1與大石怪戰鬥   輸入2與摳摳龜戰鬥   輸入3和中古巨龜戰鬥   輸入0返回\n";
	}
}
string Choose(int ck, int map, int boss) // map == 0 代表地圖編號 要注意的是map 0 是第一張地圖(探險發源地) ck是指怪物的代號
{
	if (map == 0)
	{
		if (ck == 1)
		{
			return "轉轉鳥";
		}
		else if (ck == 2)
		{
			return "小石怪";
		}
		else
		{
			return "Wrong";
		}
	}
	else if (map == 2)
	{
		if (ck == 1)
		{
			return "哥布林小鬼";
		}
		else if (ck == 2)
		{
			return "哥布林戰士";
		}
		else
		{
			return "Wrong";
		}
	}
	else if (map == 3)
	{
		if (ck == 1)
		{
			return "大石怪";
		}
		else if (ck == 2)
		{
			return "摳摳龜";
		}
		else if (ck == 3 and boss == 1)
		{
			return "中古巨龜";
		}
		else
		{
			return "Wrong";
		}
	}
}
string where(int MapNumber)
{
	if (MapNumber == 0)
	{
		MapData.MapName = "探險發源地(LV1~3)";
		return MapData.MapName;
	}
	else if (MapNumber == 1)
	{
		MapData.MapName = "艾村";
		return MapData.MapName;
	}
	else if (MapNumber == 2)
	{
		MapData.MapName = "探險小徑(LV3~6)";
		return MapData.MapName;
	}
	else if (MapNumber == 3)
	{
		MapData.MapName = "中古廣場(LV6~9)";
		return MapData.MapName;
	}
	else if (MapNumber == 4)
	{
		MapData.MapName = "史前廣場";
		return MapData.MapName;
	}
	else if (MapNumber == 5)
	{
		MapData.MapName = "感染山脈";
		return MapData.MapName;
	}
	else if (MapNumber == 6)
	{
		MapData.MapName = "感染源山頂";
		return MapData.MapName;
	}
	else if (MapNumber == 7)
	{
		MapData.MapName = "神靈之門"; 
		return MapData.MapName;
	}
	else
	{
		return "none";
	}
}
int npc(int map)//return 0 代表這裡沒有npc return 1 代表這裡有npc
{
	if (map == 0)
	{
		return 0;
	}
	else if (map == 1)
	{
		return 1;
	}
	else if (map == 2)
	{
		return 0;
	}
	else if (map == 3)
	{
		return 0;
	}
	else if (map == 4)
	{
		return 0;
	}
	else if (map == 5)
	{
		return 0;
	}
	else if (map == 6)
	{
		return 0;
	}
	else if (map == 7)
	{
		return 0;
	}
}
