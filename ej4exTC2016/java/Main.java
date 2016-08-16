/*
*v2016-8-16
*
*/
public class Main {
	public static void main(String[] args){
		Fijo a=new Fijo(1.0f, 2.0f, 5.0f);
		Fijo c=new Fijo(1.0f, 2.0f, 4.0f);
		Fijo b=new Fijo(1.0f, 2.0f, 3.0f);
		
		Grupo<Fijo> x = new Grupo<Fijo>();
		Escena p = new Escena();
		x.add(a);
		x.add(b);
		x.add(c);
		System.out.println("--------------Grupo-------------");
		x.draw();
		p.add(x);
		System.out.println("--------------Escena-------------");
		p.draw();
	}
}
