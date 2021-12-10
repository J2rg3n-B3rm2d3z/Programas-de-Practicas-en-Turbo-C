int Colision(int x,int y,int x2,int y2, int xe1, int ye1, int xe2, int ye2);

int Colision(int x,int y,int x2,int y2, int xe1, int ye1, int xe2, int ye2)
{
	if((x>=xe1 && x<=xe2 && y>=ye1 && y<=ye2)||(x2>=xe1 && x2<=xe2 && y2>=ye1 && y2<=ye2)||(x2-10>=xe1 && x2-10<=xe2 && y2>=ye1 && y2<=ye2)||(x2-10>=xe1 && x2-10<=xe2 && y2-10>=ye1 && y2-10<=ye2))
	{
		return 1;
	}
}
