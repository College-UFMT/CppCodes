#include <iostream>
#include<string>
#include <vector>
#include<math.h>

using namespace std;
using std::string;

class ObjetoGeometrico
{
    private:
        float x,y;

    public:
        ObjetoGeometrico(float x, float y): x(x), y(y) {};

		float getX(){ return x; }
		float getY(){ return y; }
		
		void setX(){ this->x = x; }
		void setY(){ this->y = y; }

        virtual void mostraObjeto()
		{
			cout << "x = " << this->x << endl;
			cout << "y = " << this->y << endl;
		}
		
		virtual float area(){ return 1.0; };
		
		virtual float perimetro(){ return 1.0; };
};

class Circulo : public ObjetoGeometrico
{
	private:
		float cirX, cirY;
		
	public:
		
		Circulo(float x, float y, float cirX, float cirY) : ObjetoGeometrico(x, y), cirX(cirX), cirY(cirY) {}
		
		float getCX(){ return cirX; }
		float getCY(){ return cirY; }
		
		void setCX(){ this->cirX = cirX; }
		void setCY(){ this->cirY = cirY; }
		
		void mostraObjeto() override
		{
			cout << "\nCirculo";
			cout << "\nx: " << this->getX();
			cout << "\ny: " << this->getY();
			cout << "\nCentro x: " << this->cirX;
			cout << "\nCentro y: " << this->cirY << endl;
		}
		
		float area() override
		{
			float r = getX() - this->cirX;
			float pi = 3.14;
					
			return pi * (pow( r, 2));
		}
		
		float perimetro() override
		{
			float r = getX() - this->cirX;
			float pi =3.14;
			
			return 2*pi*r;
		}
};

class Retangulo : public ObjetoGeometrico
{
	private:
		float b, h;
		
	public:
		Retangulo(float x, float y, float b, float h) : ObjetoGeometrico(x, y), b(b), h(h) {}
		
		float getB(){ return b; }
		float getH(){ return h; }
		
		void setB(){ this->b = b; }
		void setH(){ this->h = h; }
		
		void mostraObjeto() override
		{
			cout << "\nRetangulo";
			cout << "\nx: " << this->getX();
			cout << "\ny: " << this->getY();
			cout << "\nBase: " << this->b;
			cout << "\nAltura: " << this->h << endl;
		}
		
		float area() override 
		{ 
			return this->b * this->h; 
		}
		
		float perimetro() override { return 2 * this->b + 2 * this->h; }
		
};

class Triangulo : public ObjetoGeometrico
{
	private:
		float L1, L2, L3;
	
	public:
		Triangulo(float x, float y, float L1, float L2, float L3): ObjetoGeometrico(x, y), L1(L1), L2(L2), L3(L3) {}
		
		float getL1(){ return L1; }
		float getL2(){ return L2; }
		float getL3(){ return L3; }	
		 
		void setL1(){ this->L1 = L1; }
		void setL2(){ this->L2 = L2; }
		void setL3(){ this->L3 = L3; }
		 
		void mostraObjeto() override
		{
			cout << "\nTriangulo";
			cout << "\nx = " << this->getX();
			cout << "\ny = " << this->getY();
			cout << "\nLado 1 = " << this->L1;
			cout << "\nLado 2 = " << this->L2;
			cout << "\nLado 3 = " << this->L3 << endl;
		}	
		
		float area() override 
		{
			float s = this->L1 + this->L2 + this->L3;
						
			return sqrt(s*((s-L1)*(s-L2)*(s-L3)));
		}
		
		float perimetro() override { return L1+L2+L3; }
		
}; 

int main()
{
	Circulo cir1(10.0, 10.0, 8.0, 9.0);
	Retangulo ret1(10.0, 10.0, 11.0, 24.0);
	Triangulo tri1(3.0, 3.0, 5.0, 6.0, 7.0);
	
	vector<ObjetoGeometrico*> obj;
	
	obj.push_back(&cir1);
	obj.push_back(&ret1);
	obj.push_back(&tri1);
	
	for(auto o : obj)
	{
        o->mostraObjeto();
		cout << "Area = " << o->area();
		cout << "\nPerimetro = " << o->perimetro() << endl;
	}

    return 0;
}

