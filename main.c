#include <stdio.h>

char arr[1024];
int index = 0;
int main()
{

    printf("minganciguanlixitong\n");
    while(1)
    {
    printf("1---tianjiaminganzifu\n");
    printf("2---tianjiaminganzifu\n");
    printf("3---tianjiaminganzifu\n");
    printf("4---tianjiaminganzifu\n");
    printf("5---tianjiaminganzifu\n");
   
    printf("qingshurubianhao\n");
   
    char code;
    scanf("%d",&code);

    if(code == 1){
      printf("qingshuruyaoyianjiademinganzifu\n");
      char m;
      scanf("%c",&m);
      scanf("%c",&m);
      arr[index]=m;
      index ++;
      
      printf("tianjiachenggong,dianjihuichejixu\n");
      char x;
      scanf("%c",&x);
      scanf("%c",&x);

    }
    if(code == 2){
        
    }
    if(code == 3){
        
    }
    if(code == 4){
        
    }
    if(code == 5){
        printf("jieshu\n");
        break;
        
    }


    
    
    }
   



    return 0;
}