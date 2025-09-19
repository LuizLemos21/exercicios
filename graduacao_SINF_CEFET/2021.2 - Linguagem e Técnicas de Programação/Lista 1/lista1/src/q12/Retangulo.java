package q12;

public class Retangulo {
	private float lado1;
	private float lado2;
	public float getLado1() {
		return lado1;
	}
	public void setLado1(float lado1) {
		this.lado1 = lado1;
	}
	public float getLado2() {
		return lado2;
	}
	public void setLado2(float lado2) {
		this.lado2 = lado2;
	}
	public float perimetro() {
		return (2*lado1)+(2*lado2);
	}
	
	public float area() {
		return lado1*lado2;
	}

}
