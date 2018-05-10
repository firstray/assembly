/*
**从src中的字符串向dst数组准确地复制N个字符（如果需要，用NUL进行填充）。
*/
void copy_n(char dst[], char src[], int n)
{
	int dst_index, src_index;
	src_index = 0;
	for(dst_index = 0; dst_index < n; dst_index += 1)
	{
		dst[dst_index] = src[src_index];
		if(src[src_index] != 0)
			src_index += 1;
	}
}