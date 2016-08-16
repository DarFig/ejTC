/*
*v2016-8-16
*
*/

public class Escena {
	Grupo<Dibujable> escen;
	Escena(){
		escen = new Grupo<Dibujable>();
	}
	public <T extends Dibujable> void add(T elem) {
		escen.add(elem);
	}
	public void draw() {
		escen.draw();
	}
	public void update(float t) {
		escen.update(t);
	}
	public void sort() {
		escen.sort();
	}
}
