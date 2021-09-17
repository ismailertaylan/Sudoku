#include <stdio.h>
#include <stdlib.h>

int main()
{
	int  a1 ,a2 ,a3 ,a4 ,a5 ,a6 ,a7 ,a8 ,a9
		,b1 ,b2 ,b3 ,b4 ,b5 ,b6 ,b7 ,b8 ,b9
		,c1 ,c2 ,c3 ,c4 ,c5 ,c6 ,c7 ,c8 ,c9
		,d1 ,d2 ,d3 ,d4 ,d5 ,d6 ,d7 ,d8 ,d9
		,e1 ,e2 ,e3 ,e4 ,e5 ,e6 ,e7 ,e8 ,e9
		,f1 ,f2 ,f3 ,f4 ,f5 ,f6 ,f7 ,f8 ,f9
		,g1 ,g2 ,g3 ,g4 ,g5 ,g6 ,g7 ,g8 ,g9
		,h1 ,h2 ,h3 ,h4 ,h5 ,h6 ,h7 ,h8 ,h9
		,i1 ,i2 ,i3 ,i4 ,i5 ,i6 ,i7 ,i8 ,i9;
		a1 = 5; b1 = 2; b2 = 7; b3 = 4; c2 = 8;
		a5 = 1; c4 = 9; c6 = 4; b7 = 6; a9 = 4;
		d1 = 8; d2 = 1; d4 = 4; d5 = 6; d7 = 3;
		d9 = 2; e3 = 2; e5 = 3; e7 = 1; f1 = 7;
		f3 = 6; f5 = 9; f6 = 1; f8 = 5; f9 = 8;
		g4 = 5; g6 = 3; g8 = 1; h3 = 5; h7 = 9;
		h8 = 2; h9 = 7; i1 = 1; i5 = 2; i9 = 3;
	/*printf("1.satir 1.sutunu giriniz\n");
		scanf_s("%d", &a);
	printf("1.satir 3.sutunu giriniz\n");
		scanf_s("%d", &c);
	printf("2.satir 2.sutunu giriniz\n");
		scanf_s("%d", &e);
	printf("3.satir 1.sutunu giriniz\n");
		scanf_s("%d", &g);
	printf("3.satir 3.sutunu giriniz\n");
		scanf_s("%d", &i);*/
		printf("Sudoku cozuluyor lutfen bekleyiniz");
		a2 = rand() % 10; a3 = rand() % 10; a4 = rand() % 10;
		c1 = rand() % 10; a6 = rand() % 10; a7 = rand() % 10;
		a8 = rand() % 10; a9 = rand() % 10; b4 = rand() % 10;
		b5 = rand() % 10; b6 = rand() % 10; b7 = rand() % 10;
		b8 = rand() % 10; b9 = rand() % 10; c3 = rand() % 10;
		c5 = rand() % 10; c7 = rand() % 10; c8 = rand() % 10;
		c9 = rand() % 10; d3 = rand() % 10; d6 = rand() % 10;
		d8 = rand() % 10; e1 = rand() % 10; e2 = rand() % 10;
		e4 = rand() % 10; e6 = rand() % 10; e8 = rand() % 10;
		e9 = rand() % 10; f2 = rand() % 10; f4 = rand() % 10;
		f7 = rand() % 10; g1 = rand() % 10; g2 = rand() % 10;
		g3 = rand() % 10; g5 = rand() % 10; g7 = rand() % 10;
		g9 = rand() % 10; h1 = rand() % 10; h2 = rand() % 10;
		h4 = rand() % 10; h5 = rand() % 10; h6 = rand() % 10;
		i2 = rand() % 10; i3 = rand() % 10; i4 = rand() % 10;
		i6 = rand() % 10; i7 = rand() % 10; i8 = rand() % 10;

		while (a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 != 9 ||
			b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8 + b9 != 9 ||
			c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8 + c9 != 9 ||
			d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8 + d9 != 9 ||
			e1 + e2 + e3 + e4 + e5 + e6 + e7 + e8 + e9 != 9 ||
			f1 + f2 + f3 + f4 + f5 + f6 + f7 + f8 + f9 != 9 ||
			g1 + g2 + g3 + g4 + g5 + g6 + g7 + g8 + g9 != 9 ||
			h1 + h2 + h3 + h4 + h5 + h6 + h7 + h8 + h9 != 9 ||
			i1 + i2 + i3 + i4 + i5 + i6 + i7 + i8 + i9 != 9 ||
			a1 + b1 + c1 + d1 + e1 + f1 + g1 + h1 + i1 != 9 ||
			a2 + b2 + c2 + d2 + e2 + f2 + g2 + h2 + i2 != 9 ||
			a3 + b3 + c3 + d3 + e3 + f3 + g3 + h3 + i3 != 9 ||
			a4 + b4 + c4 + d4 + e4 + f4 + g4 + h4 + i4 != 9 ||
			a5 + b5 + c5 + d5 + e5 + f5 + g5 + h5 + i5 != 9 ||
			a6 + b6 + c6 + d6 + e6 + f6 + g6 + h6 + i6 != 9 ||
			a7 + b7 + c7 + d7 + e7 + f7 + g7 + h7 + i7 != 9 ||
			a8 + b8 + c8 + d8 + e8 + f8 + g8 + h8 + i8 != 9 ||
			a9 + b9 + c9 + d9 + e9 + f9 + g9 + h9 + i9 != 9 ||
			a1 + b2 + c3 + d4 + e5 + f6 + g7 + h8 + i9 != 9 ||
			i1 + h2 + g3 + f4 + e5 + d6 + c7 + b8 + a9 != 9
			)
		{
			a2 = rand() % 10; a3 = rand() % 10; a4 = rand() % 10;
			c1 = rand() % 10; a6 = rand() % 10; a7 = rand() % 10;
			a8 = rand() % 10; a9 = rand() % 10; b4 = rand() % 10;
			b5 = rand() % 10; b6 = rand() % 10; b7 = rand() % 10;
			b8 = rand() % 10; b9 = rand() % 10; c3 = rand() % 10;
			c5 = rand() % 10; c7 = rand() % 10; c8 = rand() % 10;
			c9 = rand() % 10; d3 = rand() % 10; d6 = rand() % 10;
			d8 = rand() % 10; e1 = rand() % 10; e2 = rand() % 10;
			e4 = rand() % 10; e6 = rand() % 10; e8 = rand() % 10;
			e9 = rand() % 10; f2 = rand() % 10; f4 = rand() % 10;
			f7 = rand() % 10; g1 = rand() % 10; g2 = rand() % 10;
			g3 = rand() % 10; g5 = rand() % 10; g7 = rand() % 10;
			g9 = rand() % 10; h1 = rand() % 10; h2 = rand() % 10;
			h4 = rand() % 10; h5 = rand() % 10; h6 = rand() % 10;
			i2 = rand() % 10; i3 = rand() % 10; i4 = rand() % 10;
			i6 = rand() % 10; i7 = rand() % 10; i8 = rand() % 10;
			printf("Deneme basarisiz,tekrar deneniyor!\n");
			printf("\n%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\n%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\n%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\n", a1, a2, a3, a4, a5, a6, a7, a8, a9
				, b1, b2, b3, b4, b5, b6, b7, b8, b9
				, c1, c2, c3, c4, c5, c6, c7, c8, c9
				, d1, d2, d3, d4, d5, d6, d7, d8, d9
				, e1, e2, e3, e4, e5, e6, e7, e8, e9
				, f1, f2, f3, f4, f5, f6, f7, f8, f9
				, g1, g2, g3, g4, g5, g6, g7, g8, g9
				, h1, h2, h3, h4, h5, h6, h7, h8, h9
				, i1, i2, i3, i4, i5, i6, i7, i8, i9);
		}
		printf("Aha da tutturduk!\n");
		printf("\n%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\n%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\n%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\\%d%d%d\n", a1, a2, a3, a4, a5, a6, a7, a8, a9
			, b1, b2, b3, b4, b5, b6, b7, b8, b9
			, c1, c2, c3, c4, c5, c6, c7, c8, c9
			, d1, d2, d3, d4, d5, d6, d7, d8, d9
			, e1, e2, e3, e4, e5, e6, e7, e8, e9
			, f1, f2, f3, f4, f5, f6, f7, f8, f9
			, g1, g2, g3, g4, g5, g6, g7, g8, g9
			, h1, h2, h3, h4, h5, h6, h7, h8, h9
			, i1, i2, i3, i4, i5, i6, i7, i8, i9);
		getchar();
		getchar();
}
