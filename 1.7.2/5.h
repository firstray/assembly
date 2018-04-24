string addDigitString (string s1,string s2, int base)
{
	string sumStr;
	int carry = 0;
	
	for(int i = s1.size() - 1; i >= 0; i--){
		int dval = (s1[i] - '0') + (s2[i] - '0') + carry;
		carry = 0;
		if(dval > (base - 1)){
			carry = 1;
			dval = dval % base;
		}
		sumStr.insert(sumStr.begin(),(deval + '0'));
	}
	if(carry == 1)
		sumStr.insert(sumStr.begin(),1 + '0');
	return sumStr;
}
