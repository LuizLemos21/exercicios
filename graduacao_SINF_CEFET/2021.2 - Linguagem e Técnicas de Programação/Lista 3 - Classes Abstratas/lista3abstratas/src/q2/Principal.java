package q2;

public class Principal {
	
	public static void main(String[] args) {
		Aviao a = new Aviao(102312);
		Barco b = new Barco(135932);
		Automovel c = new Automovel(313513,"Q3AT20");
		
		a.ligar();
		b.ligar();
		c.ligar();
		
		a.moverFrente();
		b.moverFrente();
		c.moverFrente();
		
		a.moverRe();
		b.moverRe();
		c.moverRe();
		
		a.parar();
		b.parar();
		c.parar();
		
		a.desligar();
		b.desligar();
		c.desligar();
		
	}
	
}
