int hexStrToInt32(string s)
{
	int num = 0;
	for(int i = 0;;++i)
	{
		if(s[i] >= '0' && s[i] <= '9')
			num = num * 16 + s[i]-'0';
		else if(s[i] >= 'A' && s[i] <= 'F')
			num = num * 16 + (s[i] - 'A' + 10);
		else
			break;
	}
	return num;
}