#include "stdio.h"
void main()
{
	//排序算法之冒泡排序
	//通过对待排序序列从前向后（从下标较小的元素开始）,依次对相邻两个元素的值进行两两比较，若发现逆序则交换，使值较大的元素逐渐从前移向后部，就如果水底下的气泡一样逐渐向上冒。
	
    int score[5]={87,85,89,96,67};
    int tmp;//创建临时变量
    int x,y;
    
    for(x=0;x<4;x++)//外循环：设置循环次数
    {
    	for(y=0;y<4-x;y++)//内循环：依次比较两个数
    	{
    		if(score[y]<score[y+1])
    	   {
    		tmp=score[y];
    		score[y]=score[y+1];
    		score[y+1]=tmp;//永远把大的放在第一个位置，借用第三变量换位置
    	   }
    	
    	}
    }
    for(x=0;x<=4;x++)
    {
    	printf("%d\n",score[x]);//打印排序结果
    }
}