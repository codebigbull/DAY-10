 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*void swap()
{
	int m = 5;
	int n = 4;
	printf("����ǰm=%d��n=%d��\n", m, n);
	m = m ^ n;
	n = m ^ n;
	m = m ^ n;
	printf("������m=%d��n=%d��\n", m, n);
}

void calc()
{
	int a = 0;
	int count = 0;
	int i = 0;
	printf("���������֣�\n");
	scanf("%d", &a);
	for (i = 0; i < 32; i++)
	{
		
		if (!(~(a | -2)))
			count++;
		a = a >> 1;
	}
	printf("1�ĸ���Ϊ��%d��", count);
}


void sorb(int arr[2000],int n)
{
	int i = 0; 
	int j = 0;
	int k = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				k = arr[j + 1];
				arr[j+1] = arr[j];
				arr[j] = k;
			}
			
		}
	}
}

void com()
{
	int m = 0;
	int n = 0;
	int i = 0;
	printf("��������������\n");
	scanf("%d %d", &m, &n);
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	int arr3[2000] = { 0 };
	printf("������һ������\n");
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("������һ������\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < m; i++)
	{
		arr3[i] = arr1[i];
	}
	for (i = m; i < m+n; i++)
	{
		arr3[i] = arr2[i-m];
	}
	sorb(&arr3,m+n);
	for (i = 0; i < m + n; i++)
	{
		printf("%d ", arr3[i]);
	}
}

int fac(n)
{
	if (n > 2)
	{
		return fac(n - 1) + fac(n - 2);
	}
	else
	{
		return 1;
	}
	
}

void step()
{
	int m = 1;
	int n = 2;
	int k = 0;
	printf("������̨������\n");
	scanf("%d", &k);
	printf("%d\n", fac(k+1));

}

void flo()
{
	int i = 0;
	int j = 0;
	for (i = 10000; i < 100000; i++)
	{
		int sum = 0;
		for (j = 10; j < 100000; j *= 10)
		{
			sum += (i / j) * (i % j);
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
}*/

void judge2()
{
	int m = 0;
	int n = 0;
	int k = 0;
	printf("��������������\n");
	while (scanf("%d%d%d", &m, &n, &k) != EOF)
	{
		if (n < k)
		{
			int z = n;
			n = k;
			k = z;
		}
		if (m<n + k && m>n - k)
		{
			if ((m == n || m == k || n == k) && (m != n || m != k || n != k))
				printf("Isosceles triangle!\n");
			if (m == n && m == k)
				printf("Equilateral triangle!\n");
		}
		else
			printf("Not a triangle!\n");
	}
}

void judge3()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	printf("��������������\n");
	scanf("%d %d", &m, &n);
	for (i = 0; i < 32; i++)
	{
		if (((m >> i)& 1) != ((n >> i) & 1))
		{
			count++;
		}
			
	}
	printf("%d\n", count);
	
}

void judge4()
{
	int x = 0;
	int y = 0;
	int count = 0;
	printf("������������:");
	scanf("%d %d", &x, &y);

	for (int i = 0; i < 32; i++)
	{
		if (((x >> i) & 1) != ((y >> i) & 1))
		{
			count++;
		}
		
	}
	printf("count:%d", count);
}

int main()
{
	//swap();//��������
	//calc();//ͳ������
	//com();//�������кϲ�
	//step();//̨������
	//flo();//��ֵ��������˻��͵��ڱ���
	//judge2();//�ж�������
	judge3();//�ж϶�����λ��ͬ����
	judge4();//�ж϶�����λ��ͬ����
}