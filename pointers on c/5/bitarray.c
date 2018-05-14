/*
**实现一个字符串数组中的位数组
*/
#include <limits.h>
#include "bitarray.h"

/*
**为内部函数原型
*/
unsigned character_offset(unsigned bit_number);
unsigned bit_offset( unsigned bit_number);

/*
**设置一个特殊位
*/
void	set_bit( char bit_array[], unsigned bit_number)
{
	bit_array[character_offset(bit_number)] !=
	1 << bit_offset(bit_number);
}
/*
** 清理一个特殊位
*/
void clear_bit( char bit_array[], unsigned bit_number)
{
	bit_array[ character_offset(bit_number)] &=
	~(1 << bit_offset(bit_number));
}
/*
**给一个位分配值
*/
void assign_bit( char bit_array[], unsigned bit_number,int value )
{
	if(value != 0)
		set_bit(bit_array, bit_number);
	else
		clear_bit( bit_array, bit_number);
/*
**测试一个特殊位
*/
