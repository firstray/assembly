/*
** 从src中提取指定的字符串
*/
int sub str(char dst[], char src[], int start, int len)
{
	int 	srcindex;
	int 	dstindex;
	
	dstindex = 0;
	if( start >= 0 && len > 0)
	{
		/*
		**将srcindex定位到开始点，如果到了就停止。
		*/
		for(srcindex = 0;
		srcindex < start && src[index] != '\0';
		srcindex += 1)
		;
		
		/*
		**复制希望的字符串，一开始定位到null就停止
		*/
		while( len > 0 && src[srcindex] != '\0')
		{
			dst[dstindex] = src[srcindex];
			dstindex += 1;
			srcindex += 1;
			len -= 1;
		}
	}
	/*
	**添加null以结束。
	*/
	dst[dstindex] = '\0';
	return dstindex;
}