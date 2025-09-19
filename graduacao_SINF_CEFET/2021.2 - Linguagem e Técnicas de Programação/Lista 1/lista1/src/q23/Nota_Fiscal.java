package q23;
import java.util.Date;
public class Nota_Fiscal {
	private int numero;
	private int dataCompra;
	private float valorCompra;
	private String nomeComprador;
	private String enderecoComprador;
	private int telefoneComprador;
	private boolean informe;
	private int CPF;
	
	
	
	
	public Nota_Fiscal(int numero, int dataCompra, float valorCompra, String nomeComprador, int telefoneComprador,
			int cPF) {
		super();
		this.numero = numero;
		this.dataCompra = dataCompra;
		this.valorCompra = valorCompra;
		this.nomeComprador = nomeComprador;
		this.telefoneComprador = telefoneComprador;
		CPF = cPF;
	}
	public int getNumero() {
		return numero;
	}
	public void setNumero(int numero) {
		this.numero = numero;
	}
	public int getDataCompra() {
		return dataCompra;
	}
	public void setDataCompra(int dataCompra) {
		this.dataCompra = dataCompra;
	}
	public float getValorCompra() {
		return valorCompra;
	}
	public void setValorCompra(float valorCompra) {
		this.valorCompra = valorCompra;
	}
	public String getNomeComprador() {
		return nomeComprador;
	}
	public void setNomeComprador(String nomeComprador) {
		this.nomeComprador = nomeComprador;
	}
	public String getEnderecoComprador() {
		return enderecoComprador;
	}
	public void setEnderecoComprador(String enderecoComprador) {
		this.enderecoComprador = enderecoComprador;
	}
	public int getTelefoneComprador() {
		return telefoneComprador;
	}
	public void setTelefoneComprador(int telefoneComprador) {
		this.telefoneComprador = telefoneComprador;
	}
	public boolean isInforme() {
		return informe;
	}
	public void setInforme(boolean informe) {
		this.informe = informe;
	}
	public int getCPF() {
		return CPF;
	}
	public void setCPF(int cPF) {
		CPF = cPF;
	}
	
	public float valorAPagar(int data) {
		float conta;
		int dataAtual = data - this.dataCompra; 
		conta = this.valorCompra + dataAtual * 0.95f * this.valorCompra;
		return conta;
	}
	
	
}
