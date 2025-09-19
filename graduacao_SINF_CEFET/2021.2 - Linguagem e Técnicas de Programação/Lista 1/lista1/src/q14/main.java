package q14;
public class main {

	public static void main(String[] args) {
		Automovel carro1 = new Automovel("Ferrari");
		Automovel carro2 = new Automovel("Bugatti");
		Automovel carro3 = new Automovel("Tesla");
		
		carro1.movFrente();
		carro2.movTras();
		carro3.movFrente();
		
		carro1.acelerar();
		carro2.frear();
		carro3.giraEsquerda();
		
		carro1.acelerar();
		carro2.acelerar();
		carro3.movFrente();
		

	}

}
