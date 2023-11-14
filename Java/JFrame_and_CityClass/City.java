public class City {
    private String name;
    private String state;
    private String country;
    private int population;

    City(String name, String state, String country, int population) {
        this.name = name;
        this.state = state;
        this.country = country;
        this.population = population;
    }

    public String getName() {
        return this.name;
    }
    public String getState() {
        return this.state;
    }
    public String getCountry() {
        return this.country;
    }
    public int getPopulation() {
        return this.population;
    }

    public void setName(String name) {
        this.name = name;
    }
    public void setState(String name) {
        this.name = name;
    }
    public void setCountry(String name) {
        this.name = name;
    }
    public void setPopulation(String name) {
        this.name = name;
    }
}
