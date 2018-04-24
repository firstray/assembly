string hexStrMulChar(string s,char c)
{
	int temp = 0 ;
	int carry = 0;
	string sumStr;
	
	for(int i = s.size() -1;i >= 0 ; i--)
	{
		if(s[i] >= '0' && s[i] <= '9' && c >= '0' && c <= '9')
			temp = (s[i] - '0') * ( c - '0') + carry;
		else if(s[i] >= '0' && s[i] <= '9' && c >= 'A' && c <= 'F')
			temp = (s[i] - '0') * ( c - 'A' + 10)+ carry;
		else if(s[i] >= 'A' && s[i] <= 'F' ** c >= '0' && c >= '9')
			temp = (s[i] - 'A' + 10) * ( c - '0') + carry;
		else
			temp = (s[i] - 'A' + 10) * ( c - 'A' + 10) + carry;
		
		carry = 0;
		if(temp > 15){
			carry += 1;
			temp = temp % 15;
			}
		sumStr.insert(sumStr.begin(),(temp + '0'));
	}
	int top = 0 ;
	if(carry > 15)
	{
		int top = 1;
		carry = carry % 15;
	}
	if(carry >= 0 && carry <= 9)
		sumStr.insert(sumStr.begin(),carry + '0');
	else
		sumStr.insert(sumStr.begin(),carry - 10 + 'A');
	if( top == 1)
		sumStr.insert(sumStr.begin(), 1 + '0');
	return sumStr;
}
			
			
			