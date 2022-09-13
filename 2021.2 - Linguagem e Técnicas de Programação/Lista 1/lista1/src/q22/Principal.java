package q22;

import java.text.DecimalFormat;
import java.time.LocalDateTime;
import java.time.temporal.ChronoUnit;

public class Principal {

	public static void main(String[] args){
		Fornecedor f1 = new Fornecedor("Renato Lanches","(83) 3145-3137","Rua Projetada 361, Feitosa, Maceió, AL","28.838.863/0001-51");
		Fornecedor f2 = new Fornecedor("Premium Alimentíceos","(65) 2326-3656","Rua Domerinda Maria da Conceição, Vila Araguaia, São Paulo, SP","58.442.406/0001-04");
		Fornecedor f3 = new Fornecedor("Bababooey Moda","(71) 2651-9714","Rua Ailton Esteves de Melo, Jardim Sol Nascente, Jandira, SP","15.885.332/0001-78");
		
		Mercadoria m1 = new Mercadoria("Sanduba",(float)25.50,LocalDateTime.of(2022, 3, 21, 0, 0, 0),f1);
		Mercadoria m2 = new Mercadoria("Leite",(float)7.99,LocalDateTime.of(2022, 2, 10, 0, 0, 0),f2);
		Mercadoria m3 = new Mercadoria("Sandália",(float)69.99,LocalDateTime.of(2050, 3, 21, 0, 0, 0),f3);
		Mercadoria m4 = new Mercadoria("Pizza",(float)30.50,LocalDateTime.of(2022, 3, 15, 0, 0, 0),f1);
		Mercadoria m5 = new Mercadoria("Coca-Cola",(float)6.50,LocalDateTime.of(2022, 4, 2, 0, 0, 0),f2);
		
		Carrinho c1 = new Carrinho();
		c1.adicionarItem(m1);
		c1.adicionarItem(m2);
		c1.adicionarItem(m3);
		c1.adicionarItem(m4);
		c1.adicionarItem(m5);
		
		System.out.println("Quantidade de Itens: "+c1.QuantItens());
		
		DecimalFormat formatador = new DecimalFormat("0.00");
		System.out.println("Preço Total: R$"+formatador.format(c1.valorTotal()));
    }

}


