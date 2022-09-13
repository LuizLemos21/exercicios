package q22;
import java.time.LocalDateTime;
import java.time.temporal.ChronoUnit;
import java.util.ArrayList;

import q13.Dispositivo;
public class Carrinho {
	private ArrayList mercadorias = new ArrayList();
	
	
	
	public void adicionarItem (Mercadoria m) {
		m.setDias(m.getDataValidade().until(m.getHoje(), ChronoUnit.DAYS));
		if(m.getDias()<0) {
			mercadorias.add(m);
			System.out.println("Produto: "+m.getNome()+" Adiconado!");
		} else {
			System.out.println("Produto: "+m.getNome()+" Está com a Validade Vencida!");
		}
	}
	
	public int QuantItens() {
		return mercadorias.size();
	}
	
	public float valorTotal() {
		float vTot=0;
		for (int i = 0; i < mercadorias.size(); i++) {
			Mercadoria m = (Mercadoria)mercadorias.get(i);
			vTot = vTot + m.getValorVenda();
		}
		
		return vTot;
	}
}
