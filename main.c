#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> //для sleep

int Menu();
void Time_one();
void Time_two();
void Timer();
//void Alarm();
void Info();

int main(void)
{
    int change = 0;
    while(change != 6)
    {
        switch(change)
        {
        case 0:
            change = Menu();
            break;
        case 1:
            Time_one();
            change = 0;
            break;
        case 2:
            Time_two();
            change = 0;
            break;
        case 3:
            Timer();
            change = 0;
            break;
        case 4:
            //Alarm();
            change = 0;
            break;
        case 5:
            Info();
            change = 0;
            break;
        case 6:
            break;

        default:
            change = 0;
            break;
        }
    }
    return 10;
}

int Menu()
{
    int change;
    system("clear");
    printf("Добро пожаловать в приложение \"Таймер\"\n");
    printf("1. Нынешнее время(с выходом).\n");
    printf("2. Нынешнее время(без выхода).\n");
    printf("3. Таймер.\n");
    printf("4. Будильник.(не работает)\n");
    printf("5. Информация.\n");
    printf("6. Выход.\n");
    printf("Ввод: ");
    scanf("%d", &change);
    return change;
}


void Time_one()
{
    while(1)
    {
        system("clear");
        time_t timeval;
        (void)time(&timeval);
        printf("Чтобы выйти надо закрыть окно -_-\n");
        printf ("Дата и время: %s", ctime(&timeval));
        sleep(1);
    }
}

void Time_two()
{
    system("clear");
    time_t timeval;
    (void)time(&timeval);
    printf ("Дата и время: %s", ctime(&timeval));
    sleep(5);
}

void Timer()
{
    system("clear");
    int t;
    printf("Таймер.\n");
    printf("Введите кол-во секунд для таймера: ");
    scanf("%d", &t);

    while(t>0)
    {
        system("clear");
        printf("Осталось: %d\n", t);
        sleep(1);
        t--;
    }

}

void Info()
{
    system("clear");
    printf("Название: \"Time\".\n");
    printf("Автор: Маковецкий А.А.\n");
    printf("Версия: alfa_1\n");
    printf("Язык программирования: C\n");
    printf("Описание:\n");
    printf("Эта программа пытается имитировать показ времени.\n");
    sleep(20);
}
/*
void Alarm()
{
    start:
    system("clear");
    int Y, M, D, h, m, s, t;
    printf("Будильник.\n");
    printf("Введите дату, когда надо, чтобы сработал будильник.\n");
    printf("Год: ");
    scanf("%d ", &Y);
    while(Y>0)
    {
        if(Y%4==0)
        {
            Y*=366;
            y*=
        }
        else if(Y%4!=0)
        {

        }
    }
    printf("Месяц: ");
    scanf("%d ", &M);
    if(M>12 || M<1)
    {
        printf("Ошибка, введено некорректное число\n");
        goto start;
    }
    printf("День: ");
    scanf("%d ", &D);
    if((M%2==0 && D>30) || D<1)
    {
        printf("Ошибка, введено некорректное число\n");
        goto start;
    }
    if((M==2 && D>28) || D<1)
    {
        printf("Ошибка, введено некорректное число\n");
        goto start;
    }
    printf("Час: ");
    scanf("%d ", &h);
    if(h>23 || h<0)
    {
        printf("Ошибка, введено некорректное число\n");
        goto start;
    }
    printf("Минута: ");
    scanf("%d ", &m);
    if(m>59 || m<0)
    {
        printf("Ошибка, введено некорректное число\n");
        goto start;
    }
    printf("Секунда: ");
    scanf("%d ", &s);
    if(s>59 || s<0)
    {
        printf("Ошибка, введено некорректное число\n");
        goto start;
    }
    t =
}
*/
