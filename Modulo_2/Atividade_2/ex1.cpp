#include <iostream>
#include<string>

using namespace std;
using std::string;

class VeiculoAVenda
{
private:
    	string marca, modelo;
		int ano;
		float precoDeVenda;	
public:
    VeiculoAVenda(string marca, string modelo, int ano, float precoDeVenda): marca(marca), modelo(modelo), ano(ano), precoDeVenda(precoDeVenda){};
    
    string getModelo(){ return modelo; }
    string getMarca(){ return marca; }
    int getAno(){ return ano; }
    float getPrecoDeVenda(){ return precoDeVenda; }
    
    void setMarca(string marca) { this->marca = marca; }
    void setModelo(string modelo) { this->modelo = modelo; }
    void setAno(int ano) { this->ano = ano; }
    void setPrecoDeVenda(float precoDeVenda) { this->precoDeVenda = precoDeVenda; }
    
    virtual void mostraDados()
    {
        cout << "\nMarca: " << this->marca;
        cout << "\nModelo: " << this->modelo;
        cout << "\nAno: " << this->ano;
        cout << "\nPreco de venda: " << this->precoDeVenda << endl;
    }

};

class AutomovelAVenda : public VeiculoAVenda
{
	private:
		float motor;
		bool cambio;
		int numPortas;
		
	public:
		AutomovelAVenda(string marca, string modelo, int ano, float precoDeVenda, float motor, bool tpCambio, int nPortas): VeiculoAVenda(marca, modelo, ano, precoDeVenda),
			motor(motor), cambio(cambio), numPortas(numPortas){}
		
		float getMotor(){ return motor; }
		bool getTpCambio() 
		{	 
			if(cambio == 1)
				return true;
			else
				return false;
		}
		int getNPortas() { return numPortas; }
		
		void setMotor(float motor){ this->motor = motor; }
		void setTpCambio(bool cambio){ this->cambio = cambio; }
		void setNPortas(float numPortas){ this->numPortas = numPortas; }
		
		void mostraDados() override
		{
			cout << "\nMarca: " << this->getMarca();
			cout << "\nModelo: " << this->getModelo();
			cout << "\nAno: " << this->getAno();
			cout << "\nPreco de Venda: R$ " << this->getPrecoDeVenda();
			cout << "\nMotor: " << this->motor;
			cout << "\ntpCambio: " << this->cambio;
			cout << "\nNumero de portas: " << this->numPortas << endl;
		}
};
		
class MotocicletaAVenda : public VeiculoAVenda
{
	private:
		int cilindrada;
	public:
		MotocicletaAVenda(string marca, string modelo, int ano, float precoDeVenda,int cilindrada) :VeiculoAVenda(marca, modelo, ano, precoDeVenda), cilindrada(cilindrada){}
		
		int getCilindrada(){ return cilindrada; }
		
		void setCilindrada(){ this->cilindrada = cilindrada; }
		
		void mostraDados() override 
		{ 
			cout << "\nMarca: " << this->getMarca();
			cout << "\nModelo: " << this->getModelo();
			cout << "\nAno: " << this->getAno();
			cout << "\nPreco de Venda: R$ " << this->getPrecoDeVenda();
			cout << "\nCilindrada: " << this->cilindrada << endl;
		}
};

int main()
{
    cout << "Carros: \n"; 
	AutomovelAVenda auto1("Chevrolet", "Agile", 2012, 15700.00, 1.0, 0, 2);
	AutomovelAVenda auto2("Kia", "Sportage", 2010, 50950.56, 2.0, 1, 4);
	auto1.mostraDados();
	auto2.mostraDados();
	
    cout << "\nMotos: \n"; 
	MotocicletaAVenda moto1("Mxf", "Cross 125cc Pro", 2018, 10500.99, 125);
	MotocicletaAVenda moto2("Honda", "Xre300", 2010, 2700.00, 300);
	moto1.mostraDados();
	moto2.mostraDados();
	
	float total = auto1.getPrecoDeVenda() + auto2.getPrecoDeVenda() + moto1.getPrecoDeVenda() + moto2.getPrecoDeVenda();
	
	cout << "\nTotal do preco de venda: R$" << total << endl;	
	
}	