package q2;

public class Automovel extends Veiculo{
	
	
	public Automovel(int renavam, String placa) {
		super();
		this.renavam = renavam;
		this.placa = placa;
	}

	private int renavam;
	private String placa;

	@Override
	public void ligar() {
		System.out.println("Carro ligando...");
		
	}

	@Override
	public void desligar() {
		System.out.println("Carro desligando...");
		
	}

	@Override
	public void moverFrente() {
		System.out.println("Carro indo pra frente...");
		
	}

	@Override
	public void moverRe() {
		System.out.println("Carro dando ré...");
		
	}

	@Override
	public void parar() {
		System.out.println("Carro parando...");
		
	}

}
