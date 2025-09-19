
package q1;
import java.util.Date;
import java.time.LocalDateTime;
import java.time.temporal.ChronoUnit;


public class Dog {
	private String Nome;
	private LocalDateTime dataEntrada;
	private String raca;
	private String cor;
	private float peso;
	

	public Dog(String nome, LocalDateTime dataEntrada, String raca, String cor, float peso) {
		super();
		Nome = nome;
		this.dataEntrada = dataEntrada;
		this.raca = raca;
		this.cor = cor;
		this.peso = peso;
	}
	public String getNome() {
		return Nome;
	}
	public void setNome(String nome) {
		Nome = nome;
	}
	public LocalDateTime getDataEntrada() {
		return dataEntrada;
	}
	public void setDataEntrada(LocalDateTime dataEntrada) {
		this.dataEntrada = dataEntrada;
	}
	public String getRaca() {
		return raca;
	}
	public void setRaca(String raca) {
		this.raca = raca;
	}
	public String getCor() {
		return cor;
	}
	public void setCor(String cor) {
		this.cor = cor;
	}
	public float getPeso() {
		return peso;
	}
	public void setPeso(float peso) {
		this.peso = peso;
	}
	
	public void Nutricao() {
		if(this.peso < 20 && this.peso > 0) {
			System.out.println(this.getNome()+" Está desnutrido(a) :(");
		} else if(this.peso < 30 && this.peso > 21) {
			System.out.println((this.getNome()+" Está normal :)"));
		} else {
			System.out.println((this.getNome()+" Está obeso(a)"));
		}
	}
	
	
	

	
	
	
}
