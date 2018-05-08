void
rearrange(char *output, char const *input, int const n_columns, int const columns[])
{
	int col;				/*columns数组的下标*/
	int output_col;			/*输出列计数器*/
	int len;				/*输入行的长度*/
	
	len = strlen(input);
	output_col = 0;
	
	/*
	**处理每对列号
	*/
	for(col = 0; col < n_columns; col += 2)
	{
		int nchars = columns[col + 1 ] - columns[col] + 1；
		/*
		** 如果输入行没那么长，跳过这个范围
		*/
		if(columns[col] >= len)
			continue;
		
		/*
		**如果输出数组已满，任务就完成。
		*/
		
		if(output_col == MAX_INPUT -1)
			break;
		
		/*
		**如果输出数组空间不够，只复制可以容纳的那部分。
		*/
		if(output_col + nchars > MAX_INPUT -1)
			nchars = MAX_INPUT - output_col -1;
		
		/*
		** 观察输入行中有多少个字符在这个范围里面。如果它小于nchars,
		**对nchars的值进行调整。
		*/
		if( columns[col] + nchars -1 >= len)
			nchars = len - columns[col];
		
		/*
		**复制相关的数据。
		*/
		strncpy(output + output_col,input + columns[col],nchars);
		output_col += nchars;
	}
	output[output_col] = '\0';
}
		