package q1;

public class Aviao extends Veiculo {
	private int regAeronautico;
	private boolean voando;

	public Aviao(int regAeronautico) {
		super();
		this.regAeronautico = regAeronautico;
	}
	
	public void decolar() {
		if (!super.isLigado()) {
			System.out.println("Ligue o carro primeiro!");
		} else {
		if(!voando) {
		System.out.println("Aviao decolando...");
			this.voando = true;
		}else {
			System.out.println("Aviao já está voando!");
			}
		}
	}
	
	public void pousar() {
		if (!super.isLigado()) {
			System.out.println("Ligue o carro primeiro!");
		} else {
		if (voando) {
		System.out.println("Aviao pousando...");
		this.voando = false;
		} else {
			System.out.println("Aviao já está pousado!");
		}
		}
	}
	
	
}
