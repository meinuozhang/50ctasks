//1.输出“hello world"
/*#include<stdio.h>
int main()
{
	printf("hello world\n");
	getchar();
	return 0;
}*/

//2.计算1---100的和
/*#include<stdio.h>
int main()
{
	int i = 1, sum = 0;
	for (; i <= 100; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);
	getchar();
	return 0;
}*/

//3.在屏幕上打印9*9口诀表
#include<stdio.h>
int main()
{
	int i = 0, j = 0;
	for (i=1; i <= 9; i++)
	{
		for (j=1; j<=i ; j++)
		{
			printf("%d*%d=%d",i,j, i*j);
		}
		printf("\n");
	}

	getchar();
	return 0;
}

//4.求两个数的最大数
/*#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d",&a,&b);
	if (a > b)
	{
		printf("%d\n", &a);
	}
	else
	{
		printf("%d\n", &b);
	}
	getchar();
	return 0;
}*/
//5.求10个数中最大的一个
/*#include<stdio.h>
int main()
{
	int i = 0, a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int max = 0;
	for (; i < 10; i++)
	{
		if (a[i]>max)
		{
			max = a[i];
		}
	}
	printf("%d\n", max);
	getchar();
	return 0;
}
*/
//6.1-100之间的素数
/*#include<stdio.h>
int main()
{
	 int i, n;
	 for (n=1; n<=100; ++n)
	 {
	   for(i=2; i<=n; ++i)
	   {
	     if(n%i == 0)
		 {
		   break;
		 }
	  }
	   if (n == i)
	   { 
	   printf("%d ", n);
	  }
	 }
	 putchar ('\n');  
	 return 0;
}*/
//7.两个数的最大公约数
/*#include<stdio.h>
int main()
{
	int a,b,c,temp=0,small=0;
	scanf("%d %d",&a,&b);
    while((a%b)!=0)
	{
		temp=a%b;
		a=b;
		b=temp;
	}
	c=b;
	printf("最大公约数为%d\n",b);
	return 0;
}*/
//8.两个数的最小公倍数
/*#include<stdio.h>
int main()
{
	int a,b,temp=0,small=0;
	int gl,cl;//gl/cl分别用来保存a/b的值
	scanf("%d %d",&a,&b);
	gl=a,cl=b;
    while((a%b)!=0)
	{
		temp=a%b;
		a=b;
		b=temp;
	}
	small=(gl*cl)/b;
	printf("最大公约数为%d\n",small);
	return 0;
}*/		

//9.交换两个数的值
/*#include<stdio.h>
int main()
 {
	//int a=3, b=7;
	int a,b,temp;
	scanf("%d %d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("a=%d b=%d\n", a, b);
	getchar();
	return 0;
}*/

//10.使用函数交换两个数
//#include<stdio.h>
//void Swap(int *a, int* b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int a = 7, b = 9;
//	Swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	getchar();
//	return 0;
//}

//11.找出不重复的3位数
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 1; j < 5; j++)
//		{
//			for (k = 1; k < 5; k++)
//			{
//					if (i!=j && j!= k && k!= i)
//					{
//						printf("%d%d%d ", i, j, k);
//					}
//
//			}
//		}
//	}
//	getchar();
//	return 0;
//}

//12.闰年规则
/*#include<stdio.h>
int main()
{
	int year=0,sum=0;
	for (year=1900; year <= 2000; year++)
	{
		if (((year%4== 0) && (year%100 != 0))|| (year%400==0))
		{
			sum++;
			printf("%d ", year);
		}
	}
	getchar();
	return 0;
}
*/
//13求解分数序列和
/*#include<stdio.h>
int main()
{
	int a = 2, b = 1,c=0;
	float sum = 0.0;
	int i = 0,j=0;;
	for (i = 0; i < 20;i++)
	{
		sum += (float)a / b;
		c=a+b;
		b=a;
		a=c;
	}
	printf("%0.2f\n", sum);
	return 0;
}*/
//14.s=a+aa+aaa+aa..a
/*#include<stdio.h>
int main()
{
	int a,n,i=1;
	int temp=0,sum=0;
	scanf("%d %d",&a,&n);
	while(i<=n)
	{
       temp+=a;
	   sum+=temp;
	   a*=10;
	   i++;
	}
	printf("总和为：%d\n",sum);
	return 0;
}*/
//15.求解球所走路径
/*#include<stdio.h>
int main()
{
   int n=0;
   float length=100.0,clength=0.0;//clength用来表示反弹的总高度
   clength=length;
   for(n=1;n<=10;n++)
   {
	   length/=2;
	   clength+=length*2;
       printf("第%d次反弹的高度为%f\n",n,length);
   }
   printf("反弹的总高度为%f\n",clength);
   return 0;
}*/
//16.猴子吃桃
/*#include<stdio.h>
int main()
{
   int i=0,sum=1,n=1;
   for(i=9;i>=6;i--)
   {
	   n=2*n+1;
	   sum+=n;
   }
   printf("桃子总数为：%d\n",sum);
   return 0;
}*/
//17.1-1/2+1/3....的和
/*int main()
{
	int n = 1;
	int flag = 1;
	double sum = 0.0;
	for(n = 1;n <= 100;n++)
	{
		sum = sum + (1.0/n)*flag;
		flag *= -1;
		
	}
	printf("sum = %f\n",sum);
	return 0;
}*/   
//18 .求解20以内的阶乘和
/*#include<stdio.h>
int main()
{
	int i = 1, Total = 1, sum = 0;
	for (; i <= 20; i++)
	{
		Total=Total*i;
		sum+=Total;
	}
	printf("%d\n",sum);
	return 0;
} */
//19.回文数的判断
/*#include<stdio.h>
int main()
{
  int data,b=0,a=0;
  scanf("%data ",&data);
  a=data;
  while(a)
  {
	b=b*10+a%10;
	a=a/10;
  }
  if(b==data)
  {
	  printf("it is true\n");
  }
  else
  {
	  printf("it is not\n");
  }
  return 0;
}*/

//20.回文字符串
/*#include<stdio.h>
int main()
{
	char arr[10],i=0,j=0;
	scanf("%s",arr);
    while(arr[i]!='\0')
	{
		i++;
	}
	i--;
	for(;j<=i;i--,j++)
	{
		if(arr[i]!=arr[j])
		{
			printf("it is not huiwenstring\n");
			return;
		}
	}
		  printf("it is huiwen string\n");
		
	return 0;
}*/
//21.3*3矩阵对角线之和
/*#include<stdio.h>
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i=0,j=0,sum=0,total=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)//右对角线元素特征
			{
              sum+=a[i][j];
			}	
			if(i+j==2)//左对角线元素特征
			{
              total+=a[i][j];
			}
		}
	}
	printf("右对角线元素之和为%d\n",sum);
	printf("左对角线元素之和为%d\n",total);
	return 0;
}*/
//22整型数组逆序
/*#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int *p=a;//指针指向数组首元素
	int n=sizeof(a)/sizeof(a[0]);//计算数组元素的个数
	int *q=&(a[n-1]);//数组指向数组最后一个元素
	int i=0;
	printf("%d\n",n);
	while(p!=q)
	{
		int temp=0;
		temp=*p;
		*p=*q;
		*q=temp;
		p++;
		q--;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}*/

//23.使用冒泡排序整型数组
/*#include<stdio.h>
int main()
{
	int arr[]={2,1,6,9,3,5,4,8,7,10};
	int i=0,j=0;
    int n=sizeof(arr)/sizeof(arr[0]);//计算数组元素的个数
	for(i=0;i<n;i++)
	{
       for(j=i+1;j<n;j++)
	   {
		   if(arr[i]>arr[j])
		   {
                int temp=0;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
		   }
	   }
	}
	for(i=0;i<n;i++)
	{
	 printf("%d ",arr[i]);
	}
  return 0;
	}
*/

//24.字符串的排序输出
/*#include<stdio.h>
int main()
{
	char arr[]="hello",brr[]="bit-tech",crr[]="world";
	char* p1=arr,*p2=brr,*p3=crr;
	while(*p1!='\0' && *p2!='\0' && *p3!='\0')
	{
      if(*p1>*p2 && *p2>*p3)
	  {
		  printf("%s\n",p3);
		  printf("%s\n",p2);
          printf("%s\n",p1);
		  return ;
	  }
	  if(*p1>*p3 && *p3>*p2)
	  {
          printf("%s\n",p2);
          printf("%s\n",p3);
          printf("%s\n",p1);
		  return ;
	  }
	  if(*p2>*p1 && *p1>*p3)
	  {
          printf("%s \n",p3);
          printf("%s\n",p1);
          printf("%s\n",p2);
		  return ;
	  }
       if(*p3>*p1 && *p1>*p2)
	  {
		  printf("%s\n",p2);
		  printf("%s\n",p1);
          printf("%s\n",p3);
		  return ;
	  }
	}
	return  0;
}
   */      

  //25.递归求解斐波那契数列的第N个数
/*#include<stdio.h>
int fib(int n)      //n代表第几项
{
    if (n <= 1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}
int main()
{
    int n,i;
    printf("请输入斐波那契数列的项数：");
    scanf("%d",&n);
    for (i = 0; i < n+1; i++)         //输出所有项
    {
        printf("%d, ", fib(i));
	}
	return 0;
}*/

//26.非递归求斐波那契数列的第N个数
/*#include<stdio.h>
int main()
{
	int f[20]={1,1,0},i=0;
	for(i=2;i<20;i++)
	{
		f[i]=f[i-1]+f[i-2];
	    printf("第%d个数是:%d\n",i,f[i]);
	}
	return 0;
}*/
   
//27字符串的长度
/*#include<stdio.h>
int length(char* a)
{
	char* p=a;
	int sum=0;
	while(*p!='\0')
	{
		sum++;
		p++;
	}
	return sum;
}
int main()
{
	char str[]="hello";
	int ret=length(str);
    printf("the string length is %d\n",ret);
	return 0;
}*/
//28.不允许有中间变量计算字符串长度
/*#include<stdio.h>
int length(char* a)
{
	if(*a=='\0')
	{
		return 0;
	}
	else
	{
		return (length(++a)+1);
	}
}
int main()
{
   char str[]="hello";
   int ret=length(str);
   printf("%d\n",ret);
   return 0;
}*/
//29.选择排序
/*#include<stdio.h>
int main()
{
	int arr[10]={2,4,7,1,9,3,6,5,8,10};
   	int i ,j , k;
	for(i = 0;i < 10;i++)
	{
		k = i;
		for(j = i+1;j < 10;j++)
		{
			if(arr[j] < arr[k])
			{
				int temp = arr[k];
				arr[k] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n
	return 0;
}*/

//30.求二进制数中1 的个数
/*#include<stdio.h>
int main()
{
  int a,temp,sum=0;;
  scanf("%d",&a);
  while(a)
  {
	  temp=a&1;
	  if(temp>0)
	  {
		  sum++;
	  }
	  a=a>>1;
  }
    printf("1的个数为%d\n",sum);
	return 0;
}*/

//31.判断本机的存储方式
/*#include<stdio.h>
int main()
{
	union 
	{
		short value;
		char array[sizeof(short)];
	}bytes;
	bytes.value=0x0102;
	if((bytes.array[0]==1) && (bytes.array[1]==2))
	{
		printf("it is big\n");
	}
    if((bytes.array[0]==2) && (bytes.array[1]==1))
	{
		printf("it is small\n");
	}
	else
	{
		printf("unknow\n");
	}	
  //printf("%x\n",bytes.array[0]);
  //printf("%x\n",bytes.array[1]);
  return 0;
}
*/

//32交换两个数（不适用中间变量）
/*#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d b=%d\n",a,b);
	return 0;
}*/
//33.1-100中9出现的次数
/*#include<stdio.h>
int main()
{
  int i=0,sum=0;
  for(i=1;i<=100;i++)
  {
	  if(i%10==9)
	  {
		  sum++;
	  }
	  if(i/10==9)
	  {
		  sum++;
	  }
  }
  printf("%d\n",sum);
  return 0;
}*/
//34.顺序输出一个数的每一位
/*#include<stdio.h>
int main()
{
	int a,arr[10]={0},i=0;
	scanf("%d",&a);
    while(a>0)
	{
       arr[i++]=a%10;
	   a=a/10;
	}
	for(i=10;i>=0;i--)
	{
		if(arr[i]!=0)
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}*/
//35.查找子串出现的位置
/*#include<stdio.h>
#include<string.h>
#include<assert.h>
int compare(const char* str,const char* substr)
{
	int i=0,j=0;//i控制str,j控制substr
	int len1=strlen(str),len2=strlen(substr);
	int a=0;//表示适配的位置
    assert(str);
	assert(substr);
    while(len1>=len2 && str[i]!='\0' && substr[j]!='\0')
	{
      if(str[i]==substr[j])
	  {
		   ++i;
		   ++j;
	  } 
	  if(str[i]!=substr[j])
	  {  
		  j=0;
		  ++i;
	  }
	
	}
	a=i-len2;
	return a;
}
int main()
{
	char* str="hello";
	char* substr="ell";
	int ret=compare(str,substr);
	printf("子串出现的位置为：%d\n",ret);
	return 0;
}*/
//36.逆序字符串内容
/*#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="bit_tech";
	char* p=arr;
	char tmp;
	int len=strlen(p);
	char* q=&arr[len-1];
	while(p<q)
	{
		tmp=*p;
		*p=*q;
		*q=tmp;
		++p;
		--q;
	}
	printf("%s\n",arr);
	return 0;
}*/
//37.提取子串
/*#include<stdio.h>
#include<string.h>
#include<assert.h>
int substr(char dst[],char src[],int start,int len)
{
	char *p=NULL,*q=NULL;
	int alen=0;
    assert(src);
	assert(dst);
	q=dst,p=src;
	while(len>0)
	{
		*q=*(p+start);
		q++;
		p++;
		len--;
	}
	alen=strlen(dst);
	return alen;
}
int main()
{
	char src[]="hello";
	char dst[10]={'\0'};
	int start=2,len=3;
	int ret=substr(dst,src,start,len);
	printf("%d\n",ret);
	return 0;
}*/

//38.大写字母转化为小写字母
/*#include<stdio.h>
#include<string.h>
int main()
{
	char arr[10];
	int len=0,i=0;
	scanf("%s",arr);
    len=strlen(arr);
	while(i<len)
	{
		if(arr[i]>='A' && arr[i]<='Z')
		{
			arr[i]=arr[i]+32;	
		}
		else
		{
			arr[i]=arr[i];
		}
		    i++;
	}
    printf("%s\n",arr);
	return 0;
}*/
//39.a-Z.....z-A
/*#include<stdio.h>
int main()
{
	char ch;
	int n = 0;
	scanf("%c",&ch);
	if(ch >= 'a' && ch <= 'z')
	{ 
		n = ch - 97;
		ch -= (n*2+7);
	}
	printf("%c\n",ch);
	return 0;
}*/
//40.模拟实现strcpy函数
/*#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strcpy(char*dst, char*src)
{
	int i;
	int len=strlen(src);
    assert(src);
	assert(dst);
	for(i=0;i<len;i++)
	{
		dst[i]=src[i];
	}
	dst[len]='\0';
	return dst;
}
int main()
{
	char *src="hello";
	char dst[10];
    char* ptr=my_strcpy(dst,src);
	printf("%s\n",ptr);
	return 0;
}
*/
//41.模拟实现strcat函数
/*#include<stdio.h>
#include<assert.h>
char* my_strcat(char*src,const char* dst)
{
	char *p=src;
	assert(src);
	assert(dst);
	while(*p!='\0')
	{
		p++;
	}
	while(*dst!='\0')
	{
		*p=*dst;
		p++;
		dst++;
	}
	*p='\0';
	return src;
}
int main()
{
	char src[20]="hello";
	char* dst="world";
	char*ret=my_strcat(src,dst);
	printf("%s\n",ret);
	return 0;
}*/
//42.模拟实现strcmp函数
/*#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* src,const char* dst)
{
	char* p=src;
	char* q=dst;
	assert(src);
	assert(dst);
	while(*p!='\0'&&*q!='\0')
	{
		if(*p>*q)
		{
			return 1;
		}
		if(*p<*q)
		{
			return -1;
		}
		if(*p==*q)
		{
			p++;
			q++;
		}
	}
	 return 0;
}
int main()
{
	char src[10];
	char dst[10];
	int ret=0;
	scanf("%s %s",src,dst);
	 ret=my_strcmp(src,dst);
	if(ret==-1)
	{
		printf("src<dst\n");
	}
		if(ret==0)
	{
		printf("src==dst\n");
	}
		if(ret==1)
	{
		printf("src>dst\n");
	}
		return 0;
}*/
//43.实现memcpy函数
//不考虑内存重叠的问题，一旦发生重叠，该函数则发生错误
/*#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* dst,const void* src,size_t n)
{
	char* p=(char*)src;
	char* q=(char*)dst;
	assert(p);
	while(n--)
	{
		*q++=*p++;
	}
     return dst; 
}

int main()
{
	char* src="hello";
	char dst[10]={'\0'};
	my_memcpy(dst,src,5);
	printf("%s\n",dst);
	return 0;
}*/
//44.实现memmove函数
/*#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dst,const void * src,size_t n)
{
   	char* p=(char*)src;
	char* q=(char*)dst;
	assert(p);
	//如果源数据区的首地址大于目的数据区的首地址，正向拷贝
	if(p>q)
	{
		while(n--)
		{
			*q++=*p++;
		}
	}
	//如果源数据区的首地址小于目的数据区的首地址，反向拷贝
	if(p<q)
	{
		p+=n-1;//p的指针移动到最后一个字符
		q+=n-1;//q的指针执向目的内存区向后偏移被拷贝内存的个数-1的位置
     	while(n--)
		{
			*q--=*p--;
		}
	}
	return dst;
}		
int main()
{
	char dst[10]={'\0'};
	char* src="hello";	
	my_memmove(dst,src,5);
    printf("%s\n",dst);
	return 0;
}*/
//45.实现memset函数
/*#include<stdio.h>
#include<assert.h>
#include<string.h>
void *my_memset(void *src,int value,size_t n)
{
   char *p = (char *)src;
	assert(src);
	while(n > 0)
	{
		*p = (char)value;
		++p;
		--n;
	}
  	return src;
}
int main()
{
	char src[] = "abcdef";
	my_memset(src,'0',3);
	printf("%s\n",src);
	return 0;
}*/
//46.字符串转化为数字
/*#include<stdio.h>
#include<assert.h>
int transf(char* src)
{
	int data=0,i=1,flag=1,ret=0;
	char* p=src;
	assert(src);
	while(*p!='\0')
	{
		if(*p=='+')
		{
			flag=1;
			p++;
		}
        if(*p=='-')
		{
			flag=-1;
			p++;
		}

		if((*p>='0')&&(*p<='9'))
		{
			ret=*p-'0';
			data=ret+data*10;
			p++;
		}
	}
	return data;
}
int main()
{
	char* src="1234";
	int ret=0;
    //scanf("%s",src);
	ret=transf(src);
	printf("转换后的数字为：%d\n",ret);
	return 0;
}*/
//47.计算汽水瓶子
/*#include <stdio.h>
int main()
{
	int a, count ,sum=0;
	scanf("%d", &a);
	count = a / 1;
	while (count)
	{
		sum += count;
		count /= 2;
		if (count == 1)
		{
			sum += 1;
		}
	}
	printf("%d\n", sum);
	return 0;
}*/
//48.使用可变参数列表求数的平均值
/*#include<stdio.h>
#include<stdarg.h>
double average(int val,...)  
{  
    va_list arg; //arg用于访问未确定参数 
    double sum=0.0;
	int i=0; 
    va_start(arg,val);  
    for(i=0;i<val;i++)  
    {  
        sum+=va_arg(arg,int);  
    }  
    va_end(arg);  
    return sum/val;  
}  
int main()  
{  
    double ret=average(5,1,2,3,4,5);  
    printf("%f\n",ret);  
    return 0;  
}*/
//49翻转字符串"student a am i"???????
/*#include<stdio.h>
#include<assert.h>
char* my_resever(char* str)
{
    char *l, *r;
	char *s,*t; 
	char temp;
	l = r = str;
	while (*r != '\0')
	{
		r++;//右指针后移  
	}
	r--;
	//先将字符串翻转为"i ma a tneduts"
	while (l <= r)
	{
		temp = *l;
		*l = *r;
		*r = temp;
		l++;
		r--;
	}
     r=str;//指针指向开始位置  
      
     s=t=str;
     while(*r!='\0')  
     {  
         if(*r==' ')//通过判断空格来翻转字符串  
         {  
             t--;  
             while(s<=t)  
             {  
                temp=*t;  
                 *t=*s;  
                *s=temp;  
                 s++;  
                 t--;  
             }  
   
             s=r+1;  
             t=r;  
         }          
         r++;  
         t++;  
    }  
	return str;
}
int main()
{
	char* str="student a am i";
	char* ret=my_resever(str);
	printf("%s\n",ret);
	return 0;
}*/
//50.翻转二进制位
/*#include<stdio.h>
unsigned int reverse_bit(unsigned int value)
{
    int i = 0;
	int data = 0,bit = 0;
	while(value>0)
	{
		data= data << 1;	
		bit = value & 1;
		data = data | bit;
	    value = value >> 1;
	}
	return data;
}
int main()
{
	int a,ret=0;
	scanf("%d",&a);
	 ret= reverse_bit(a);
	printf("位翻转后的数为：%d\n",ret);
	return 0;
}*/

    

