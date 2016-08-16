/*
*v2016-8-16
*
*/

import java.util.LinkedList;

public class Grupo<T extends Dibujable> extends Dibujable{

	private LinkedList<T> objetos;
	private LinkedList<T> aux;
	Grupo(){
		super(0,0,0);
		objetos = new LinkedList<T>();
	}
	@Override
	public void draw(){
		for(T i: this.objetos){
			i.draw();
		}
	}
	public void add(T element){
		if(this.objetos.isEmpty()){
			this.objetos.addFirst(element);
		}else{
			int ind = 0;
			for(T i: this.objetos){
				if(i.getz() > element.getz()){
					ind = this.objetos.indexOf(i)+1;
					
				}
			}
			this.objetos.add(ind, element);
		}
		
	}

	
	@Override
	public void update(float t){
		for(T i: this.objetos){
			i.update(t);
		}
	}
	public void sort(){
		this.aux = (LinkedList<T>) this.objetos.clone();
		this.objetos.clear();
		for(T i : this.aux){
			this.add(i);
		}
	}
}
