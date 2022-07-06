package FigurasGerais;

public class Triangulo extends Figura{

	private double base;
	private double altura;
	
	
	
	public Triangulo() {
		super();
	}
	
	



	public Triangulo(String cor, double base, double altura) {
		super(cor);
		this.base = base;
		this.altura = altura;
	}
	
	





	public double getBase() {
		return base;
	}





	public void setBase(double base) {
		this.base = base;
	}





	public double getAltura() {
		return altura;
	}





	public void setAltura(double altura) {
		this.altura = altura;
	}





	@Override
	public double area() {
		// TODO Auto-generated method stub
		return this.base * this.altura;
	}





	@Override
	public String toString() {
		return "Triangulo [base=" + base + ", altura=" + altura + ", area=" + area() + ", cor=" + getCor() + "]";
	}
	
	
	
	

}
