package Quadrilatero;

public class Quadrado extends Retangulo{

	public Quadrado() {
		super();
		// TODO Auto-generated constructor stub
	}

	public Quadrado(String cor, double lado1, double lado2) {
		super(cor, lado1, lado2);
		// TODO Auto-generated constructor stub
	}
	
	public Quadrado(String cor, double lado) {
		super(cor, lado, lado);
		
	}

	@Override
	public String toString() {
		return "Quadrado [area=" + area() + ", lado1=" + getLado1() + ", lado2=" + getLado2()
				+ ", cor=" + getCor() + "]";
	}
	
	
	
	

}
