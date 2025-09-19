package q2;

public class Aviao extends Veiculo {
	
	private int regAero;
	

	public Aviao(int regAero) {
		super();
		this.regAero = regAero;
	}

	@Override
	public void ligar() {
		System.out.println("Avião ligando...");
		
	}

	@Override
	public void desligar() {
		System.out.println("Avião desligando...");
		
	}

	@Override
	public void moverFrente() {
		System.out.println("Avião indo pra frente...");
		
	}

	@Override
	public void moverRe() {
		System.out.println("Avião dando ré...");
		
	}

	@Override
	public void parar() {
		System.out.println("Avião parando...");
		
	}
	

}
