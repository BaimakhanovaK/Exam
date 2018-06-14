#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<Windows.h>

void main() {
	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int answer =0;

	printf("Отвечайте на вопросы короткими выражениями да или нет!!!\nЕсли да указываете 1, если нет то 0, если не знаю 2.\nХотите стать проффесиональным музыкантом? \n");
	scanf("%d", &answer);

	if (answer == 1)
	{
		printf("Вы богаты? \n");
		scanf("%d", &answer);

		if (answer == 1)
		{
			printf("Любите отрываться? \n");
			scanf("%d", &answer);

			if (answer == 1)
			{
				printf("Пиво пьете? \n");
				scanf("%d", &answer);

				if (answer == 1)
				{
					printf("Хотите играть классику? \n");
					scanf("%d", &answer);

					if (answer == 1)
					{
						printf("Готовы работать круглые сутки? \n");
						scanf("%d", &answer);

						if (answer == 1)
						{
							SetConsoleTextAttribute(hConsole, 14);
							printf("ГОБОЙ \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							printf("Готовы к тому, что будут проблемы с работой, даже если вы круто играете? \n");
							scanf("%d", &answer);

							if (answer == 1)
							{
								SetConsoleTextAttribute(hConsole, 13);
								printf("КЛАРНЕТ \n");
								SetConsoleTextAttribute(hConsole, 15);
							}
							else
							{
								SetConsoleTextAttribute(hConsole, 10);
								printf("ВАЛТОРНА \n");
								SetConsoleTextAttribute(hConsole, 15);
							}
						}

					}
					else if (answer == 2)
					{
						SetConsoleTextAttribute(hConsole, 13);
						printf("ТРОМБОН \n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else
					{
						printf("...а джаз? \n");
						scanf("%d", &answer);

						if (answer == 1)
						{
							SetConsoleTextAttribute(hConsole, 13);
							printf("САКСОФОН \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							printf("У вас есть немецкие корни? \n");
							scanf("%d", &answer);

							if (answer == 1)
							{
								SetConsoleTextAttribute(hConsole, 10);
								printf("ТРУБА \n");
								SetConsoleTextAttribute(hConsole, 15);
							}
							else
							{
								SetConsoleTextAttribute(hConsole, 11);
								printf("ДУДУК \n");
								SetConsoleTextAttribute(hConsole, 15);
							}
						}
					}
				}
				else
				{
					printf("Вы страстная натура? \n");
					scanf("%d", &answer);

					if (answer == 1)
					{
						SetConsoleTextAttribute(hConsole, 11);
						printf("ВИОЛОНЧЕЛЬ \n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else
					{
						SetConsoleTextAttribute(hConsole, 13);
						printf("ДОМБРА \n");
						SetConsoleTextAttribute(hConsole, 15);
					}
				}
			}
			else
			{
				printf("Готовы  заниматься по 8 часов в день? \n");
				scanf("%d", &answer);

				if (answer == 1)
				{
					printf("Хотите учить детей? \n");
					scanf("%d", &answer);

					if (answer == 1)
					{
						SetConsoleTextAttribute(hConsole, 11);
						printf("ФЛЕЙТА \n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else
					{
						SetConsoleTextAttribute(hConsole, 14);
						printf("СКРИПКА \n");
						SetConsoleTextAttribute(hConsole, 15);
					}
				}
				else
				{
					printf("Ноты знаете? \n");
					scanf("%d", &answer);

					if (answer == 1)
					{
						SetConsoleTextAttribute(hConsole, 14);
						printf("АРФА \n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else
					{
						SetConsoleTextAttribute(hConsole, 10);
						printf("АЛЬТ \n");
						SetConsoleTextAttribute(hConsole, 15);
					}
				}
			}
		}
		else
		{
			printf("Любите деньги? \n");
			scanf("%d", &answer);

			if (answer == 1) 
			{
				SetConsoleTextAttribute(hConsole, 14);
				printf("Забудьте о музыке \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else
			{
				printf("Любите отрываться? \n");
				scanf("%d", &answer);

				if (answer == 1)
				{
					printf("Пиво пьете? \n");
					scanf("%d", &answer);

					if (answer == 1)
					{
						printf("Хотите играть классику? \n");
						scanf("%d", &answer);

						if (answer == 1)
						{
							printf("Готовы  работать круглые сутки? \n");
							scanf("%d", &answer);

							if (answer == 1)
							{
								SetConsoleTextAttribute(hConsole, 12);
								printf("ГОБОЙ \n");
								SetConsoleTextAttribute(hConsole, 15);
							}
							else
							{
								printf("Готовы к тому, что будут проблемы с работой, даже если вы круто играете? \n");
								scanf("%d", &answer);

								if (answer == 1)
								{
									SetConsoleTextAttribute(hConsole, 10);
									printf("КЛАРНЕТ \n");
									SetConsoleTextAttribute(hConsole, 15);
								}
								else
								{
									SetConsoleTextAttribute(hConsole, 13);
									printf("ВАЛТОРНА \n");
									SetConsoleTextAttribute(hConsole, 15);
								}
							}
						}
						else if (answer == 2)
						{
							SetConsoleTextAttribute(hConsole, 11); 
							printf("ТРОМБОН \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							printf("...а джаз? \n");
							scanf("%d", &answer);

							if (answer == 1)
							{
								SetConsoleTextAttribute(hConsole, 10);
								printf("САКСОФОН \n");
								SetConsoleTextAttribute(hConsole, 15);
							}
							else
							{
								printf("У вас есть немецкие корни? \n");
								scanf("%d", &answer);

								if (answer == 1)
								{
									SetConsoleTextAttribute(hConsole, 12);
									printf("ТРУБА \n");
									SetConsoleTextAttribute(hConsole, 15);
								}
								else
								{
									SetConsoleTextAttribute(hConsole, 13);
									printf("ДУДУК \n");
									SetConsoleTextAttribute(hConsole, 15);
								}
							}
						}
					}
					else
					{
						printf("Вы страстная натура? \n");
						scanf("%d", &answer);

						if (answer == 1)
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("ВИОЛОНЧЕЛЬ \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 10);
							printf("ДОМБРА \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
				}
				else
				{
					printf("Готовы заниматься по 8 часов в день? \n");
					scanf("%d", &answer);

					if (answer == 1)
					{
						printf("Хотите учить детей? \n");
						scanf("%d", &answer);

						if (answer == 1)
						{
							SetConsoleTextAttribute(hConsole, 12);
							printf("ФЛЕЙТА \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 14);
							printf("СКРИПКА \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
					else
					{
						printf("Ноты знаете? \n");
						scanf("%d", &answer);

						if (answer == 1)
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("АРФА \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 10);
							printf("АЛЬТ \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
				}
			}
		}
	}
	else
	{
		printf("Хотите встречаться с девушками? \n");
		scanf("%d", &answer);

		if (answer == 1)
		{
			printf("Любите глупышек? \n");
			scanf("%d", &answer);

			if (answer == 1)
			{
				printf("Любите выпить? \n");
				scanf("%d", &answer);

				if (answer == 1)
				{
					SetConsoleTextAttribute(hConsole, 14);
					printf("ГИТАРА \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 10);
					printf("ФОРТЕПИАНО \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else
			{
				printf("Вы парень? \n");
				scanf("%d", &answer);

				if (answer == 1)
				{
					SetConsoleTextAttribute(hConsole, 14);
					printf("ОПЕРНЫЙ ПЕВЕЦ \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 12);
					printf("УДАРНЫЕ \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
		}
		else
		{
			printf("Хотите встречаться с парнями? \n");
			scanf("%d", &answer);

			if (answer == 1)
			{
				printf("Вы парень? \n");
				scanf("%d", &answer);

				if (answer == 1)
				{
					SetConsoleTextAttribute(hConsole, 14);
					printf("ОПЕРНЫЙ ПЕВЕЦ \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 12);
					printf("УДАРНЫЕ \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 13);
				printf("ФАГОТ \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
		}
	}
}
