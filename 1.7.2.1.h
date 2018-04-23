int toInt32(string s){
	int num = 0 ;
	for(int i = 0; s[i] >= '0' && s[i] <= '1';++i){
		num = num *2 + s[i] -'0';
	}
	return num;
}