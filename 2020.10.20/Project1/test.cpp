//#include<iostream>//100-200֮�������
//using namespace std;
//int main()
//{
//	int i, j;
//	for (i = 100; i < 200; i++) {
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0) {
//
//				break;
//			}
//		}
//
//			if (j >= i) {
//				cout << i << endl;
//
//			}
//		}
//		system("pause");
//		
//	}
//#include<iostream>//����˷��ھ���
//using namespace std;
//int main()
//{
//	int i,j;
//	cout << "�˷��ھ���" << endl;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//
//			cout << j << "*" << i << "=" << j * i << "\t";
//		    cout << endl;
//	}
//	
//	return 0;
//}
//#include<iostream>//�ж�1000��---2000��֮�������
//using namespace std;
//int main()
//{
//	int i;
//	int n = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) 
//		{
//			cout << i << endl;
//			n++;
//		}
//		
//		
//
//	}
//	cout << "������" << n << "��" << endl;
//	
//}

//#include<iostream>
//using namespace std;
//int main()
//	{
//	int x = 5;
//	int y = 6;
//	int swap=0;
//	swap = y;
//	y = x;
//	x = swap;
//	
//	
//	
//	
//	cout << "x��ֵ��" << x << endl;
//	cout << "y��ֵ��" << y << endl;
//return 0;
//
//
//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x = 5;
//	int y = 7;//����x��y
//	x = x + y;//x�Ǻ�
//	y = x - y;//��x��ֵ��y
//	x = x - y;
//	cout << "x��ֵ��" << x << endl;
//	cout << "y��ֵ��" << y << endl;
//
//}
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int MAX = 0;
//	int arr[] = { 1,2,3,4,5,15,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		
//		if (arr[i] > MAX)
//			MAX = arr[i];
//
//	}
//	cout << MAX << endl;
//}
//#include<iostream>//�����������Ӵ�С���
//using namespace std;
//int main()
//{
//	int x, y, z;
//	cout << "������������ " << endl;
//	cin >> x >> y >> z;
//	if (x < y) {
//		x = x + y;
//		y = x - y;
//		x = x - y;
//	}
//	if (x < z) {
//
//		x = x + z;
//		z = x - z;
//		x = x - z;
//	}
//	if (y < z)
//	{
//		y = y + z;
//		z = y - z;
//		y = y - z;
//
//
//	}
//
//	cout << x << " " << y << " " << z << " " << endl;
//
//
//}
//
//
//#include<iostream>//�������������Լ��
//using namespace std;//շת�����
//int main()
//{
//	int x, y,z;
//	cout << "������������" << endl;
//	cin >> x >> y;
//	if (x < y)//ʹxΪ��yΪС
//	{
//		x = x + y;
//		y = x - y;
//		x = x - y;
//
//	}
//	while (x%y!= 0)//����ȡ��,����ȡ�����õ�ֵ������С����
//	{
//		z = x % y;
//		x = y;
//		y = z;
//
//	}
//	cout << y << endl;
//
//	return 0;
//
//
//}
//


//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//#include<iostream>
//using namespace std;
//void swap(int* x, int* y)//������������Ԫ�� 
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int a[] = { 1,2,3,6,0 };
//int b[] = { 2,5,8,9,4 };
//
//int main()
//{
//	int a[] = { 1,2,3,6,0};
//	int b[] = { 2,5,8,9,4};
//	{
//		int sz = sizeof(a) / sizeof(a[0]);
//		for (int i = 0; i <= sz; i++)
//		{
//			swap(&a[i], &b[i]);
//		}
//		cout << "������a��ֵ;" << endl;
//		for (int i = 0; i < 5; i++)
//		{
//			cout << a[i] << " ";
//
//		}
//		cout << endl;
//		cout << "������b��ֵ:" << endl;
//		for (int i = 0; i < 5; i++)
//		{
//			cout << b[i] << " ";
//
//		}
//		cout << endl; 
//	}
//}
//
//
//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int i = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		 sum += (pow(-1.0, i+1)*1 / i);
//	}
//	cout << sum << endl;
//}
//
//
////��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9
//#include<iostream>
//using namespace std;
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//ȡ��Ϊ9���õ���9��β��
//			sum++;
//		if (i / 10 == 9)//��10Ϊ9���õ���9��ͷ��
//			sum++;
//
//	}
//	cout << sum << endl;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	for (int i = 1; i <= 7; i++)//���ǰ����
//	{
//		for (int j = 1; j <= 2 * (i-1) + 1; j++)
//		{
//			cout << "*" ;
//
//		}
//		cout << endl;
//	}
//	for (int i = 6; i >= 0; i--)//���������
//	{
//		for(int j=1;j<=2*(i-1)+1;j++)
//		{
//			cout << "*" ;
//
//		}
//		cout << endl;
//
//	}
//}
//
//
//���0��999֮������С�ˮ�ɻ����������
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	for (int i = 100; i <= 999; i++)
//	{
//		a = i / 100;
//		b = i / 10 % 10;
//		c = i % 10;
//		
//			if (i == a * a * a + b * b * b + c * c * c)
//			{
//				cout << i << endl;
//			}
//
//		}
//	}
//
//
//
////��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
////���磺2 + 22 + 222 + 2222 + 22222
//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i;
//	int sn = 0;
//	cout << "������i��ֵ" << endl;
//	cin >> i;
//
//	int  j;
//	int tmp = 0;
//	for (j = 1; j <= 5; j++)
//	{
//		tmp = tmp * 10 + i;
//		sn += tmp;
//	}
//	cout << sn << endl;
//}
	
	

