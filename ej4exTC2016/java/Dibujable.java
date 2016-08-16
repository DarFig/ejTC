/*
*v2016-8-16
*
*/

public class Dibujable {
	public float x, y, z;
	Dibujable(float _x, float _y, float _z){
		this.x = _x;
		this.y = _y;
		this.z = _z;
	}
	public void draw(){
		System.out.println("posicion "+this.x+", "+this.y+"profundidad "+this.z);
	}
	public void update(float t){}
	public float getz(){
		return z;
	}
		
}
