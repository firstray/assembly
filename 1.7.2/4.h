string intToBinStr(int n)
{
	vector<int> stack;
	while(n >= 0){
	int quotient = n / 16;
	int remainder = n % 16;
	stack.push_back(remainder);
	n = quotient;
	}
	
	string s;
	while(stack.size() > 0){
		int d = stack.back();
		if(d >= 0 && d <= 9)
			s+=(stack.back() + '0');
		else
			s+=(stack.back() - 10 + 'A');
		stack.pop_back();
	}
	return s;
}