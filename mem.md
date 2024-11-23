### 対応

- [x]c
- [x] s
- [x] i d
- [x] p putp
- [] u
- [] x
- [] X
- [] %

### 16進数　マイナス

https://chatgpt.com/c/673e0284-daf0-8004-952c-0799d0ba31d4

## 数字

- 16進数
　- hexadecimal
- 10進数
  - decimal
	- d or i

- 進数
  - https://www.infraexpert.com/study/ip2.html
	- 10進数は 0~9の10種類で桁がが上がる
	- 16進数は、16個の数字が必要
	  - 0 ~9(10)個しかないので A ~ F(6)も利用する
		- 先頭に 「0x」をつける
	- 変換方法
	  - 10進数から2進数　=> 2進数から16進数に変える
- 基数
  - 数値を表現する際に位取りの基準となる数
	- 10進数なら 10
	- 2進数なら2
- 基礎理論
  - https://www.seplus.jp/dokushuzemi/ec/fe/fenavi/kind_basic_theory/decimal-and-binary-numbers/
  - 10進数を、2進数にする方法
	  - 1
		  - 123を2でわっていく、あまりを並べる
		- 123を10で割る
		  - 123/ 10
			- 12 / 10
			- 10 / 1 
    - 数字は「桁と重み」を集計してる
		- 10進数(1から始まり、10倍ごとに桁が上がる)
		  - 桁 (10を掛けていく)
			  - 1桁から始まり 2 ,3,4,5
				- 100 10 1
			- 重み
			  - 123
				  - 100 * 1
					- 10 * 2
					- 1 * 3
		- 2進数の場合(1から始まり、2倍ごとに桁が上がる)
```
桁：      8    4    2    1
値：      1    0    1    0
重み：  2^3  2^2  2^1  2^0
```

```
桁：      1000    100    10    1
値：      1       0      2    2
重み：  10^3  10^2  10^1  10^0
```

1    0    1    0

		- 123
		  - 100 * 1
			- 10 * 2
			- 1 * 3


### 共通の説明

- cでかいて

- makefile
	- $Name
	- all
	- clean
	- fclean
	- re
- libft利用してよいよ

### 記事

https://www.mm2d.net/main/prog/c/printf_format-01.html


### 要件

- メモリ管理を自分でしないでよい
- cspdiuxX%の変数を扱う
- arコマンドでライブラリつくって
- 

###　テストツール


https://github.com/Tripouille/printfTester


### ミニマムで実装する

- プロトタイプを実装
- 一つの変数を対応して表示する
	- 文字列 %sに対応する
- makefile実装
- テスtツール



category: c
1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 

category: s
1.KO 2.KO 3.KO 4.KO 5.OK 6.KO 7.KO 8.KO 9.KO 10.KO 

category: p
1.KO 2.KO 3.KO 4.KO 5.KO 6.KO 7.KO 8.KO 9.KO 

category: d
1.OK 2.KO 3.OK 4.OK 5.KO 6.KO 7.KO 8.KO 9.KO 10.KO 11.KO 12.KO 13.KO 14.KO 15.KO 16.KO 17.KO 18.KO 19.KO 20.KO 21.KO 22.KO 23.KO 24.KO 25.OK 26.KO 27.KO 28.KO 29.KO 
category: i
1.OK 2.KO 3.OK 4.OK 5.KO 6.KO 7.KO 8.KO 9.KO 10.KO 11.KO 12.KO 13.KO 14.KO 15.KO 16.KO 17.KO 18.KO 19.KO 20.KO 21.KO 22.KO 23.KO 24.KO 25.OK 26.KO 27.KO 28.KO 29.KO 
category: u
1.KO 2.KO 3.KO 4.KO 5.KO 6.KO 7.KO 8.KO 9.KO 10.KO 11.KO 12.KO 13.KO 14.KO 15.KO 16.KO 17.KO 18.KO 19.KO 20.KO 21.KO 22.KO 23.KO 24.KO 25.KO 26.KO 27.KO 28.KO 29.KO 
category: x
1.KO 2.KO 3.KO 4.KO 5.KO 6.KO 7.KO 8.KO 9.KO 10.KO 11.KO 12.KO 13.KO 14.KO 15.KO 16.KO 17.KO 18.KO 19.KO 20.KO 21.KO 22.KO 23.KO 24.KO 25.KO 26.KO 27.KO 28.KO 29.KO 30.KO 31.KO 
category: X
1.KO 2.KO 3.KO 4.KO 5.KO 6.KO 7.KO 8.KO 9.KO 10.KO 11.KO 12.KO 13.KO 14.KO 15.KO 16.KO 17.KO 18.KO 19.KO 20.KO 21.KO 22.KO 23.KO 24.KO 25.KO 26.KO 27.KO 28.KO 29.KO 30.KO 31.KO 
category: %
1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 