package q16;

public class ContaCorrente {
	public ContaCorrente(int numero) {
		this.numero = numero;
	}
	private float saldo = 0;
	private int numero;
	private String nomeCliente;
	private float limite;
	private boolean situacao = false;
	
	
	public float getNumero() {
		return numero;
	}
	
	
	public float getSaldo() {
		return saldo;
	}



	public void setSaldo(float saldo) {
		this.saldo = saldo;
	}



	public String getNomeCliente() {
		return nomeCliente;
	}



	public void setNomeCliente(String nomeCliente) {
		this.nomeCliente = nomeCliente;
	}



	public float getLimite() {
		return limite;
	}



	public void setLimite(float limite) {
		this.limite = limite;
	}



	public boolean isSituacao() {
		return situacao;
	}



	public void setSituacao(boolean situacao) {
		this.situacao = situacao;
		if (situacao) {
			System.out.println("Conta de "+ this.nomeCliente +" ativada!");
		} else {
			System.out.println("Contade "+ this.nomeCliente +" desativada!");
		}
			
	}



	public float sacar (float quantia) {
		if (this.situacao) {
		if (quantia > this.saldo) {
			System.out.println("Saque inválido! Saldo insuficiente!");
			return 0f;
		} else if(quantia > limite) {
			System.out.println("Saque inválido! Acima do limite de R$ " + limite + " !");
			return 0f;
		}else {
		System.out.println("R$"+ quantia + " foram sacados da conta de "+ this.nomeCliente);
		return quantia;
		}
		} else {
			System.out.println("Saque inválido! Conta inativa!");
			return 0;
		}
		
	}
	
	
	
	public void depositar(float quantia) {
		if (this.situacao) {
			this.saldo += quantia;
			System.out.println("R$ "+ quantia + " foram depositados na conta de "+ this.nomeCliente);
		} else {
			System.out.println("Depósito inválido! Conta inativa!");
		}
		
	}
	
	public void transferir(float quantia, ContaCorrente x) {
		if (this.situacao) {
		float valortransferido;
		valortransferido = sacar(quantia);
		x.depositar(valortransferido);
		} else {
			System.out.println("Transferencia inválida! Conta inativa!");
		}
	}
	
}
