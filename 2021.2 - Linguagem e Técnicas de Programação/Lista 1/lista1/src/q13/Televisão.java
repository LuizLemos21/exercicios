package q13;

public class Televisão extends Dispositivo {
	

	public Televisão(String nome, boolean ligado, int canal, String source) {
		super(nome, ligado);
		this.canal = canal;
		this.source = source;
	}


	private int canal;
	private String source;
	public int getCanal() {
		return canal;
	}
	public void setCanal(int canal) {
		this.canal = canal;
	}
	public String getSource() {
		return source;
	}
	public void setSource(String source) {
		this.source = source;
	}
	
	
	public void status(){
		if(this.isLigado()) {
			System.out.println(this.getNome() + "| Ligado |" + "Source:" + this.source + "|Canal:" + this.canal);
		} else {
			System.out.println(this.getNome() + "| Desligado |");
		}
	}

}
