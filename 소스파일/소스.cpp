#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include<conio.h>

void setColor(int color)
{
	SetConsoleTextAttribute
	(GetStdHandle(STD_OUTPUT_HANDLE), color);
	//0-검정, 1-어두운 파랑, 2- 어두운 초록
	//3-어두운 하늘, 4-어두운 빨강 5- 보라색 6 - 노란색 //15 - 하얀색
	
}

int main()
{
	int act,eny=0;
	int JWBQ;
	srand((unsigned int)time(NULL));
	//주인공
	int KimHp = (rand()%150) + 80;
	int KimAtk = (rand() % 50) + 20;
	//주인공분신
	int PlayerHp = KimHp;
	int PlayerAtk = KimAtk;
	//캐릭터 끝
	int day = 1;
	int num;
	int item;
	int juk;
	char intro;
	printf("인트로를 보시겠습니까?(y/n) :");
	scanf("%c", &intro);
	system("cls");
	if (intro == 'y')
	{
		puts("상위 1%만 들어올수 있다는 Drangon M.T.에 위치한 명문고 고지텍");
		getch();
		puts("그러나 고지텍 앞에 보이는 남산처럼 그곳은 과제의 산이었다");
		getch();
		system("cls");
		puts("과제의 산과 괴물들이 득실되는 고지텍에서...");
		getch();
		system("cls");
		puts("김지텍은 포기하지 않고 무사히 졸업해 행복하기 살기 위해 노력하게 된다!");
		getch();
		system("cls");

		puts("   △△▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲△△ ");
		Sleep(300);
		puts(" ◁□□□□□★□□□□□□★□□□□□□★□□□□□□▷");
		Sleep(300);
		puts(" ◀□■■■■□□■■■■□□□■■■■□□■■■■□□▶");
		Sleep(300);
		puts(" ◀□■□□□□□□□□■□□□■□□□□□□□□■□□▶");
		Sleep(300);
		puts(" ◀□■■■■□□■■■■■□□■■■■□□■■■■■□▶ ");
		Sleep(300);
		puts(" ◀□□□□□□□□□□□□□□□□□□□□□□□□□□▶ ");
		Sleep(300);
		puts(" ◀□■■■■■■□■□□□□□■■■■■■□■□□□□▶");
		Sleep(300);
		puts(" ◀□□□■□□□□■□□□□□□□■□□□□■□□□□▶");
		Sleep(300);
		puts(" ◀□□□■□□□□■□□□□□□□■□□□□■□□□□▶ ");
		Sleep(300);
		puts(" ◀□□□■□□□□■■■■□□□□■□□□□■■■■□▶ ");
		Sleep(300);
		puts(" ◁□□□□□□□□□□□□□□□□□□□□□□□□□□▷");
		Sleep(300);
		puts("   ▽▽▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▽▽  ");

		Sleep(1000);
		system("cls");

		puts("   △△▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲△△ ");
		Sleep(300);
		puts(" ◁□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□▷ ");
		Sleep(300);
		puts(" ◀□□■■■■■□□□■■■■■■■□■□□■■■■□□■■□□▶ ");
		Sleep(300);
		puts(" ◀□□□□□□■□□□□□ ■□□□□□■□□■□□□□□■■□□▶ ");
		Sleep(300);
		puts(" ◀□□□□■□■□□□□□ ■□□□□□■□□■■■■□■■■□□▶ ");
		Sleep(300);
		puts(" ◀□□□□■□■□□□□□■□■□□□■□□■□□□□□■■□□▶ ");
		Sleep(300);
		puts(" ◀□□□□■□□□□□■□□□□■□□■□□■■■■□□■■□□▶ ");
		Sleep(300);
		puts(" ◀□■■■■■■■■□□□□□□□□□■□□□■■■■■■□□□▶ ");
		Sleep(300);
		puts(" ◀□□□□□□□□□□□□□□□□□□□□□□□□□□□■□□□▶ ");
		Sleep(300);
		puts(" ◁□□□□□□□□□□□□□□□□□□□□□□□□□□□■□□□▷ ");
		Sleep(300);
		puts("   ▽▽▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▽▽");
		Sleep(1000);
		system("cls");
		puts("  △△▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲△△ ");
		Sleep(300);
		puts("◁□□□□□□□□□□□□□□□□□□□□□□□□▷ ");
		Sleep(300);
		puts("◀□□■□□□□□◆□□■■■■□□■■■■□□□▶ ");
		Sleep(300);
		puts("◀□□■□□□□□□□□■□□□□□■□□□□□□▶");
		Sleep(300);
		puts("◀□□■□□□□□■□□■■■■□□■□□□□□□▶ ");
		Sleep(300);
		puts("◀□□■□□□□□■□□■□□□□□■■■■□□□▶ ");
		Sleep(300);
		puts("◀□□■□□□□□■□□■□□□□□■□□□□□□▶ ");
		Sleep(300);
		puts("◀□□■■■■□□■□□■□□□□□■■■■□□□▶ ");
		Sleep(300);
		puts("◁□□□□□□□□□□□□□□□□□□□□□□□□▷ ");
		Sleep(300);
		puts("  ▽▽▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▽▽   ");
		Sleep(1000);
		system("cls");
		puts("  △△▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲△△ ");
		Sleep(300);
		puts("◁□□□□□□□□□□□□□□□□□□□□□□□□▷ ");
		Sleep(300);
		puts("◀□□□□□□□□□□■■■■□□□□□□□□□□▶ ");
		Sleep(300);
		puts("◀□□□□□□□□□□□□□■□□□□□□□□□□▶");
		Sleep(300);
		puts("◀□□□□□□□□□□□□□■□□□□□□□□□□▶ ");
		Sleep(300);
		puts("◀□□□□□□□□□□■■■■□□□□□□□□□□▶ ");
		Sleep(300);
		puts("◀□□□□□□□□□□□□□■□□□□□□□□□□▶ ");
		Sleep(300);
		puts("◀□□□□□□□□□□■■■■□□□□□□□□□□▶ ");
		Sleep(300);
		puts("◁□□□□□□□□□□□□□□□□□□□□□□□□▷ ");
		Sleep(300);
		puts("  ▽▽▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▽▽   ");
		Sleep(1000);
		system("cls");
	}
	else
	{
		printf("인트로가 스킵되었습니다\n");
		system("pause");
		system("cls");
	}

	//이부분에 고지텍이 들어간다



	while (1)
	{//전투 시작
	start:
		//책
		int bookHp = (rand() % (150+eny)) + 40;
		int bookAtk = (rand() % (50+eny)) + 10;
		//과제
		int HWHp = (rand() % (130+eny)) +eny;
		int HWAtk = (rand() % 50+eny) +eny;
		//선생님
		int TCHp = (rand() % (200+eny)) + eny;
		int TCAtk = (rand() % (60+eny)) + eny;
		//선생님 2
		int JYBHp = (rand() % (300 + eny)) +eny;
		int JYBAtk = (rand() % (80 + eny)) +eny;
		//시험
		int TestHp = 1000;
		int TestAtk = 300;
		int first = 1;
		PlayerHp = KimHp;
		PlayerAtk = KimAtk;
		num = 0;
		//처음 선택부분
		puts("    ⊂_＼     ///////     ");
		puts("       ＼ ＼ ( 'ㅅ' ) ");
		puts("         ＼ /　 ♭   ⌒ ");
		puts("     　    ㅣ 　     へ＼＼");
		puts("     　    ㅣ　　    /　 ＼＼");
		puts("           ㅣ***@** ㅣ　　 ＼_つ");
		puts(" 　　      ㅣ   _   ㅣ　");
		puts("     　    ㅣ ㅣ＼  ㅣ");
		puts("　         ㅣ ㅣ ㅣ ㅣ　 ");
		puts("    　     ㅣ ㅣ ㅣ ㅣ  ");
		puts("           ㅣ ㅣ ㅣ ㅣ  ");
		puts("     　    ㅣ ㅣ ㅣ ㅣ ");
		puts("     　    ㅣ*ㅣ ㅣ*ㅣ　 ");
		puts("           /__ㅣ /__ㅣ");
		puts("\n=============================================");
		printf("현재 나의 채력 %d\n", PlayerHp);
		printf("현재 나의 공격력 %d\n", PlayerAtk);
		puts("=============================================");
		printf("\n\n\n");
		puts("무엇을 할까?");
		puts("1. 집을 간다");
		puts("2. 수업을 듣는다");
		//선택
		if (day >= 10)
			puts("3. 시험을 본다");
		else
			printf("시험기간까지 앞으로 %d일\n", 11 - day);
		puts("종료");
		//히든스토리
		scanf("%d", &num);
		system("cls");

		//집을 선택할 시
		if (num == 1)//집에서 나오는 캐릭터들 : 1.윤성우의 C프로그래밍, 2.과제
		{
			printf("나는 편하고 상쾌한 마음으로 귀가했다");
			juk = (rand() % 2) + 1;
			getch();
			system("cls");
			switch (juk)//적캐릭터 소환
			{
				//랜덤한 책이 나온다
			case 1://책하고의 전투
				while (1)
				{	//첫번째만 설명이 나온다
					if (first == 1)
					{
						
						printf("하지만 집에는 내 절친이자 숙적이자 내 영원한 선생님인 윤성우님의 책이 눈에 들어온다!\n오늘은 이녀석을 처치한다\n");
						first++;
					}
					puts(" __________        ____________");
					puts("ㅣ         ＼     /           ㅣ");
					puts("ㅣ   책      ＼  /   읽어라   ㅣ");
					puts("ㅣ --------    ㅣ ----------  ㅣ");
					puts("ㅣ ----------  ㅣ------------ ㅣ");
					puts("ㅣ   -----@#-- ㅣ ----------- ㅣ");
					puts("ㅣ   ＆＆＆----ㅣ ---**---++  ㅣ");
					puts(" ＼  ----------ㅣ ----@@----- /");
					puts("    ＼    ㅁ     ㅣ          /");
					puts("       ＼______ㅣ___________/ ");

					puts("======================================================================");
					setColor(3);
					printf("나의 HP : %d", PlayerHp);
					setColor(4);
					printf("                          적 HP : %d\n", bookHp);
					setColor(3);
					printf("나의 Atk: %d", PlayerAtk);
					setColor(4);
					printf("                           적 Atk: %d\n", bookAtk);
					setColor(15);
					puts("======================================================================\n");

					//게임시작
					puts("=====================================");
					puts("    1. 공부    2. 아이템  3. 도망");
					puts("=====================================");
					puts("어떻게 해야 할까?");
					//행동선택
					scanf("%d",&act);
					system("cls");
					//공격시
					if (act == 1)
					{
						setColor(3);
						printf("나는 책을 주입식교육으로 뇌속에 때려박았다! \n책에게 %d의 피해를 입혔다\n\n\n\n",PlayerHp);
						setColor(4);
						printf("그러나 책의 내용을 몰라서 머리속이 타들어들어간다!\n나는 %d의 피해를 입었다!\n\n", bookAtk);
						setColor(15);
						PlayerHp -= bookAtk;
						bookHp -= KimAtk;
						printf("나의 현재 체력 : %d\n", PlayerHp);
						printf("책 마스터하기 까지 %d\n", bookHp);
						system("pause");
						system("cls");
						if (PlayerHp <= 0)
						{
							puts("내 정신력은 이미 바닥이다");
							puts("나는 이것조차도 못한다는것에 자괴감이 들어 자신감이 떨어졌다");
							printf("나는 자퇴하기로 결정했다\n");
							getch();
							setColor(4);
							puts("   △△▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲△△");
							puts(" ◁□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□▷");
							puts(" ◀□□□□□□□■□□□■□□■□□□■□□□□□□□□□□□□▶");
							puts(" ◀□■■■■□■■□□■□■□■□□■□■□■□□□■□□□■□▶");
							puts(" ◀□□□□■□■■□■□□□■■□■□□□■■□□□■□□□■□▶");
							puts(" ◀□□□□■■■■□□■□■□■□□■□■□■□□□■□□□■□▶");
							puts(" ◀□□□□■□■■□□□■□□■□□□■□□■■■■■□■■■□▶");
							puts(" ◀□□□□■□■■□□□■■■■□□□■□□■□□□■□□□■□▶");
							puts(" ◀□□□□■□■■□□□■□□■□□□■□□■■■■■□□□■□▶");
							puts(" ◀□□□□■□■■□□□■■■■□■■■■■□□□□□□□□■□▶");
							puts(" ◁□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□▷");
							puts("   ▽▽▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▽▽  ");

							return 0;
						}
						if (bookHp <= 0)
						{
							puts("             ///////     ");
							puts("          __( 'ㅅ' ) ");
							puts("         / /　 ♭  ⌒ ");
							puts("     　 / ㅣ 　    l＼＼");
							puts("     　/ /l　　   /　   ＼＼");
							puts("      / / l***@***l　　   ?_つ");
							puts(" 　⊂_ /  l  _   /　");
							puts("     　   ㅣㅣ＼ l");
							puts("　        ㅣㅣ ㅣl　 ");
							puts("    　    ㅣㅣ ㅣㅣ  ");
							puts("          ㅣㅣ  l |  ");
							puts("     　   ㅣㅣ  ㅣㅣ ");
							puts("     　   l*l   l*l　 ");
							puts("         /__l  /__l");
							puts("");
							setColor(3);
							puts("모든 것을 끝냈다");
							puts("나는 C언어를 마스터한 듯한 느낌이 들었다(물론아니지만...)");
							puts("나의 프로그래밍 실력이 증가하였다");
							puts("나의 채력이 증가하였다");
							setColor(15);


							KimAtk += (rand()% 30) +10;
							KimHp += (rand() % 20) + 10;
							PlayerAtk = KimAtk;
							eny += (rand() % 30) + 10;
							system("pause");
							system("cls");
							day++;
							goto start;
						}
					}
					else if (act == 2)
					{
						printf("어떤 아이템을 사용할까?\n");
						puts("=====================================");
						puts("1.  스누피 : 이번 전투에 공격력을 10 높인다");
						puts("2. 타이에놀: 체력을 50높인다 ");
						puts("3.  밥버거 : 이번 전투에 공격력을 5높이고 Hp를 25올린다");
						puts("=====================================");
						scanf("%d", &item);
						setColor(3);
						if (item == 1)
						{
							PlayerAtk += 10;
							puts("내 공격력이 10 올랐다");
							system("pause");
							system("cls");
						}
						if (item == 2)
						{
							PlayerHp += 50;
							puts("내 체력이 50 올랐다");
							system("pause");
							system("cls");
						}
						if (item == 3)
						{
							PlayerAtk += 5;
							PlayerHp += 25;
							puts("내 공격력이 5 올랐다");
							puts("내 HP가 25 올랐다");
							system("pause");
							system("cls");
						}
						setColor(15);
					}
					else
					{
						printf("나는 도망쳤다\n");
						system("pause");
						system("cls");
						goto start;
					}
				}

			case 2://과제
				while (1)
				{	//첫번째만 설명이 나온다
					if (first == 1)
					{
						printf("내 눈으로 보기에는 산보다 더 커보이는 \"산신령\" 과제가 나타났다 \n오늘은 이녀석을 해결한다\n");
						first++;
					}

					puts(" -> 이것은 과제이다.  ●");
					puts("  ............       ●●");
					puts("                    ●●●   ");
					puts("                  ●●●● ");
					puts("                 ●●●●●");
					puts("                ●●●●●●");
					puts("              ●●●●●●●●     ●   ");
					puts("             ●●●●●●●●●   ●●");
					puts("            ●●●●●●●●●●●●●●");
					puts("          ●●●●●●●●●●●●●●●● ");
					puts("         ●●●●●●●●●●●●●●●●●");
					puts("        ●●●●●●●●●●●●●●●●●●");
					puts("       ●●●●●●●●●●●●●●●●●●●");
					puts("     ●●●●●●●●●●●●●●●●●●●●●");


					puts("======================================================================");
					setColor(3);
					printf("나의 HP : %d", PlayerHp);
					setColor(4);
					printf("                          적 HP : %d\n", HWHp);
					setColor(3);
					printf("나의 Atk: %d", PlayerAtk);
					setColor(4);
					printf("                           적 Atk: %d\n", HWAtk);
					setColor(15);
					puts("======================================================================\n");
					//게임시작
					puts("=====================================");
					puts("    1. 해결    2. 아이템  3. 도망");
					puts("=====================================");
					puts("어떻게 해야 할까?");
					//행동선택
					scanf("%d", &act);
					system("cls");
					//공격시
					if (act == 1)
					{
						setColor(3);
						printf("나는 책을 주입식교육으로 뇌속에 때려박았다! \n책에게 %d의 피해를 입혔다!\n\n\n", KimAtk);
						setColor(4);
						printf("그러나 책의 내용을 몰라서 머리속이 타들어들어간다!\n나는 %d의 피해를 입었다!\n\n", HWAtk);
						setColor(15);
						PlayerHp -= HWAtk;
						HWHp -= PlayerAtk;
						printf("나의 현재 체력 : %d\n", PlayerHp);
						printf("과제 제출하기 까지 %d\n", HWHp);
						system("pause");
						system("cls");
						if (PlayerHp <= 0)
						{
							puts("내 정신력은 이미 바닥이다");
							puts("나는 이것조차도 못한다는것에 자괴감이 들었다");
							puts("나는 자퇴하기로 결정했다");
							getch();
							setColor(4);
							puts("   △△▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲△△");
							puts(" ◁□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□▷");
							puts(" ◀□□□□□□□■□□□■□□■□□□■□□□□□□□□□□□□▶");
							puts(" ◀□■■■■□■■□□■□■□■□□■□■□■□□□■□□□■□▶");
							puts(" ◀□□□□■□■■□■□□□■■□■□□□■■□□□■□□□■□▶");
							puts(" ◀□□□□■■■■□□■□■□■□□■□■□■□□□■□□□■□▶");
							puts(" ◀□□□□■□■■□□□■□□■□□□■□□■■■■■□■■■□▶");
							puts(" ◀□□□□■□■■□□□■■■■□□□■□□■□□□■□□□■□▶");
							puts(" ◀□□□□■□■■□□□■□□■□□□■□□■■■■■□□□■□▶");
							puts(" ◀□□□□■□■■□□□■■■■□■■■■■□□□□□□□□■□▶");
							puts(" ◁□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□▷");
							puts("   ▽▽▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▽▽  ");

							return 0;
						}
						if (HWHp <= 0)
						{
							puts("             ///////     ");
							puts("          __( -ㅅ- ) ");
							puts("         / /　  b  ⌒ ");
							puts("     　 / ㅣ 　    l＼＼");
							puts("     　/ /l　　   /　   ＼＼");
							puts("      / / l***@***l　　   ?_つ");
							puts(" 　⊂_ /  l  _   /　");
							puts("     　   ㅣㅣ＼ l");
							puts("　        ㅣㅣ ㅣl　 ");
							puts("    　    ㅣㅣ ㅣㅣ  ");
							puts("          ㅣㅣ  l |  ");
							puts("     　   ㅣㅣ  ㅣㅣ ");
							puts("     　   l*l   l*l　 ");
							puts("         /__l  /__l");

							puts("");
							puts("");
							setColor(3);
							puts("모든 것을 끝냈다");
							puts("나는 과제를 제한시간안에 완벽하게 해냈다!");
							puts("나의 실력이 증가하였다");
							puts("나의 채력이 증가하였다");
							setColor(15);
							KimAtk += (rand() % 60) + 10;
							KimHp += (rand() % 80) + 10;
							PlayerAtk = KimAtk;
							eny += (rand() % 30) + 10;
							system("pause");
							system("cls");
							day++;
							goto start;
						}
					}
					else if (act == 2)
					{
						printf("어떤 아이템을 사용할까?\n");
						puts("=====================================");
						puts("1.  스누피 : 이번 전투에 공격력을 10 높인다");
						puts("2. 타이에놀: 체력을 50높인다 ");
						puts("3.  밥버거 : 이번 전투에 공격력을 5높이고 Hp를 25올린다");
						puts("=====================================");
						scanf("%d", &item);
						setColor(3);
						if (item == 1)
						{
							
							PlayerAtk += 10;
							puts("내 공격력이 10 올랐다");
							system("pause");
							system("cls");
						}
						if (item == 2)
						{
							PlayerHp += 50;
							puts("내 체력이 50 올랐다");
							system("pause");
							system("cls");
						}
						if (item == 3)
						{
							PlayerAtk += 5;
							PlayerHp += 25;
							puts("내 공격력이 5 올랐다");
							puts("내 HP가 25 올랐다");
							system("pause");
							system("cls");
							
						}
						setColor(15);
					}
					else
					{
						printf("나는 도망쳤다\n");
						system("pause");
						system("cls");
						goto start;
					}
				}
			}
		}

			//학교를 선택할 시에
			if (num == 2)//학교에 나오는 캐릭터들: 1.선생님, 2. 선생님2,
			{
				printf("나는 학교로 갔다");
				juk = (rand() % 2) + 1;
				getch;
				system("cls");
				switch (juk)
				{
				case 1:
				{
					while (1)//그냥 선생
					{	//첫번째만 설명이 나온다
						if (first == 1)
						{
							printf("자고있던 나를 선생님이 깨운다. 나의 실력으로 선생님을 꺾자!\n");
							first++;
						}
						puts("             ///////     ");
						puts("          __( -ㅅ- ) ");
						puts("         / /　 ㅇ  ⌒ ");
						puts("     　 / ㅣ 　◆   l＼＼");
						puts("     　/ /l　　   /　   ＼＼");
						puts("      / / l***@***l　　   ?_つ");
						puts(" 　⊂_ /  l  _   /　");
						puts("     　   ㅣㅣ＼ l");
						puts("　        ㅣㅣ ㅣl　 ");
						puts("    　    ㅣㅣ ㅣㅣ  ");
						puts("          ㅣㅣ  l |  ");
						puts("     　   ㅣㅣ  ㅣㅣ ");
						puts("     　   l*l   l*l　 ");
						puts("         /__l  /__l");
						puts("======================================================================");
						setColor(3);
						printf("나의 HP : %d", PlayerHp);
						setColor(4);
						printf("                          적 HP : %d\n", TCHp);
						setColor(3);
						printf("나의 Atk: %d", PlayerAtk);
						setColor(4);
						printf("                           적 Atk: %d\n", TCAtk);
						setColor(15);
						puts("======================================================================\n");
						//게임시작
						puts("=====================================");
						puts("    1. 대답    2. 아이템  3. 도망");
						puts("=====================================");
						puts("어떻게 해야 할까?");
						//행동선택
						scanf("%d", &act);
						system("cls");
						//공격시
						if (act == 1)
						{
							setColor(3);
							printf("나는 선생님의 질문에 교과서 토시 하나 틀리지 않고 대답했다\n 선생님이 %d의 정신력을 깍인거 같다\n\n\n\n", PlayerAtk);
							setColor(4);
							printf("그러나 선생님의 급질문에 심장이 쫄려왔다\n내 정신력이 %d만큼 깍인거 같다\n\n", TCAtk);
							setColor(15);
							PlayerHp -= TCAtk;
							TCHp -= PlayerAtk;
							printf("나의 현재 체력 : %d\n", PlayerHp);
							printf("수업끝나기까지 %d\n", TCHp);
							system("pause");
							system("cls");
							if (PlayerHp <= 0)
							{
								puts("내 정신력은 이미 바닥이다");
								puts("나는 이것조차도 못한다는것에 자괴감이 들었다");
								puts("나는 자퇴하기로 결정했다");
								getch();
								setColor(4);
								puts("   △△▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲△△");
								puts(" ◁□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□▷");
								puts(" ◀□□□□□□□■□□□■□□■□□□■□□□□□□□□□□□□▶");
								puts(" ◀□■■■■□■■□□■□■□■□□■□■□■□□□■□□□■□▶");
								puts(" ◀□□□□■□■■□■□□□■■□■□□□■■□□□■□□□■□▶");
								puts(" ◀□□□□■■■■□□■□■□■□□■□■□■□□□■□□□■□▶");
								puts(" ◀□□□□■□■■□□□■□□■□□□■□□■■■■■□■■■□▶");
								puts(" ◀□□□□■□■■□□□■■■■□□□■□□■□□□■□□□■□▶");
								puts(" ◀□□□□■□■■□□□■□□■□□□■□□■■■■■□□□■□▶");
								puts(" ◀□□□□■□■■□□□■■■■□■■■■■□□□□□□□□■□▶");
								puts(" ◁□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□▷");
								puts("   ▽▽▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▽▽  ");

								return 0;
							}
							if (TCHp <= 0)
							{
								puts("             ///////     ");
								puts("          __( 'ㅅ' ) ");
								puts("         / /　 ♭  ⌒ ");
								puts("     　 / ㅣ 　    l＼＼");
								puts("     　/ /l　　   /　   ＼＼");
								puts("      / / l***@***l　　   ?_つ");
								puts(" 　⊂_ /  l  _   /　");
								puts("     　   ㅣㅣ＼ l");
								puts("　        ㅣㅣ ㅣl　 ");
								puts("    　    ㅣㅣ ㅣㅣ  ");
								puts("          ㅣㅣ  l |  ");
								puts("     　   ㅣㅣ  ㅣㅣ ");
								puts("     　   l*l   l*l　 ");
								puts("         /__l  /__l");

								puts("");
								puts("");
								setColor(3);
								puts("모든 것을 끝냈다");
								getch();
								puts("선생님의 모든 질문을 팅겨냈다");
								getch();
								puts("선생님이 나를 다시 본 기분이다");
								getch();
								puts("나의 채력이 증가하였다");
								getch();
								puts("나의 능력이 성장하였다");
								setColor(15);
								KimAtk += (rand() % 60) + 10;
								KimHp += (rand() % 80) + 10;
								PlayerAtk = KimAtk;
								eny += (rand() % 30) + 10;
								system("pause");
								system("cls");
								day++;
								goto start;
							}
						}
						else if (act == 2)
						{
							printf("어떤 아이템을 사용할까?\n");
							puts("=====================================");
							puts("1.  스누피 : 이번 전투에 공격력을 10 높인다");
							puts("2. 타이에놀: 체력을 50높인다 ");
							puts("3.  밥버거 : 이번 전투에 공격력을 5높이고 Hp를 25올린다");
							puts("=====================================");
							scanf("%d", &item);
							setColor(3);
							if (item == 1)
							{
								PlayerAtk += 10;
								puts("내 공격력이 10 올랐다");
								system("pause");
								system("cls");
							}
							if (item == 2)
							{
								PlayerHp += 50;
								puts("내 체력이 50 올랐다");
								system("pause");
								system("cls");
							}
							if (item == 3)
							{
								PlayerAtk += 5;
								PlayerHp += 25;
								puts("내 공격력이 5 올랐다");
								puts("내 HP가 25 올랐다");
								system("pause");
								system("cls");
							}
							setColor(15);
						}
						
						else
						{
							printf("나는 도망쳤다\n");
							system("pause");
							system("cls");
							goto start;
						}
					}
				}

				case 2:
					while (1)
					{	//첫번째만 설명이 나온다
						if (first == 1)
						{
							printf("고지텍 드래곤 선생님이 나타났다\n내가 딴짓하는게 들킬 수도 있다!\n");
							first++;
						}
						puts("             ///////     ");
						puts("          __( -ㅅ- ) ");
						puts("         / /　 ㅇ  ⌒ ");
						puts("     　 / ㅣ 　◆   l＼＼");
						puts("     　/ /l　　   /　   ＼＼");
						puts("      / / l***@***l　　   ?_つ");
						puts(" 　⊂_ /  l  _   /　");
						puts("     　   ㅣㅣ＼ l");
						puts("　        ㅣㅣ ㅣl　 ");
						puts("    　    ㅣㅣ ㅣㅣ  ");
						puts("          ㅣㅣ  l |  ");
						puts("     　   ㅣㅣ  ㅣㅣ ");
						puts("     　   l*l   l*l　 ");
						puts("         /__l  /__l");
						puts("======================================================================");
						setColor(3);
						printf("나의 HP : %d", PlayerHp);
						setColor(4);
						printf("                          적 HP : %d\n", JYBHp);
						setColor(3);
						printf("나의 Atk: %d", PlayerAtk);
						setColor(4);
						printf("                           적 Atk: %d\n", JYBAtk);
						setColor(15);
						puts("======================================================================\n");
						//게임시작
						puts("=====================================");
						puts(" 1. 임기응변    2. 아이템  3. 도망");
						puts("=====================================");
						puts("어떻게 해야 할까?");
						//행동선택
						scanf("%d", &act);
						system("cls");
						//공격시
						if (act == 1)
						{
							JWBQ = (rand() % 5) + 1;
							if (JWBQ == 1)
								puts("그림그리던것을 손으로 가렸다 못알아챈 모양이다");
							else if (JWBQ == 2)
								puts("친구와 떠들고 있는것을 알려주고 있는것으로 안 모양이다");
							else if (JWBQ == 3)
								puts("자고 있던것을 기도하는것으로 착각한 모양이다");
							else if (JWBQ == 4)
								puts("선생님이 갑자기 기타를 치기 시작했다\n나는 호응했다");
							else if (JWBQ == 5)
								puts("몰폰하는 것을 선생님 말씀 메모하는 것으로 착각한 모양이다");
							setColor(3);
							printf("고지텍 드래곤에게 %d의 피해를 입혔다!\n\n\n", PlayerAtk);
							setColor(4);
							printf("그러나 압도적은 프레셔 앞에 심장이 공격받았다\n나는 %d의 피해를 입었다!\n\n\n", JYBAtk);
							setColor(15);
							PlayerHp -= JYBAtk;
							JYBHp -= PlayerAtk;
							printf("나의 현재 체력 : %d\n", PlayerHp);
							printf("악몽같은 시간이 끝나기 까지 %d\n", JYBHp);
							system("pause");
							system("cls");
							if (PlayerHp <= 0)
							{
								puts("내 정신력은 이미 바닥이다");
								puts("나는 이것조차도 못한다는것에 자괴감이 들었다");
								puts("나는 자퇴하기로 결정했다");
								getch();
								setColor(4);
								puts("   △△▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲△△");
								puts(" ◁□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□▷");
								puts(" ◀□□□□□□□■□□□■□□■□□□■□□□□□□□□□□□□▶");
								puts(" ◀□■■■■□■■□□■□■□■□□■□■□■□□□■□□□■□▶");
								puts(" ◀□□□□■□■■□■□□□■■□■□□□■■□□□■□□□■□▶");
								puts(" ◀□□□□■■■■□□■□■□■□□■□■□■□□□■□□□■□▶");
								puts(" ◀□□□□■□■■□□□■□□■□□□■□□■■■■■□■■■□▶");
								puts(" ◀□□□□■□■■□□□■■■■□□□■□□■□□□■□□□■□▶");
								puts(" ◀□□□□■□■■□□□■□□■□□□■□□■■■■■□□□■□▶");
								puts(" ◀□□□□■□■■□□□■■■■□■■■■■□□□□□□□□■□▶");
								puts(" ◁□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□▷");
								puts("   ▽▽▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▽▽  ");

								return 0;
							}
							if (JYBHp <= 0)
							{
								puts("             ///////     ");
								puts("          __( 'ㅅ' ) ");
								puts("         / /　 ♭  ⌒ ");
								puts("     　 / ㅣ 　    l＼＼");
								puts("     　/ /l　　   /　   ＼＼");
								puts("      / / l***@***l　　   ?_つ");
								puts(" 　⊂_ /  l  _   /　");
								puts("     　   ㅣㅣ＼ l");
								puts("　        ㅣㅣ ㅣl　 ");
								puts("    　    ㅣㅣ ㅣㅣ  ");
								puts("          ㅣㅣ  l |  ");
								puts("     　   ㅣㅣ  ㅣㅣ ");
								puts("     　   l*l   l*l　 ");
								puts("         /__l  /__l");
								puts("");
								puts("");
								setColor(3);
								puts("모든 것을 끝냈다");
								getch();
								puts("50분간 완벽하게 자유롭게 보냈다");
								getch();
								puts("나의 실력이 증가하였다");
								getch();
								puts("나의 채력이 증가하였다");
								setColor(15);
								KimAtk += (rand() % 60) + 10;
								KimHp += (rand() % 80) + 10;
								PlayerAtk = KimAtk;
								eny += (rand() % 30) + 10;
								system("pause");
								system("cls");
								day++;
								goto start;
							}
						}
						else if (act == 2)
						{
							printf("어떤 아이템을 사용할까?\n");
							puts("=====================================");
							puts("1.  스누피 : 이번 전투에 공격력을 10 높인다");
							puts("2. 타이에놀: 체력을 50높인다 ");
							puts("3.  밥버거 : 이번 전투에 공격력을 5높이고 Hp를 25올린다");
							puts("=====================================");
							scanf("%d", &item);
							setColor(3);
							if (item == 1)
							{
								PlayerAtk += 10;
								puts("내 공격력이 10 올랐다");
								system("pause");
								system("cls");
							}
							if (item == 2)
							{
								PlayerHp += 50;
								puts("내 체력이 50 올랐다");
								system("pause");
								system("cls");
							}
							if (item == 3)
							{
								PlayerAtk += 5;
								PlayerHp += 25;
								puts("내 공격력이 5 올랐다");
								puts("내 HP가 25 올랐다");
								system("pause");
								system("cls");
							}
							setColor(15);
						}
						else
						{
							printf("나는 도망쳤다\n");
							system("pause");
							system("cls");
							goto start;
						}
					}
				}
			}

				if (day >= 10)
					if (num == 3)//시험
					{
						printf("나는 게임 동아리 OFF의 시험을 본다\n");
						while (1)
						{	//첫번째만 설명이 나온다
							if (first == 1)
							{
								printf("OFF를 들어가기 위한 시험이 시작된다\n");
								first++;
							}
							setColor(4);
							puts(" __________        ____________");
							puts("ㅣ         ＼     /           ㅣ");
							puts("ㅣ   시험    ＼  /   풀어라   ㅣ");
							puts("ㅣ --------    ㅣ ----------  ㅣ");
							puts("ㅣ ----------  ㅣ------------ ㅣ");
							puts("ㅣ   -----@#-- ㅣ ----------- ㅣ");
							puts("ㅣ   ＆＆＆----ㅣ ---**---++  ㅣ");
							puts(" ＼  ----------ㅣ ----@@----- /");
							puts("    ＼    ㅁ     ㅣ          /");
							puts("       ＼______ㅣ___________/ ");
							setColor(15);
							puts("======================================================================");
							setColor(3);
							printf("나의 HP : %d", PlayerHp);
							setColor(4);
							printf("                          적 HP : %d\n", TestHp);
							setColor(3);
							printf("나의 Atk: %d", PlayerAtk);
							setColor(4);
							printf("                           적 Atk: %d\n", TestAtk);
							setColor(15);
							puts("======================================================================\n");
							//게임시작
							puts("=====================================");
							puts(" 1. 문제풀기   2. 아이템  3. 도망");
							puts("=====================================");
							puts("어떻게 해야 할까?");
							//행동선택
							scanf("%d", &act);
							system("cls");
							//공격시
							if (act == 1)
							{
								JWBQ = (rand() % 5) + 1;
								if (JWBQ == 1)
								{
									puts("3DMAX에 대한 문제다");
									TestAtk = 300;
								}
								else if (JWBQ == 2)
								{
									puts("포인터에 대한 문제다");
									TestAtk = 100;
								}
								else if (JWBQ == 3)
								{
									puts("큐스택에 대한 문제다");
									TestAtk = 150;
								}
								else if (JWBQ == 4)
								{
									puts("RGB에 대한 문제다");
									TestAtk = 200;
								}
								else if (JWBQ == 5)
								{
									puts("이건 무슨 문제인지도 모르겠다");
									TestAtk = 400;
								}
									getch();
									setColor(3);
								printf("문제를 푼거 같다\n 시험지에게 %d만큼 피해를 줬다고 행복회로가 가동되었다\n\n\n\n", PlayerAtk);
								setColor(4);
								printf("그러나 마음 어딘가에서 불안하다\n 내 정신력이 %d의 피해를 입었다!\n\n\n", TestAtk);
								setColor(15);
								PlayerHp -= TestAtk;
								TestHp -= PlayerAtk;
								printf("나의 현재 체력 : %d\n", PlayerHp);
								printf("시험문제 다풀기까지 %d\n\n", TestHp);
								system("pause");
								system("cls");
								if (PlayerHp <= 0)
								{
									puts("내 정신력은 이미 바닥이다");
									puts("나는 이것조차도 못한다는것에 자괴감이 들었다");
									puts("나는 자퇴하기로 결정했다");
									getch();
									setColor(4);
									puts("   △△▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲△△");
									puts(" ◁□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□▷");
									puts(" ◀□□□□□□□■□□□■□□■□□□■□□□□□□□□□□□□▶");
									puts(" ◀□■■■■□■■□□■□■□■□□■□■□■□□□■□□□■□▶");
									puts(" ◀□□□□■□■■□■□□□■■□■□□□■■□□□■□□□■□▶");
									puts(" ◀□□□□■■■■□□■□■□■□□■□■□■□□□■□□□■□▶");
									puts(" ◀□□□□■□■■□□□■□□■□□□■□□■■■■■□■■■□▶");
									puts(" ◀□□□□■□■■□□□■■■■□□□■□□■□□□■□□□■□▶");
									puts(" ◀□□□□■□■■□□□■□□■□□□■□□■■■■■□□□■□▶");
									puts(" ◀□□□□■□■■□□□■■■■□■■■■■□□□□□□□□■□▶");
									puts(" ◁□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□▷");
									puts("   ▽▽▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▽▽  ");

									return 0;
								}
								if (TestHp <= 0)
								{
									hell:
									puts("모든 것을 끝냈다");
									getch();
									puts(" 나에게 남은 것은 공허한 시간과 공허한 마음뿐이다");
									getch();
									puts("문자가 왔다!");
									getch();
									printf("확인중");
									Sleep(600);
									printf(".");
									Sleep(600);
									printf(".");
									Sleep(600);
									printf(".\n");
									Sleep(500);
									puts("합격이다!!!");
									getch();
									puts("이제부터 꽃길만 걷자!!!!");
									getch();
									system("cls");
									puts("그렇게 하여 나는 3년 동안 노예가 되어");
									getch();
									puts("한손으로 셀 수 없을 만큼의 포트폴리오를 만들었다");
									getch();
									printf("그렇게 3년후");
									Sleep(600);
									printf(".");
									Sleep(600);
									printf(".");
									Sleep(600);
									printf(".\n");
									Sleep(600);
									system("cls");
									puts("블리자드에 취직한 나는 열심히 신규게임\"폭풍의 영웅\"을 개발하고 있었다");
									getch();
									puts("오늘은 고등학교 친구들과 모임이 있는 날...");
									getch();
									puts("친구들이 열심히 군대이야기를 하고 있다");
									getch();
									puts("하지만 나는 무슨 소리인지 하나도 모르겠다");
									getch();
									puts("왜냐고?");
									getch();
									puts("난 병특이니까!");
									getch();
									system("cls");
									puts("남들의 부러움 속에서 나는 살아간다");
									getch();
									puts("고등학교 졸업 후부터 그래왔고 앞으로도 그럴 것이다 ");
									getch();
									puts("난 성공했다");
									getch();
									system("cls");
									puts("             ///////     ");
									puts("          __( ^ㅅ^ ) ");
									puts("         / /　 ♭  ⌒ ");
									puts("     　 / ㅣ 　    l＼＼");
									puts("     　/ /l　　   /　   ＼＼");
									puts("      / / l***@***l　　   ?_つ");
									puts(" 　⊂_ /  l  _   /　");
									puts("     　   ㅣㅣ＼ l");
									puts("　        ㅣㅣ ㅣl　 ");
									puts("    　    ㅣㅣ ㅣㅣ  ");
									puts("          ㅣㅣ  l |  ");
									puts("     　   ㅣㅣ  ㅣㅣ ");
									puts("     　   l*l   l*l　 ");
									puts("         /__l  /__l");
									Sleep(500);
									system("cls");
									puts("    ⊂_＼     ///////     ");
									puts("       ＼ ＼ ( ^ㅅ^ ) ");
									puts("         ＼ /　 ♭   ⌒ ");
									puts("     　    ㅣ 　     へ＼＼");
									puts("     　    ㅣ　　    /　 ＼＼");
									puts("           ㅣ***@** ㅣ　　 ＼_つ");
									puts(" 　　      ㅣ   _   ㅣ　");
									puts("     　    ㅣ ㅣ＼  ㅣ");
									puts("　         ㅣ ㅣ ㅣ ㅣ　 ");
									puts("    　     ㅣ ㅣ ㅣ ㅣ  ");
									puts("           ㅣ ㅣ ㅣ ㅣ  ");
									puts("     　    ㅣ ㅣ ㅣ ㅣ ");
									puts("     　    ㅣ*ㅣ ㅣ*ㅣ　 ");
									puts("           /__ㅣ /__ㅣ");
									Sleep(500);
									system("cls");
									puts("             ///////     ");
									puts("          __( ^ㅅ^ ) ");
									puts("         / /　 ♭  ⌒ ");
									puts("     　 / ㅣ 　    l＼＼");
									puts("     　/ /l　　   /　   ＼＼");
									puts("      / / l***@***l　　   ?_つ");
									puts(" 　⊂_ /  l  _   /　");
									puts("     　   ㅣㅣ＼ l");
									puts("　        ㅣㅣ ㅣl　 ");
									puts("    　    ㅣㅣ ㅣㅣ  ");
									puts("          ㅣㅣ  l |  ");
									puts("     　   ㅣㅣ  ㅣㅣ ");
									puts("     　   l*l   l*l　 ");
									puts("         /__l  /__l");
									Sleep(500);
									system("cls");
									puts("    ⊂_＼     ///////     ");
									puts("       ＼ ＼ ( ^ㅅ^ ) ");
									puts("         ＼ /　 ♭   ⌒ ");
									puts("     　    ㅣ 　     へ＼＼");
									puts("     　    ㅣ　　    /　 ＼＼");
									puts("           ㅣ***@** ㅣ　　 ＼_つ");
									puts(" 　　      ㅣ   _   ㅣ　");
									puts("     　    ㅣ ㅣ＼  ㅣ");
									puts("　         ㅣ ㅣ ㅣ ㅣ　 ");
									puts("    　     ㅣ ㅣ ㅣ ㅣ  ");
									puts("           ㅣ ㅣ ㅣ ㅣ  ");
									puts("     　    ㅣ ㅣ ㅣ ㅣ ");
									puts("     　    ㅣ*ㅣ ㅣ*ㅣ　 ");
									puts("           /__ㅣ /__ㅣ");
									
									puts("");
									puts("");
									getch();
									system("cls");
									setColor(3);
									puts("     ◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆");
									puts("     ◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆");
									puts("     ◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆");
									puts("     ◆□■■■■□■□□□□■□■◆◆□□◆");
									puts("     ◆□■□□□□■◆□□□■□■□□◆□◆");
									puts("     ◆□■■■□□■□◆□□■□■□□◆□◆");
									puts("     ◆□■□□□□■□□◆□■□■□□◆□◆");
									puts("     ◆□■■■■□■□□□◆■□■◆◆□□◆");
									puts("     ◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆");
									puts("     ◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆");

									return 0;
								}
							}
							else if (act == 2)
							{
								printf("어떤 아이템을 사용할까?\n");
								puts("=====================================");
								puts("1.  스누피 : 이번 전투에 공격력을 10 높인다");
								puts("2. 타이에놀: 체력을 50높인다 ");
								puts("3.  밥버거 : 이번 전투에 공격력을 5높이고 Hp를 25올린다");
								puts("=====================================");
								scanf("%d", &item);
								setColor(3);
								if (item == 1)
								{
									PlayerAtk += 10;
									puts("내 공격력이 10 올랐다");
									system("pause");
									system("cls");
								}
								if (item == 2)
								{
									PlayerHp += 50;
									puts("내 체력이 50 올랐다");
									system("pause");
									system("cls");
								}
								if (item == 3)
								{
									PlayerAtk += 5;
									PlayerHp += 25;
									puts("내 공격력이 5 올랐다");
									puts("내 HP가 25 올랐다");
									system("pause");
									system("cls");
								}
								setColor(15);
							}
							else
							{
								printf("나는 도망쳤다\n");
								system("pause");
								system("cls");
								goto start;
							}
						}

					}
				if (num == 4)
				{
					return 0;
				}

				else
				{
					printf("그것은 없는 선택지 입니다\n다시 선택해주세요\n");
					day--;
				}
				}

			}