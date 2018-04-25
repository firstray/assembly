public class HelloWorld8{
	public static void main(String[] args){
		int Y = 0;
		int X = (Y + 4) * 3;
	}
}
0:iconst_0 //常量0压入操作数
1:istore_1 //弹出操作数栈顶元素，保存到局部变量表第一个位置
2:iconst_4 //常量4压入操作数
3:iload_1  //第1个变量压入操作数栈
4:iadd	   //操作数栈中的前两个int相加，并将结果压入操作数栈顶
5:iconst_3 //常数3压入操作数
6:imul 	   //操作数栈中的前两个int数相乘，并将结果压入操作数栈顶
7:istore_2 //弹出操作数栈顶元素，保存到局部变量表第2个位置
8:ireturn  //返回