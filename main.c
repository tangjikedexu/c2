#include <stdio.h>

char arr[1024];
int index = 0;
int isMingan(char x)
{
    int count = 0;
    for (int i = 0; i < index; i++)
    {
        if (x == arr[i])
        {
            count++;
        }
    }
    if (count == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{

    printf("minganciguanlixitong\n");
    while (1)
    {
        printf("1---tianjiaminganzifu\n");
        printf("2---shanchuzuihouyigeminganzifu\n");
        printf("3---chakansuoyouminganzifu\n");
        printf("4---tihuanneirongzhongdeminganzifu\n");
        printf("5---tuichu\n");

        printf("qingshurubianhao\n");

        char code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("qingshuruyaoyianjiademinganzifu\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
            arr[index] = m;
            index++;

            printf("tianjiachenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("shanchuzuihouyigeminganzifu\n");
            index--;
            printf("shanchuchenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 3)
        {
            printf("suoyouminganzifuruxia\n");

            for (int i = 0; i < index; i++)
            {
                printf("di%dgeminganzifuwei%c \n", i + 1, arr[i]);
            }
            printf("shanchuchenggong,dianjihuichejixu \n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            printf("qingshuruyiduanyingwen \n");
            char neirong[1024];
            scanf("%s", neirong);
            for (int i = 0; 1; i++)
            {
                if (neirong[i] == '\0')
                {
                    break;
                }
                if (isMingan(arr[i]) == 1)
                {
                    neirong[i] = '*';
                }
                printf("%c", neirong[i]);
            }
            printf("\n");
            printf("tihuanwancheng,dianjihuichejixu \n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 5)
        {
            printf("jieshu\n");
            break;
        }
    }

    return 0;
}