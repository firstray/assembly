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
		s += (stack.back() + '0');
		stack.pop_back();
	}
	return s;
}