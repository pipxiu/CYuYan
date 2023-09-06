/* Note:Your choice is C IDE */
#include "stdio.h"
void main()
{
	//排序算法之选择排序
	//每一趟从待排序的数据元素中选择最小（或最大）的一个元素作为首元素，直到所有元素排完为止。
	
    int score[5]={87,85,89,96,67};
    int tmp;//设置临时变量
    int x,y;//设置循环变量
    
    for(x=0;x<4;x++)//外循环：选第一个位置
    {
    	for(y=x+1;y<=4;y++)//内循环：将二、三、四即剩下的位置和第一个位置比较
    	{
    		if(score[y]<score[x])
    	   {
    		tmp=score[x];
    		score[x]=score[y];
    		score[y]=tmp;//永远把小的放在第一个位置，借用第三变量换位置
    	   }
    	
    	}
    }
    for(x=0;x<=4;x++)
    {
    	printf("%d\n",score[x]);
    }
}