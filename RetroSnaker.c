/*****************************************************************************************
**      ̰����(����̨��)      ����:EyreFree   	 QQ:1795179491      ���뻷��:VC++ 6.0   **
*****************************************************************************************/

#include<stdio.h>
#include<time.h>
#include<process.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>

#define sizex 25
#define sizey 17
int way=1,Way1=4,Way2=2,failer=0;


void HideCursor()	//���ع��
{
	CONSOLE_CURSOR_INFO cursor_info = {1, 0}; 
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void gotoxy(int x, int y)		//��λ���
{ 
	COORD pos; 
	pos.X = x - 1; 
	pos.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos); 
}

main()
{
	system("color f0");
	system("mode con cols=80 lines=23");
	HideCursor();	//���ع��
	welcome();
	home('1');
}


welcome()
{
	system("title ̰���ߣ�����̨�棩[��ǰ״̬:������...]");
	printf("\n\n\n\n\n   ###    ###    ###\n");
	printf("   ###    ###    ###\n");
	printf("   ###    ###    ###\n");
	printf("    ###  #####  ###\n");
	printf("    ###  #####  ###\n");
	printf("    ###  #####  ###\n");
	printf("    ### ### ### ###\n");
	printf("    ### ### ### ###\n");
	printf("    ### ### ### ###\n");
	printf("     #####   #####\n");
	printf("     #####   #####\n");
	printf("      ###     ###\n");
	printf("      ###     ###\n\n\n   ");
	Sleep(100);
	//system("cls");
	gotoxy(1,1);
	printf("\n\n\n\n\n   ###    ###    ###\n");
	printf("   ###    ###    ###\n");
	printf("   ###    ###    ###\n");
	printf("    ###  #####  ###\n");
	printf("    ###  #####  ###\n");
	printf("    ###  #####  ###\n");
	printf("    ### ### ### ###\n");
	printf("    ### ### ### ###\n");
	printf("    ### ### ### ###   ###\n");
	printf("     #####   #####  ##   ##\n");
	printf("     #####   ##### #########\n");
	printf("      ###     ###  ##\n");
	printf("      ###     ###    ######\n\n\n   ");
	Sleep(100);
	//system("cls");
	gotoxy(1,1);
	printf("\n\n\n\n\n   ###    ###    ###         ##\n");
	printf("   ###    ###    ###         ##\n");
	printf("   ###    ###    ###         ##\n");
	printf("    ###  #####  ###          ##\n");
	printf("    ###  #####  ###          ##\n");
	printf("    ###  #####  ###          ##\n");
	printf("    ### ### ### ###          ##\n");
	printf("    ### ### ### ###          ##\n");
	printf("    ### ### ### ###   ###    ##\n");
	printf("     #####   #####  ##   ##  ##\n");
	printf("     #####   ##### ######### ##\n");
	printf("      ###     ###  ##        ##\n");
	printf("      ###     ###    ######  #####\n\n\n   ");
	Sleep(100);
	//system("cls");
	gotoxy(1,1);

	printf("\n\n\n\n\n   ###    ###    ###         ##\n");
	printf("   ###    ###    ###         ##\n");
	printf("   ###    ###    ###         ##\n");
	printf("    ###  #####  ###          ##\n");
	printf("    ###  #####  ###          ##\n");
	printf("    ###  #####  ###          ##\n");
	printf("    ### ### ### ###          ##\n");
	printf("    ### ### ### ###          ##\n");
	printf("    ### ### ### ###   ###    ##     ####\n");
	printf("     #####   #####  ##   ##  ##   ##\n");
	printf("     #####   ##### ######### ##  ##\n");
	printf("      ###     ###  ##        ##   ##\n");
	printf("      ###     ###    ######  ##### ######\n\n\n   ");
	Sleep(100);
	//system("cls");
	gotoxy(1,1);
	printf("\n\n\n\n\n   ###    ###    ###         ##\n");
	printf("   ###    ###    ###         ##\n");
	printf("   ###    ###    ###         ##\n");
	printf("    ###  #####  ###          ##\n");
	printf("    ###  #####  ###          ##\n");
	printf("    ###  #####  ###          ##\n");
	printf("    ### ### ### ###          ##\n");
	printf("    ### ### ### ###          ##\n");
	printf("    ### ### ### ###   ###    ##     ####      ####\n");
	printf("     #####   #####  ##   ##  ##   ##    ##  ##    ##\n");
	printf("     #####   ##### ######### ##  ##        ##      ##\n");
	printf("      ###     ###  ##        ##   ##       ##      ##\n");
	printf("      ###     ###    ######  ##### ######    ######\n\n\n   ");
	Sleep(100);
	//system("cls");
	gotoxy(1,1);
	printf("\n\n\n\n\n   ###    ###    ###         ##\n");
	printf("   ###    ###    ###         ##\n");
	printf("   ###    ###    ###         ##\n");
	printf("    ###  #####  ###          ##\n");
	printf("    ###  #####  ###          ##\n");
	printf("    ###  #####  ###          ##\n");
	printf("    ### ### ### ###          ##\n");
	printf("    ### ### ### ###          ##\n");
	printf("    ### ### ### ###   ###    ##     ####      ####     ######\n");
	printf("     #####   #####  ##   ##  ##   ##    ##  ##    ##  ## #  ##\n");
	printf("     #####   ##### ######### ##  ##        ##      ## ## #  ##\n");
	printf("      ###     ###  ##        ##   ##       ##      ## ## #  ##\n");
	printf("      ###     ###    ######  ##### ######    ######   ## #  ##\n\n\n   ");
	Sleep(100);
	//system("cls");
	gotoxy(1,1);
	printf("\n\n\n\n\n   ###    ###    ###         ##\n");
	printf("   ###    ###    ###         ##\n");
	printf("   ###    ###    ###         ##\n");
	printf("    ###  #####  ###          ##\n");
	printf("    ###  #####  ###          ##\n");
	printf("    ###  #####  ###          ##\n");
	printf("    ### ### ### ###          ##\n");
	printf("    ### ### ### ###          ##\n");
	printf("    ### ### ### ###   ###    ##     ####      ####     ######     ###\n");
	printf("     #####   #####  ##   ##  ##   ##    ##  ##    ##  ## #  ##  ##   ##\n");
	printf("     #####   ##### ######### ##  ##        ##      ## ## #  ## #########\n");
	printf("      ###     ###  ##        ##   ##       ##      ## ## #  ## ##\n");
	printf("      ###     ###    ######  ##### ######    ######   ## #  ##   ######\n\n\n   ");
	Sleep(100);
	//system("cls");
	gotoxy(1,1);
	printf("\n\n\n\n\n   ###    ###    ###         ##                                          ###\n");
	printf("   ###    ###    ###         ##                                          ###\n");
	printf("   ###    ###    ###         ##                                          ###\n");
	printf("    ###  #####  ###          ##                                          ###\n");
	printf("    ###  #####  ###          ##                                          ###\n");
	printf("    ###  #####  ###          ##                                          ###\n");
	printf("    ### ### ### ###          ##                                          ###\n");
	printf("    ### ### ### ###          ##                                          ###\n");
	printf("    ### ### ### ###   ###    ##     ####      ####     ######     ###    ###\n");
	printf("     #####   #####  ##   ##  ##   ##    ##  ##    ##  ## #  ##  ##   ##  ###\n");
	printf("     #####   ##### ######### ##  ##        ##      ## ## #  ## #########\n");
	printf("      ###     ###  ##        ##   ##       ##      ## ## #  ## ##        ###\n");
	printf("      ###     ###    ######  ##### ######    ######   ## #  ##   ######  ###\n\n\n   ");
	Sleep(100);
	//system("cls");
	gotoxy(1,1);
	printf("\n\n\n\n\n   ###    ###    ###         ##                                          ###\n");
	printf("   ###    ###    ###         ##                                          ###\n");
	printf("   ###    ###    ###         ##                                          ###\n");
	printf("    ###  #####  ###          ##                                          ###\n");
	printf("    ###  #####  ###          ##                                          ###\n");
	printf("    ###  #####  ###          ##                                          ###\n");
	printf("    ### ### ### ###          ##                                          ###\n");
	printf("    ### ### ### ###          ##                                          ###\n");
	printf("    ### ### ### ###   ###    ##     ####      ####     ######     ###    ###\n");
	printf("     #####   #####  ##   ##  ##   ##    ##  ##    ##  ## #  ##  ##   ##  ###\n");
	printf("     #####   ##### ######### ##  ##        ##      ## ## #  ## #########\n");
	printf("      ###     ###  ##        ##   ##       ##      ## ## #  ## ##        ###\n");
	printf("      ###     ###    ######  ##### ######    ######   ## #  ##   ######  ###\n\n\n   ");
	Sleep(1000);
}

mid()
{
	printf("                                 ");
}


mid2()
{
	printf("                       ");
}

home(int Home)
{
	char Key='w';
	system("title ̰���ߣ�����̨�棩[��ǰ״̬:���˵�...]");
	system("cls");
	printf("\n   �T�T�T�T�T�T�T�T�T�T�T�T�T�T ̰����(����̨��) �T�T�T�T�T�T�T�T�T�T�T�T�T�T\n\n\n\n\n");
	switch(Home)
	{
	case '1':	mid();printf("��������������\n");
				mid();printf("��1:��ʼ��Ϸ��\n");
				mid();printf("��������������\n");
				mid();printf("  2:��Ϸ˵��\n\n");
				mid();printf("  3:��Ϸ����\n\n");
				mid();printf("  4:��������\n\n"); 
				mid();printf("  5:�˳���Ϸ\n\n"); break;
	case '2':	printf("\n");
				mid();printf("  1:��ʼ��Ϸ\n");
				mid();printf("��������������\n");
				mid();printf("��2:��Ϸ˵����\n");
				mid();printf("��������������\n");
				mid();printf("  3:��Ϸ����\n\n");
				mid();printf("  4:��������\n\n"); 
				mid();printf("  5:�˳���Ϸ\n\n"); break;
	case '3':	printf("\n");
				mid();printf("  1:��ʼ��Ϸ\n\n");
				mid();printf("  2:��Ϸ˵��\n");
				mid();printf("��������������\n");
				mid();printf("��3:��Ϸ���é�\n");
				mid();printf("��������������\n");
				mid();printf("  4:��������\n\n"); 
				mid();printf("  5:�˳���Ϸ\n\n"); break;
	case '4':	printf("\n");
				mid();printf("  1:��ʼ��Ϸ\n\n");
				mid();printf("  2:��Ϸ˵��\n\n");
				mid();printf("  3:��Ϸ����\n");
				mid();printf("��������������\n");
				mid();printf("��4:�������ߩ�\n"); 
				mid();printf("��������������\n");
				mid();printf("  5:�˳���Ϸ\n\n"); break;
	case '5':	printf("\n");
				mid();printf("  1:��ʼ��Ϸ\n\n");
				mid();printf("  2:��Ϸ˵��\n\n");
				mid();printf("  3:��Ϸ����\n\n");
				mid();printf("  4:��������\n"); 
				mid();printf("��������������\n");
				mid();printf("��5:�˳���Ϸ��\n");
				mid();printf("��������������\n");break;
	}
	printf("\n\n\n\n   [��ʾ:�밴 <�����> ѡ��ѡ����ٰ� <�س���> ʵ�ֶ�Ӧ����   �� <Esc> ���˳�]\n");
	printf("   �T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T EyreFree  �T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T");
	while((Key<49||Key>53)&&Key!=72&&Key!=75&&Key!=77&&Key!=80&&Key!=27&&Key!=13)							//�����벻Ϊ���ܼ������»�ȡ
		Key=getch();
	switch(Key)
	{
	case 13:switch(Home)																					//��Ϊ�س���ִ����Ӧ����
			{
			case 49:run();
			case 50:readme();
			case 51:way=1;detail();
			case 52:about();
			case 53:quit(2);
			}break;
	case 27:quit(2);
	case 49:
	case 50:
	case 51:
	case 52:
	case 53:Home=(int)Key;break;																			//��Ϊѡ����򰴹����ƶ����ο�
	case 72:
	case 75:if(Home=='1') Home='5';
			else Home--; break;
	case 77:
	case 80:if(Home=='5') Home='1';
			else Home++; break;
	}
	home(Home);																								//���ݲ���������ҳ
}


run()
{
	int x,y,headx=12,heady=8,tailx,taily,foodx,foody,actnum=0,size=2,turn=0,winer,decider=0;
	char action=72,key,screen[sizey][sizex],road[51]={0};
	time_t start,end;
	system("title ̰���ߣ�����̨�棩[��ǰ״̬:��Ϸ��...]");
	system("mode con cols=52 lines=20");
	srand((unsigned int)time(0));
	foodx=rand()%(sizex-2)+1,foody=rand()%(sizey-2)+1;
	for(taily=0;taily<sizey;taily++)
		for(tailx=0;tailx<sizex;tailx++)
		{
			if(tailx==0||tailx==(sizex-1)||taily==0||taily==(sizey-1)) screen[taily][tailx]='#';
			else screen[taily][tailx]=' ';
		}
	screen[heady][headx]=2;
	screen[foody][foodx]=3;
	winer=sizeof(road)-1;
	start=time(NULL);
	while(1)
	{
		tailx=headx,taily=heady;
		for(turn=0;turn<size;turn++)
		{
			switch(road[turn])
			{
			case 72:taily++;break;
			case 80:taily--;break;
			case 75:tailx++;break;
			case 77:tailx--;break;
			}
		}
		screen[taily][tailx]=32;
		switch(action)
		{
		case 72:	if(heady-1==0||screen[heady-1][headx]==1||screen[heady-1][headx]==2) loss();
					screen[heady-1][headx]=2;
					screen[heady][headx]=1;
					heady--;
					break;
		case 80:	if(heady+1==(sizey-1)||screen[heady+1][headx]==1||screen[heady+1][headx]==2) loss();
					screen[heady+1][headx]=2;
					screen[heady][headx]=1;
					heady++;
					break;
		case 75:	if(headx-1==0||screen[heady][headx-1]==1||screen[heady][headx-1]==2) loss();
					screen[heady][headx-1]=2;
					screen[heady][headx]=1;
					headx--;
					break;
		case 77:	if(headx+1==(sizex-1)||screen[heady][headx+1]==1||screen[heady][headx+1]==2) loss();
					screen[heady][headx+1]=2;
					screen[heady][headx]=1;
					headx++;
					break;
		}
		end=time(NULL);
//		system("cls");

		gotoxy(1,1);

		printf(" �÷�:  %2d ��      �ٶ�:   %d ��      ʱ��: %3d ��\n",size-2,size/10+1,end-start);
		for(y=0;y<sizey;y++)
		{
			for(x=0;x<sizex;x++)
				printf("%c ",screen[y][x]);
			printf("\n");
		}
		Sleep(100-(16*(size/10+1)));
		if(actnum==size) actnum=1;
		else actnum++;
		if(decider==1)
		{
			for(turn=(size-1);turn>(actnum-1);turn--)
				road[turn]=road[turn-1];
			decider=0;
		}
		road[actnum-1]=action;
		if(headx==foodx&&heady==foody)                                                                      //��ʳ�ﱻ�Ե������������ʳ��
		{
			size++,decider=1;
			if(size>(winer-1)) win();
			do
			{
				foodx=rand()%(sizex-2)+1;
				foody=rand()%(sizey-2)+1;
			}
			while(screen[foody][foodx]==1||screen[foody][foodx]==2||screen[foody][foodx]=='#');
				screen[foody][foodx]=3;
		}
		if(kbhit())	
		{
			key=getch();
			if(key==32||key==13)
				system("pause");
			if(key==-32) key=getch();
			if((!(key!=72&&key!=80&&key!=75&&key!=77))&&(!((key==72&&action==80)||(key==80&&action==72)||(key==75&&action==77)||(key==77&&action==75))))
					action=key;
			if(!(key!='w'&&key!='W'&&key!='s'&&key!='S'&&key!='a'&&key!='A'&&key!='d'&&key!='D'))
				if(!((key=='w'&&action==80)||(key=='s'&&action==72)||(key=='a'&&action==77)||(key=='d'&&action==75)))
					if(!((key=='W'&&action==80)||(key=='S'&&action==72)||(key=='A'&&action==77)||(key=='D'&&action==75)))
						switch(key)
						{
						case 'w':
						case 'W':action=72;break;
						case 's':
						case 'S':action=80;break;
						case 'a':
						case 'A':action=75;break;
						case 'd':
						case 'D':action=77;break;
						}
		}
	}
}

loss()
{
	printf("GAME OVER~!\n");
	failer++;
	system("title ̰���ߣ�����̨�棩[��ǰ״̬:����...]");
//	system("pause");
	if(failer==1)
		MessageBox(NULL,"˧�磬�����...\n�ðɣ�\n��һ�Σ��Ҳ�����...\n��һ�ΰ�...������û��~\n","����...",MB_OK);
	else if(failer<=5)
			MessageBox(NULL,"˧�磬���ֹ���...\n�ðɣ�\n�һ��ǲ�����...\n�Ͼ������֣�����ԭ��~!","�ֹ���...",MB_OK);
		else if(failer<=15)
				MessageBox(NULL,"˧�磬�㻹�ǹ���...\n...\n�ðɣ�\n����Ȼ������...\n����̫��û�취��~��~!","���ǹ���...",MB_OK);
			else
				MessageBox(NULL,"˧�磬����ô��...��N����...\n...\n�ðɣ�\n���ò��������������~!\nż������ȥ��...��...","��N�ιҵ�...",MB_OK);
	system("mode con cols=80 lines=23");
	home('1');
}

win()
{
	printf("You are the winer~!\n");
	system("title ̰���ߣ�����̨�棩[��ǰ״̬:��ʤ~!]");
//	system("pause");
	MessageBox(NULL,"�����װ�...\n���ڻ�ʤ��...\n��������...","��ʤ~!",MB_OK);
	system("mode con cols=80 lines=23");
	home('1');
}


detail()
{
	char C1,W1[]="��ɫ",W2[]="��ɫ",W[5],F1[]="��ɫ    ",F2[]="��ɫ    ",F3[]="��ɫ    ",F4[]="��ɫ    ",F5[]="��ɫ    ",F[9];
	//				c			0				9				e				a				f				d
	int i;
	switch(Way1)
	{
	case 1:	strcpy(F,F1);break;																	//Ϊ������Ŀ��Ӧѡ�ֵ
	case 2:	strcpy(F,F2);break;
	case 3:	strcpy(F,F3);break;
	case 4:	strcpy(F,F4);break;
	case 5:	strcpy(F,F5);break;
	}
	if(Way2==1)																					//Ϊ����ʽ��Ӧѡ�ֵ
		strcpy(W,W1);
	else
		strcpy(W,W2);
	system("title ̰���ߣ�����̨�棩[��ǰ״̬:��Ϸ����...]");
	system("cls");
	printf("\n   �T�T�T�T�T�T�T�T�T�T�T�T�T�T ̰����(����̨��) �T�T�T�T�T�T�T�T�T�T�T�T�T�T");
	switch(way)
	{
	case 1:
		for(i=0;i<=3;i++)printf("\n");
		mid2();printf("    �X�T�T�T�T�T�T�T�T�T�T�T�[\n");
		mid2();printf("    �U  ѡ �� �� �� �� ��   �U\n");
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �U������������          �U\n");
		mid2();printf("    �U��������ɫ��: %s�U\n",F);
		mid2();printf("    �U������������          �U\n");
		mid2();printf("    �U  ǰ����ɫ  : %s    �U\n",W);
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �U  ȷ  ��      ȡ  ��  �U\n");
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �^�T�T�T�T�T�T�T�T�T�T�T�a");break;
	case 2:
		for(i=0;i<=3;i++)printf("\n");
		mid2();printf("    �X�T�T�T�T�T�T�T�T�T�T�T�[\n");
		mid2();printf("    �U  ѡ �� �� �� �� ��   �U\n");
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �U  ������ɫ  : %s�U\n",F);
		mid2();printf("    �U������������          �U\n");
		mid2();printf("    �U��ǰ����ɫ��: %s    �U\n",W);
		mid2();printf("    �U������������          �U\n");
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �U  ȷ  ��      ȡ  ��  �U\n");
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �^�T�T�T�T�T�T�T�T�T�T�T�a");break;
	case 3:
		for(i=0;i<=3;i++)printf("\n");
		mid2();printf("    �X�T�T�T�T�T�T�T�T�T�T�T�[\n");
		mid2();printf("    �U  ѡ �� �� �� �� ��   �U\n");
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �U  ������ɫ  : %s�U\n",F);
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �U  ǰ����ɫ  : %s    �U\n",W);
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �U����������            �U\n");
		mid2();printf("    �U��ȷ  �ϩ�    ȡ  ��  �U\n");
		mid2();printf("    �U����������            �U\n");
		mid2();printf("    �^�T�T�T�T�T�T�T�T�T�T�T�a");break;
	case 4:
		for(i=0;i<=3;i++)printf("\n");
		mid2();printf("    �X�T�T�T�T�T�T�T�T�T�T�T�[\n");
		mid2();printf("    �U  ѡ �� �� �� �� ��   �U\n");
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �U  ������ɫ  : %s�U\n",F);
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �U  ǰ����ɫ  : %s    �U\n",W);
		mid2();printf("    �U                      �U\n");
		mid2();printf("    �U            �����������U\n");
		mid2();printf("    �U  ȷ  ��    ��ȡ  �����U\n");
		mid2();printf("    �U            �����������U\n");
		mid2();printf("    �^�T�T�T�T�T�T�T�T�T�T�T�a");break;
	}
	printf("\n\n\n\n\n   [��ʾ:�밴 <�����> ѡ��ѡ����ٰ� <�س���> ʵ�ֶ�Ӧ����   �� <Esc> ���˳�]\n");
	printf("   �T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T EyreFree  �T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T");
Get:C1=getch();
	while(C1!=89&&C1!=78&&C1!=121&&C1!=110&&C1!=72&&C1!=75&&C1!=77&&C1!=80&&C1!=13&&C1!=27)
		C1=getch();																				//�����û�����
	switch(C1)
	{																							//�����û��������Ӧ���ܼ�������Ӧ����
	case 27:home('1');
	case 89:
	case 121:way=3;break;
	case 78:
	case 110:way=4;break;
	case 13:switch(way)
			{
			case 1:
			case 2:goto Get;
			case 3:Color(Way2,Way1);
			case 4:home('1');break;
			}break;
	case 72:if(way==1) way=4;
			else way--;break;
	case 75:if(way==1||way==2) 
			{
				if(way==1)
				{
					if(Way1==1) Way1=5;
					else Way1--;
				}
				else
				{
					if(Way2==1) Way2=2;
					else Way2=1;
				}
			}
			else
			{
				if(way==1) way=4;
				else way--;
			}
			break;
	case 80:if(way==4) way=1;
			else way++;break;
	case 77:if(way==1||way==2)
			{
				if(way==1)
				{
					if(Way1==5) Way1=1;
					else Way1++;
				}
				else
				{
					if(Way2==2) Way2=1;
					else Way2=2;
				}

			}
			else
			{
				if(way==4) way=1;
				else way++;
			}
			break;
	}
	detail();
}


Color(Way2,Way1)
{
	if(Way2==1)
		switch(Way1)
		{
		case 1:system("color 9c");break;
		case 2:system("color ec");break;
		case 3:system("color ac");break;
		case 4:system("color fc");break;
		case 5:system("color dc");break;
		}
	else
		switch(Way1)
		{
		case 1:system("color 90");break;
		case 2:system("color e0");break;
		case 3:system("color a0");break;
		case 4:system("color f0");break;
		case 5:system("color d0");break;
		}
	home('3');
}


readme()
{
	char Key=49;
	system("title ̰���ߣ�����̨�棩[��ǰ״̬:��Ϸ˵��...]");
	system("cls");
	printf("\n   �T�T�T�T�T�T�T�T�T�T�T�T�T�T ̰����(����̨��) �T�T�T�T�T�T�T�T�T�T�T�T�T�T\n\n\n\n");
	printf("\n                                  ��Ϸ˵��\n\n\n\n");
	printf("        (1) �뽫���뷨�л�ΪӢ������,��������޷���ȡ��������!\n\n        ");
	printf("(2) ��ʹ�÷���� ������ ������ ������ ������ �������ƶ�����!\n\n        ");
	printf("(3) ��Ϸ�����а��ո����space������ͣ\n\n\n\n\n");
	printf("\n\n   [��ʾ:�밴 <�����> ѡ��ѡ����ٰ� <�س���> ʵ�ֶ�Ӧ����   �� <Esc> ������]\n");
	printf("   �T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T EyreFree  �T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T");
	while(Key!=27)																							//�����벻Ϊ��ESC���������»�ȡ
		Key=getch();
	home('2');
}


about()
{
	char Key=49;
	system("title ̰���ߣ�����̨�棩[��ǰ״̬:��������...]");
	system("cls");
	printf("\n   �T�T�T�T�T�T�T�T�T�T�T�T�T�T ̰����(����̨��) �T�T�T�T�T�T�T�T�T�T�T�T�T�T\n\n\n");
	printf("\n                                  ��������\n\n\n");
	printf("         ���֣���ѧ��̣��д�Ʒ��������Ц��~�ǣ�\n\n        ");
	printf(" �ٶȿռ䣺http://hi.baidu.com/eyrefree/home\n\n        ");
	printf(" CSDN���ͣ�http://blog.csdn.net/eyrefree\n\n        ");
	printf(" ��ӭ���ʣ�\n\n");
	printf("                                                            EyreFree\n\n\n");
	printf("\n\n   [��ʾ:�밴 <�����> ѡ��ѡ����ٰ� <�س���> ʵ�ֶ�Ӧ����   �� <Esc> ������]\n");
	printf("   �T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T EyreFree  �T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T");
	while(Key!=27)																							//�����벻Ϊ��ESC���������»�ȡ
		Key=getch();
	home('4');
}


quit(int Quit)																								//�˳�
{
	char C1;
	int i;
	system("title ̰���ߣ�����̨�棩[��ǰ״̬:�˳��˵�...]");
	system("cls");
	if(Quit==1)
	{
		for(i=0;i<=7;i++)printf("\n");
		mid2();printf("    �X�T�T�T�T�T�T�T�T�T�T�T�[\n");
		mid2();printf("    �Uȷ �� �� �� (Y / N) ���U\n");
		mid2();printf("    �U������������          �U\n");
		mid2();printf("    �U���˳� (Y)������ (N)  �U\n");
		mid2();printf("    �U������������          �U\n");
		mid2();printf("    �^�T�T�T�T�T�T�T�T�T�T�T�a");
	}
	else
	{
		for(i=0;i<=7;i++)printf("\n");
		mid2();printf("    �X�T�T�T�T�T�T�T�T�T�T�T�[\n");
		mid2();printf("    �Uȷ �� �� �� (Y / N) ���U\n");
		mid2();printf("    �U          �������������U\n");
		mid2();printf("    �U  �˳� (Y)������ (N)���U\n");
		mid2();printf("    �U          �������������U\n");
		mid2();printf("    �^�T�T�T�T�T�T�T�T�T�T�T�a");
	}
	C1=getch();
	while(C1!=89&&C1!=78&&C1!=121&&C1!=110&&C1!=72&&C1!=75&&C1!=77&&C1!=80&&C1!=13&&C1!=27)
		C1=getch();																						//�����벻Ϊ���ܼ������»�ȡ
	switch(C1)
	{
	case 27:home('1');
	case 89:
	case 121:Quit=1;break;
	case 78:
	case 110:Quit=2;break;
	case 13:if(Quit==1) exit(0);
			else home('1');
	default:if(Quit==1) Quit=2;
			else Quit=1;break;
	}
	quit(Quit);																							//���ݲ����ƶ����ο�
}