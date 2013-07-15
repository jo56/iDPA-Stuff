
public class Dog {

	private int age;
	private double dimensions;
	private String name;
	private int speed;
	private boolean alive;
	private boolean lasers;
	private int swag;
	
	public Dog()
	{
		age=20;
		dimensions = 3.5;
		name = "Swaggin Dragon";
		speed = 15;
		alive= true;
		lasers = true;
		swag = 41;
	}
	public double getDimensions() {
		return dimensions;
	}
	public void setDimensions(double dimensions) {
		this.dimensions = dimensions;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getSpeed() {
		return speed;
	}
	public void setSpeed(int speed) {
		this.speed = speed;
	}
	public boolean isAlive() {
		return alive;
	}
	public void setAlive(boolean alive) {
		this.alive = alive;
	}
	public boolean isLasers() {
		return lasers;
	}
	public void setLasers(boolean lasers) {
		this.lasers = lasers;
	}
	public int getSwag() {
		return swag;
	}
	public void setSwag(int swag) {
		this.swag = swag;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public void Bark()
	{
		System.out.println("Bark");
	}
	int getAge()
	{
		return age; 
	}
	void setage(int v)
	{
		age = v;
	}
}
