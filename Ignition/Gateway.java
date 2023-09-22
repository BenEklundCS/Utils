import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.ProtocolException;
import java.net.URL;
import java.util.*;

public class Gateway {
    // Gateway class variables
    private URL url;
    private String version;
    // Getters and setters
    public URL getUrl() {
        return this.url;
    }
    public void setUrl(URL url) {
        this.url = url;
    }
    public String getVersion() {
        return this.version;
    }
    public void setVersion(String version) {
        this.version = version;
    }
    // GET request to gateway system/gwinfo
    // This should probably return as a dictionary where each key is the left side of an '=' and the value the right side
    public void GetGatewayStatus(URL url) throws MalformedURLException, ProtocolException {
        try {
            HttpURLConnection con = (HttpURLConnection) url.openConnection();
            con.setRequestMethod("GET");
            con.setConnectTimeout(10);
            BufferedReader br = new BufferedReader(new InputStreamReader(con.getInputStream()));
            String response = br.readLine();

            Map<String, String> dictionary = new HashMap<>();
            String[] pairs = response.split(";");
            for (String pair : pairs) {
                String[] keyValue = pair.split("=");
                if (keyValue.length == 2) {
                    String key = keyValue[0].trim();
                    String value = keyValue[1].trim();
                    dictionary.put(key, value);
                }   
            }
            this.setVersion(dictionary.get("Version"));
        }
        catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}
