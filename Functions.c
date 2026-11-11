int check_point(double x, double y)
{
	int check = 0;
	if (((y < 3.) && (y >= 2.)) && ((x >= -2.) && (x < 5.))) {
		check = 1;
	}
	else if (((x >= -2.) && (x < 3.)) && ((y < 5.) && (y >= 2.)))
	{
		check = 1;
	}
	if (check == 1)
	{
		return check; //check = 1
	}
	else;
	{
		return check; // check = 0
	}
}

int draw_grafik(double x_p, double y_p, char background, char function_form) {
	double y, x;
	for (y = 32.;y >= 0.;y--) {
		for (x = 0.;x <= 32.;x++)
		{
			if (x == (x_p + 16.0) && y == (y_p+16.0)) {
				printf("%2.c",'X');
				continue;
			}
			if (x==16 && y == 16) {
				printf("%2.c",'0');
			}
			else if (check_point(x - 16, y - 16) == 1) printf("%2.c",function_form);
			else printf("%2.c",background);
		}
		printf("\n");
	}
}