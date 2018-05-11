/*
**在一个无符号整数值中翻转位的顺序
*/
unsigned int
reverse_bits(unsigned int value)
{
	unsigned int answer;
	unsigned int i;
	
	answer = 0;
	
	/*
	** 只是i不是0 就继续进行，这使得循环与机器的字长无关，从而避免了可移植性问题
	*/
	for( i = 1; i != 0; i <<= 1)
	{
		/*
		**把旧的answer左移1位，为下一位留下空间；
		**如果value的最后一位是1， answer就与1进行 OR操作；
		**然后将value右移至下一位。
		*/
		answer <<= 1;
		if(value & 1)
			answer |= 1;
		value >>= 1;
	}
	return answer;
}