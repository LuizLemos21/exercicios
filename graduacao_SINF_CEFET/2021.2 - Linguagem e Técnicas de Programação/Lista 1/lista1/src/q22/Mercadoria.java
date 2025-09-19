package q22;

import java.time.LocalDateTime;
import java.time.temporal.ChronoUnit;

public class Mercadoria {
	
	private String nome;
	private float valorCompra;
	private float valorVenda;
	private LocalDateTime dataValidade;
	
	
	public Mercadoria(String nome, float valorCompra, LocalDateTime dataValidade, Fornecedor fornecedor) {
		super();
		this.nome = nome;
		this.valorCompra = valorCompra;
		this.valorVenda = valorCompra * 1.3f;
		this.dataValidade = dataValidade;
		this.fornecedor = fornecedor;
	}
	
	LocalDateTime hoje = LocalDateTime.now();
	private long dias;
	
	
	
	public LocalDateTime getDataValidade() {
		return dataValidade;
	}
	public LocalDateTime getHoje() {
		return hoje;
	}
	public void setDias(long dias) {
		this.dias = dias;
	}

	Fornecedor fornecedor;
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public float getValorVenda() {
		return valorVenda;
	}
	public Fornecedor getFornecedor() {
		return fornecedor;
	}
	public long getDias() {
		return dias;
	}
	
	
}
