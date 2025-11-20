/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayokota <nayokota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:33:32 by nayokota          #+#    #+#             */
/*   Updated: 2025/11/20 19:34:53 by nayokota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_printf_c()
{
	
}

int	ft_printf(const char *restrictformat, ...)
{
	long i;

	while (restrictformat[i])
	{
		if(restrictformat[i] == "%")
		{
			if (restrictformat[i + 1] == "c")
				ft_printf_c();
			else if (restrictformat[i + 1] == "s")
				ft_printf_s();
			else if (restrictformat[i + 1] == "p")
				ft_printf_p();
			else if (restrictformat[i + 1] == "d")
				ft_printf_d();
			else if (restrictformat[i + 1] == "i")
				ft_printf_i();
			else if (restrictformat[i + 1] == "u")
				ft_printf_u();
			else if (restrictformat[i + 1] == "x")
				ft_printf_lx();
			else if (restrictformat[i + 1] == "X")
				ft_printf_ux();
			else if (restrictformat[i + 1] == "%")
				ft_printf_pr();
		}
		write(1,restrictformat[i],1);
		i++;

	}
}



int ft_printf(const char *, ...);



int main(void)
{

	
}
// %毎に分割

// %の数分配列を進める
// どの処理を割り当てるか判断

	// %c 1文字を出力します。
	// %s 文字列を出力します（共通C規約で定義されています）。
	// %p void * ポインタ引数は16進形式で出力する必要があります。
	// %d 10進数（基数10）を出力します。
	// %i 10進数の整数を出力します。
	// %u 符号なし10進数（基数10）を出力します。
	// %x 16進数（基数16）の小文字形式で数値を出力します。
	// %X 16進数（基数16）の大文字形式で数値を出力します。
	// %% パーセント記号を出力します。

// 割り当てた処理を実行
// 配列にぶち込む

// 出力




aaaaa,aaaaa
aaa%aaaaa

％いかける3




