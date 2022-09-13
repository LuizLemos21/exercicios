package q3;

public class Artigos extends Publicacoes {
	
	private String nomePeriodico;
	private int volume;
	private int numero;
	
	
	
	
	public String getNomePeriodico() {
		return nomePeriodico;
	}


	public void setNomePeriodico(String nomePeriodico) {
		this.nomePeriodico = nomePeriodico;
	}


	public int getVolume() {
		return volume;
	}


	public void setVolume(int volume) {
		this.volume = volume;
	}


	public int getNumero() {
		return numero;
	}


	public void setNumero(int numero) {
		this.numero = numero;
	}




	@Override
	public void ImprimirInformaçoes() {
		System.out.println("Titulo: "+super.getTitulo());
		System.out.println("Ano: "+super.getAno());
		System.out.println("Autores: "+super.getAutores());
		System.out.println("Nome do Periodico: "+this.nomePeriodico);
		System.out.println("Volume: "+this.volume);
		System.out.println("Numero: "+this.numero);
		System.out.println("Área de pesquisa correspondente: "+ super.getAreaPesquisa());

		if(super.getPesquisaassoc()!=null) {
			super.getPesquisaassoc().ImprimirInformaçoes();
		}
	}

}
