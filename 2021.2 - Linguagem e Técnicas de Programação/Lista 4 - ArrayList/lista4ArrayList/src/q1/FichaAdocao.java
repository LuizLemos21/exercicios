package q1;

import java.time.LocalDateTime;
import java.time.temporal.ChronoUnit;

public class FichaAdocao {
	
	public FichaAdocao(LocalDateTime dataAdocao, Pessoa pessoa, Dog caoAdotado) {
		super();
		
		if(diasnaOng<0) {
			System.out.println("Não é possivel realizar uma adoção antes da data de entrada");
		} else {
			this.dataAdocao = dataAdocao;
			this.pessoa = pessoa;
			this.caoAdotado = caoAdotado;
			pessoa.setCaoAdotado(caoAdotado);
			this.diasAdotado = dataAdocao.until(LocalDateTime.now(), ChronoUnit.DAYS) ;
			this.diasnaOng = caoAdotado.getDataEntrada().until(dataAdocao, ChronoUnit.DAYS);
			System.out.println("Cachorro "+caoAdotado.getNome()+" Foi adotado por "+pessoa.getNome()+" No dia: "+dataAdocao);
		}
	}
	private LocalDateTime dataAdocao;
	private LocalDateTime hoje = LocalDateTime.now();
	private Pessoa pessoa;
	private Dog caoAdotado;
	private long diasnaOng;
	
	
	
	
	public long getDiasAdotado() {
		return diasAdotado;
	}

	public Dog getCaoAdotado() {
		return caoAdotado;
	}

	public void setCaoAdotado(Dog caoAdotado) {
		this.caoAdotado = caoAdotado;
	}
	private long diasAdotado;
	
	public void printTempoAdotado() {
		int anos, meses, dias;
		if(diasAdotado > 12 && diasAdotado < 365) {
			meses = (int)diasAdotado/12;
			System.out.println("O cachorro "+ caoAdotado.getNome() + " foi adotado a " + meses+" meses");
		} else if (diasAdotado >= 365) {
			anos = (int)diasAdotado/365;
			System.out.println("O cachorro "+ caoAdotado.getNome() + " foi adotado a " + anos + " anos");
		} else {
			System.out.println("O cachorro "+ caoAdotado.getNome() + " foi adotado a " + (int)diasAdotado + " dias");
		}
	}
	
	public void printTempoNaONG() {
		int anos, meses, dias;
		if(diasnaOng > 12 && diasnaOng < 365) {
			meses = (int)diasnaOng/12;
			System.out.println("O cachorro "+ caoAdotado.getNome() + " passou " + meses+ " meses na ONG");
		} else if (diasnaOng >= 365) {
			anos = (int)diasnaOng/365;
			System.out.println("O cachorro "+ caoAdotado.getNome() + " passou " + anos + " anos na ONG");
		} else {
			System.out.println("O cachorro "+ caoAdotado.getNome() + " passou " + (int)diasnaOng + " dias na ONG");
		}
	}
	
	public void TrocaPessoa (Pessoa pessoa) {
		pessoa.setCaoAdotado(caoAdotado);
		this.pessoa = pessoa;
		System.out.println(this.caoAdotado.getNome()+" foi adotado por "+this.pessoa.getNome());
	}

	
	
}
