string unsBinAdd(unsigned a ,unsigned b)
{
		vector<int> stack;
		int n = a - b;
		
		while(n >= 0)
		{
			int quotient = n / 2;
			int remainder = n % 2;
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
