//#include<iostream>//100-200之间的素数
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
//#include<iostream>//输出乘法口诀表
//using namespace std;
//int main()
//{
//	int i,j;
//	cout << "乘法口诀表" << endl;
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
//#include<iostream>//判断1000年---2000年之间的闰年
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
//	cout << "闰年有" << n << "年" << endl;
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
//	cout << "x的值是" << x << endl;
//	cout << "y的值是" << y << endl;
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
//	int y = 7;//交换x和y
//	x = x + y;//x是和
//	y = x - y;//把x的值给y
//	x = x - y;
//	cout << "x的值是" << x << endl;
//	cout << "y的值是" << y << endl;
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
//#include<iostream>//将三个数按从大到小输出
//using namespace std;
//int main()
//{
//	int x, y, z;
//	cout << "请输入三个数 " << endl;
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
//#include<iostream>//求两个数的最大公约数
//using namespace std;//辗转相除法
//int main()
//{
//	int x, y,z;
//	cout << "请输入两个数" << endl;
//	cin >> x >> y;
//	if (x < y)//使x为大，y为小
//	{
//		x = x + y;
//		y = x - y;
//		x = x - y;
//
//	}
//	while (x%y!= 0)//反复取余,并把取余所得的值赋给较小的数
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


//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include<iostream>
//using namespace std;
//void swap(int* x, int* y)//单独交换两个元素 
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
//		cout << "交换后a的值;" << endl;
//		for (int i = 0; i < 5; i++)
//		{
//			cout << a[i] << " ";
//
//		}
//		cout << endl;
//		cout << "交换后b的值:" << endl;
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
//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值
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
////编写程序数一下 1到 100 的所有整数中出现多少次数字9
//#include<iostream>
//using namespace std;
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//取余为9，得到以9结尾的
//			sum++;
//		if (i / 10 == 9)//除10为9，得到以9开头的
//			sum++;
//
//	}
//	cout << sum << endl;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	for (int i = 1; i <= 7; i++)//输出前七行
//	{
//		for (int j = 1; j <= 2 * (i-1) + 1; j++)
//		{
//			cout << "*" ;
//
//		}
//		cout << endl;
//	}
//	for (int i = 6; i >= 0; i--)//输出后六行
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
//求出0～999之间的所有“水仙花数”并输出
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
////求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
////例如：2 + 22 + 222 + 2222 + 22222
//
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i;
//	int sn = 0;
//	cout << "请输入i的值" << endl;
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
	
	

