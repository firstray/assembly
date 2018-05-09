/*
** 如果列标号为奇数个，则将最后一个行号与行尾匹配
*/
rearrange(char *output, char const *input, int const n_columns, int const columns[])
{
	int col;				/*columns数组下标*/
	int output_col;			/*输出列计数器*/
	int len;				/*输入行长度*/
	
	len = strlen(input);
	output_col = 0;
	
	/*
	**处理每队列行号
	*/
	for(col = 0; col < n_columns; col += 2)
	{
		int		nchars;
		
		/*
		**如果输入行结束或输出行数组已满，就结束任务。
		*/
		if( columns[col] >= len || output_col == MAX_INPUT - 1)
			break;
		
		/*
		**计算复制多少字符
		*/
		if( col + 1 < n_columns)
			nchars = columns[col + 1] - columns[col] + 1;
		else
			nchars = len - columns[col + 1];
		
		/*如果输出行数据空间不够，只复制可以容纳的数据*/
		if(output_col + nchars > MAX_INPUT - 1)
			nchars = MAX_INPUT -output_col -1;
		/*复制相关的程序*/
		strncpy(output + output_col, input + columns[col,nchars);
		output_col += nchars;
	}
	output[output_col] = '\0';
}
		