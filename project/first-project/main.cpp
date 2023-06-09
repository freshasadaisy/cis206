import java.util.ArrayList;
import java.util.List;

class Mountain {
    private String name;
    private String country;
    private double elevation;

    public Mountain(String name, String country, double elevation) {
        this.name = name;
        this.country = country;
        this.elevation = elevation;
    }

    public String getName() {
        return this.name;
    }

    public String getCountry() {
        return this.country;
    }

    public double getElevation() {
        return this.elevation;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setCountry(String country) {
        this.country = country;
    }

    public void setElevation(double elevation) {
        this.elevation = elevation;
    }

    // Convert elevation from feet to meters
    public double toMeters() {
        return this.elevation / 3.2808;
    }
}

public class Main {
    public static void main(String[] args) {
        // Create Mountain objects and add them to a list
        List<Mountain> mountains = new ArrayList<>();
        mountains.add(new Mountain("Chimborazo", "Ecuador", 20549));
        mountains.add(new Mountain("Matterhorn", "Switzerland", 14692));
        mountains.add(new Mountain("Olympus", "Greece (Macedonia)", 9573));
        mountains.add(new Mountain("Everest", "Nepal", 29029));
        mountains.add(new Mountain("Mount Marcy - Adirondacks", "United States", 5344));
        mountains.add(new Mountain("Mount Mitchell - Blue Ridge", "United States", 6684));
        mountains.add(new Mountain("Zugspitze", "Switzerland", 9719));

        // Print out the details of each mountain
        for (Mountain m : mountains) {
            System.out.println(m.getName() + " in " + m.getCountry() + " has an elevation of " + m.getElevation() + " feet or " + m.toMeters() + " meters.");
        }

        Mountain shortestMountain = minElevation(mountains);
        System.out.println("The shortest mountain is " + shortestMountain.getName() + " with an elevation of " + shortestMountain.getElevation() + " feet or " + shortestMountain.toMeters() + " meters.");
    }

    public static Mountain minElevation(List<Mountain> mountains) {
        Mountain shortestMountain = mountains.get(0);
        for (Mountain m : mountains) {
            if (m.getElevation() < shortestMountain.getElevation()) {
                shortestMountain = m;
            }
        }
        return shortestMountain;
    }
}