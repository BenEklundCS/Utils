import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JButton;
import java.awt.*;

public class NewWindow {
    JFrame frame = new JFrame();
    JLabel label = new JLabel("Hello");
    JButton button = new JButton();

    NewWindow() {
        // Basic label operations
        label.setBounds(0, 0, 100, 50);
        label.setFont(new Font(null, Font.PLAIN, 25));
        // Add label to frame
        frame.add(label);
        // Basic button
        button.setBounds(200, 100, 100, 50);
        button.addActionListener(e -> System.out.println("I was clicked!"));
        frame.add(button);
        // Configure frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(1000, 800);
        frame.setLayout(null);
        frame.setVisible(true);

    }
}
