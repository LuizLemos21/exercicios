package q10;

public class Automovel {
	private String modelo;
	private int ano;
	private int portas;
	private int rodas;
	private String cor;
	private int assentos;
	public String getModelo() {
		return modelo;
	}
	public void setModelo(String modelo) {
		this.modelo = modelo;
	}
	public int getAno() {
		return ano;
	}
	public void setAno(int ano) {
		this.ano = ano;
	}
	public int getPortas() {
		return portas;
	}
	public void setPortas(int portas) {
		this.portas = portas;
	}
	public int getRodas() {
		return rodas;
	}
	public void setRodas(int rodas) {
		this.rodas = rodas;
	}
	public String getCor() {
		return cor;
	}
	public void setCor(String cor) {
		this.cor = cor;
	}
	public int getAssentos() {
		return assentos;
	}
	public void setAssentos(int assentos) {
		this.assentos = assentos;
	}
	
	public float distanciaPercorrida(float vm, float time){
		return (vm*time);
	}
	
	private float KmTotal=0;
	
	public float getKmTotal() {
		return KmTotal;
	}

	public void correr(int km) {
		this.KmTotal+= km;
	}
	
	
}
