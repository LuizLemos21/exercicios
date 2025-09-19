package q1;

public class Principal {

	public static void main(String[] args) {
		Aviao a1 = new Aviao(01010111);
		Automovel car = new Automovel(013412,"04AG201G");
		Barco b1 = new Barco(13502);
		
		a1.ligar();
		car.desligar();
		b1.ligar();
		
		a1.pousar();
		car.moverparafrente();
		b1.moverparafrente();
		
		car.ligar();
		a1.decolar();
		b1.ancorar();
		
		car.passarmarcha();
		a1.decolar();
		b1.navegar();
		
		car.moverparafrente();
		car.passarmarcha();
		car.frear();
		car.re();
		
		a1.pousar();
		a1.desligar();
		
		
	}

}
