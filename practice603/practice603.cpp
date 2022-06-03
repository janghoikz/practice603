#include <iostream>

//포인터

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};

void EnterLobby();
StatInfo CreatePlayer();
void CreateMonster(StatInfo* info);

int main()
{
	EnterLobby();
}

void EnterLobby()
{
	std::cout << "로비에 입장했습니다" << std::endl;

	StatInfo Player;
	CreatePlayer();

	StatInfo monster;

	CreateMonster(&monster);
}

StatInfo CreatePlayer()
{
	StatInfo ret;

	std::cout << "플레이어 생성" << std::endl;

	ret.hp = 100;
	ret.attack = 10;
	ret.defence = 2;

	return ret;
}

void CreateMonster(StatInfo* info)
{
	std::cout << "몬스터 생성" << std::endl;

	info->hp = 40;
	info->attack = 8;
	info->defence = 1;
}
