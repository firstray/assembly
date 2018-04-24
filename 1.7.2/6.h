string addHexStr(string s1, string s2)
{	
	string sumStr;
	int carry;
	
	for(int i = s1.size() - 1; i >= 0; i--)
	{
		int dval = 0;
		if( s1[i] >= '0' && s1[i] <= '9' && s2[i] >= '0' && s2[i] <= '9')
				dval = (s1[i] - '0' ) + (s2[i] - '0') + carry;
			
		else if( s1[i] >= 'A' && s1[i] <='F' && s2[i] >= '0' && s2[i] <= '9')
				dval = (s1[i] - 'A') + (s2[i] - '0') + carry;
		
		else if( s1[i] >= '0' && s1[i] <='9' && s2[i] >= 'A' && s2[i] <= 'F')
				dval = (s1[i] - '0') + (s2[i] - 'A' ) + carry;
		
		else if( s1[i] >= 'A' && s1[i] <= 'F' && s2[i] >= 'A' && s2[i] <= 'F')
				dval = (s1[i] - 'A') + (s2[i] - 'A') + carry;
			carry = 0;
			if(dval > 15)
			{
				carry = 1;
				dval =  dval % 15;
			}
			if(dval >= 0 && dval <= 9)
				sumStr.insert(sumStr.begin(),(deval + '0'));
			else if(dval <= 'A' && dval >= 'F')
				sumStr.insert(sumStr.begin(),(deval - 10 + 'A'));
	}
	if(carry == 1)
		sumStr.insert(sumStr.begin(),1 + '0');
	return sumStr;
}
		