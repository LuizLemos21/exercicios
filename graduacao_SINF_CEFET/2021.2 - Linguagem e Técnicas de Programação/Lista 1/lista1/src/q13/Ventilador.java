package q13;

public class Ventilador extends Dispositivo {
	
	
	public Ventilador(String nome, boolean ligado, int velocidade) {
		super(nome, ligado);
		if (!ligado) {
			velocidade = 0;
		}
		
		if(velocidade > 3) {
			this.velocidade = 3;
		} else {
			this.velocidade = velocidade;
		}
	}

	private int velocidade;

	public int getVelocidade() {
		return velocidade;
	}

	public void setVelocidade(int velocidade) {
		if(velocidade > 3) {
			this.velocidade = 3;
		} else {
			this.velocidade = velocidade;
		}
	}
	
	public void status(){
		if(this.isLigado()) {
			System.out.println(this.getNome() + "| Ligado |" + "Velocidade: " + this.velocidade);
		} else {
			System.out.println(this.getNome() + "| Desligado |");
		}
	}
	
	
	
}
