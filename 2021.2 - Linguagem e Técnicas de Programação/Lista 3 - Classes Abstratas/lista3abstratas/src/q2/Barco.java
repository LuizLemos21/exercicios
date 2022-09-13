package q2;

public class Barco extends Veiculo{
	private int regEmb;

	public Barco(int regEmb) {
		super();
		this.regEmb = regEmb;
	}

	@Override
	public void ligar() {
		System.out.println("Barco ligando...");
		
	}

	@Override
	public void desligar() {
		System.out.println("Barco desligando...");
		
	}

	@Override
	public void moverFrente() {
		System.out.println("Barco indo pra frente...");
		
	}

	@Override
	public void moverRe() {
		System.out.println("Barco dando ré...");
		
	}

	@Override
	public void parar() {
		System.out.println("Barco parando...");
		
	}
	
	

}
