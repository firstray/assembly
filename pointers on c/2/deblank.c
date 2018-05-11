/*
**删除多余的空格
*/
#define NUL 	'\0'

void deblank( char string[])
{
	char	*dest;
	char	*src;
	int 	ch;
	
	/*
	**将原和目的指向字符串的开始，接下来移动到第二个字符去。
	*/
	src = string;
	dest = string++;
	
	/*
	**检查每个源字符串的字符。
	*/
	while((ch = *src++ ) != NUL){
		if(is_white(ch))
		{
			/*
			**我们发现一个空格，如果我们是在字符串的开始或者
			**在目的字符串的前一个字符不是空格存储一个空白字符
			*/
			if(src == string || !is_white(dest[-1]))
				*dest++ = ' ';
		}
		else{
			/*
			**不是一个空白字符，存储它
			*/
			*dest++ = ch;
		}
	}
	*dest = NUL;
}
int is_white(int ch)
{
	return ch == ' ' || ch == '\t' || ch == '\v' || ch == '\f' || '\n'
	|| ch == '\r';
}