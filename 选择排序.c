/* Note:Your choice is C IDE */
#include "stdio.h"
void main()
{
	//�����㷨֮ѡ������
	//ÿһ�˴Ӵ����������Ԫ����ѡ����С������󣩵�һ��Ԫ����Ϊ��Ԫ�أ�ֱ������Ԫ������Ϊֹ��
	
    int score[5]={87,85,89,96,67};
    int tmp;//������ʱ����
    int x,y;//����ѭ������
    
    for(x=0;x<4;x++)//��ѭ����ѡ��һ��λ��
    {
    	for(y=x+1;y<=4;y++)//��ѭ���������������ļ�ʣ�µ�λ�ú͵�һ��λ�ñȽ�
    	{
    		if(score[y]<score[x])
    	   {
    		tmp=score[x];
    		score[x]=score[y];
    		score[y]=tmp;//��Զ��С�ķ��ڵ�һ��λ�ã����õ���������λ��
    	   }
    	
    	}
    }
    for(x=0;x<=4;x++)
    {
    	printf("%d\n",score[x]);
    }
}