#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<Windows.h>

void main() {
	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int answer =0;

	printf("��������� �� ������� ��������� ����������� �� ��� ���!!!\n���� �� ���������� 1, ���� ��� �� 0, ���� �� ���� 2.\n������ ����� ���������������� ����������? \n");
	scanf("%d", &answer);

	if (answer == 1)
	{
		printf("�� ������? \n");
		scanf("%d", &answer);

		if (answer == 1)
		{
			printf("������ ����������? \n");
			scanf("%d", &answer);

			if (answer == 1)
			{
				printf("���� �����? \n");
				scanf("%d", &answer);

				if (answer == 1)
				{
					printf("������ ������ ��������? \n");
					scanf("%d", &answer);

					if (answer == 1)
					{
						printf("������ �������� ������� �����? \n");
						scanf("%d", &answer);

						if (answer == 1)
						{
							SetConsoleTextAttribute(hConsole, 14);
							printf("����� \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							printf("������ � ����, ��� ����� �������� � �������, ���� ���� �� ����� �������? \n");
							scanf("%d", &answer);

							if (answer == 1)
							{
								SetConsoleTextAttribute(hConsole, 13);
								printf("������� \n");
								SetConsoleTextAttribute(hConsole, 15);
							}
							else
							{
								SetConsoleTextAttribute(hConsole, 10);
								printf("�������� \n");
								SetConsoleTextAttribute(hConsole, 15);
							}
						}

					}
					else if (answer == 2)
					{
						SetConsoleTextAttribute(hConsole, 13);
						printf("������� \n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else
					{
						printf("...� ����? \n");
						scanf("%d", &answer);

						if (answer == 1)
						{
							SetConsoleTextAttribute(hConsole, 13);
							printf("�������� \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							printf("� ��� ���� �������� �����? \n");
							scanf("%d", &answer);

							if (answer == 1)
							{
								SetConsoleTextAttribute(hConsole, 10);
								printf("����� \n");
								SetConsoleTextAttribute(hConsole, 15);
							}
							else
							{
								SetConsoleTextAttribute(hConsole, 11);
								printf("����� \n");
								SetConsoleTextAttribute(hConsole, 15);
							}
						}
					}
				}
				else
				{
					printf("�� ��������� ������? \n");
					scanf("%d", &answer);

					if (answer == 1)
					{
						SetConsoleTextAttribute(hConsole, 11);
						printf("���������� \n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else
					{
						SetConsoleTextAttribute(hConsole, 13);
						printf("������ \n");
						SetConsoleTextAttribute(hConsole, 15);
					}
				}
			}
			else
			{
				printf("������  ���������� �� 8 ����� � ����? \n");
				scanf("%d", &answer);

				if (answer == 1)
				{
					printf("������ ����� �����? \n");
					scanf("%d", &answer);

					if (answer == 1)
					{
						SetConsoleTextAttribute(hConsole, 11);
						printf("������ \n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else
					{
						SetConsoleTextAttribute(hConsole, 14);
						printf("������� \n");
						SetConsoleTextAttribute(hConsole, 15);
					}
				}
				else
				{
					printf("���� ������? \n");
					scanf("%d", &answer);

					if (answer == 1)
					{
						SetConsoleTextAttribute(hConsole, 14);
						printf("���� \n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else
					{
						SetConsoleTextAttribute(hConsole, 10);
						printf("���� \n");
						SetConsoleTextAttribute(hConsole, 15);
					}
				}
			}
		}
		else
		{
			printf("������ ������? \n");
			scanf("%d", &answer);

			if (answer == 1) 
			{
				SetConsoleTextAttribute(hConsole, 14);
				printf("�������� � ������ \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else
			{
				printf("������ ����������? \n");
				scanf("%d", &answer);

				if (answer == 1)
				{
					printf("���� �����? \n");
					scanf("%d", &answer);

					if (answer == 1)
					{
						printf("������ ������ ��������? \n");
						scanf("%d", &answer);

						if (answer == 1)
						{
							printf("������  �������� ������� �����? \n");
							scanf("%d", &answer);

							if (answer == 1)
							{
								SetConsoleTextAttribute(hConsole, 12);
								printf("����� \n");
								SetConsoleTextAttribute(hConsole, 15);
							}
							else
							{
								printf("������ � ����, ��� ����� �������� � �������, ���� ���� �� ����� �������? \n");
								scanf("%d", &answer);

								if (answer == 1)
								{
									SetConsoleTextAttribute(hConsole, 10);
									printf("������� \n");
									SetConsoleTextAttribute(hConsole, 15);
								}
								else
								{
									SetConsoleTextAttribute(hConsole, 13);
									printf("�������� \n");
									SetConsoleTextAttribute(hConsole, 15);
								}
							}
						}
						else if (answer == 2)
						{
							SetConsoleTextAttribute(hConsole, 11); 
							printf("������� \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							printf("...� ����? \n");
							scanf("%d", &answer);

							if (answer == 1)
							{
								SetConsoleTextAttribute(hConsole, 10);
								printf("�������� \n");
								SetConsoleTextAttribute(hConsole, 15);
							}
							else
							{
								printf("� ��� ���� �������� �����? \n");
								scanf("%d", &answer);

								if (answer == 1)
								{
									SetConsoleTextAttribute(hConsole, 12);
									printf("����� \n");
									SetConsoleTextAttribute(hConsole, 15);
								}
								else
								{
									SetConsoleTextAttribute(hConsole, 13);
									printf("����� \n");
									SetConsoleTextAttribute(hConsole, 15);
								}
							}
						}
					}
					else
					{
						printf("�� ��������� ������? \n");
						scanf("%d", &answer);

						if (answer == 1)
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("���������� \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 10);
							printf("������ \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
				}
				else
				{
					printf("������ ���������� �� 8 ����� � ����? \n");
					scanf("%d", &answer);

					if (answer == 1)
					{
						printf("������ ����� �����? \n");
						scanf("%d", &answer);

						if (answer == 1)
						{
							SetConsoleTextAttribute(hConsole, 12);
							printf("������ \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 14);
							printf("������� \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
					else
					{
						printf("���� ������? \n");
						scanf("%d", &answer);

						if (answer == 1)
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("���� \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							SetConsoleTextAttribute(hConsole, 10);
							printf("���� \n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
				}
			}
		}
	}
	else
	{
		printf("������ ����������� � ���������? \n");
		scanf("%d", &answer);

		if (answer == 1)
		{
			printf("������ ��������? \n");
			scanf("%d", &answer);

			if (answer == 1)
			{
				printf("������ ������? \n");
				scanf("%d", &answer);

				if (answer == 1)
				{
					SetConsoleTextAttribute(hConsole, 14);
					printf("������ \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 10);
					printf("���������� \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else
			{
				printf("�� ������? \n");
				scanf("%d", &answer);

				if (answer == 1)
				{
					SetConsoleTextAttribute(hConsole, 14);
					printf("������� ����� \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 12);
					printf("������� \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
		}
		else
		{
			printf("������ ����������� � �������? \n");
			scanf("%d", &answer);

			if (answer == 1)
			{
				printf("�� ������? \n");
				scanf("%d", &answer);

				if (answer == 1)
				{
					SetConsoleTextAttribute(hConsole, 14);
					printf("������� ����� \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 12);
					printf("������� \n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 13);
				printf("����� \n");
				SetConsoleTextAttribute(hConsole, 15);
			}
		}
	}
}
