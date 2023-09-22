import java.net.MalformedURLException;
import java.net.ProtocolException;
import java.net.URL;
import java.util.ArrayList;
import java.util.List;

public class getGateway {
    public static void main(String[] args) throws MalformedURLException, ProtocolException {
        List<String> versions = new ArrayList<String>();
        String gatewayURL = "Insert url here!";
        Gateway gateway = new Gateway();
        URL url = new URL(gatewayURL);
        System.out.println(url);
        try {
            gateway.setUrl(url);
            gateway.GetGatewayStatus(gateway.getUrl());
            if (gateway.getVersion() != null) {
                versions.add(gateway.getVersion());
            }
        }
        catch (Exception e) {
            System.out.println(e.getMessage());
        }
        System.out.println(versions);
    }
}
