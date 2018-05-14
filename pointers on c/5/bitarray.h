/*
**实现二进制位数组函数原型
*/

/*
** 设置一个特殊位
*/

void		set_bit( char bit_array[], unsigned bit_number);
/*
** 清除一个特殊位
*/
void 		clear_bit(char bit_array[], unsigned bit_number);

/*
**分配一个数值位
*/
void		assign_bit(char bit_array[], unsigned bit_number,int value);

/*
**测试一个特殊位
*/
int 		test_bit( char bit_array[], unsigned bit_number);
