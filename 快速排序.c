#include <stdio.h>
void quicksort(int data[],int first,int last)
{
    int i, j, t, base;
    if (first>last)
        return;
    base=data[first];               /* ����Ԫ����Ϊ���� */
    i=first;
    j=last;
    while(i!=j)                     /* �ظ�����Ĺ��̣�ֱ��i��j��� */
    {
        while(data[j]>=base && i<j) /* j���������ҵ�С�ڻ�����Ԫ�� */
            j--;
        while(data[i]<=base && i<j) /* i�������ң��ҵ����ڻ�����Ԫ�� */
            i++;
        /* ���������� */
        if(i<j)
        {
            t=data[i];
            data[i]=data[j];
            data[j]=t;
        }
    }
    data[first]=data[i];        /* ��i,j��������ֵ�����ڻ���λ�� */
    data[i]=base;               /* ��������������Ӧ�õ�λ�� */
    quicksort(data,first,i-1);  /* ��ͬ���Ĳ��ԣ��ݹ鴦����ߵĲ��� */
    quicksort(data,i+1,last);   /* ��ͬ���Ĳ��ԣ��ݹ鴦���ұߵĲ��� */
}
int main( )
{
    int data[10] = {6, 1, 2, 7, 9, 3, 4, 5, 10, 8};
    quicksort(data, 0,9);
    int i;
    for(i=0; i<10; i++)
        printf("%d ", data[i]);
    printf("\n");
    return 0;
}

