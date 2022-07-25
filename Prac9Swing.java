import java.awt.*;
import javax.swing.*;

public class Prac9Swing extends JPanel {
    public static void main(String args[]) {
        JFrame frame = new JFrame("String and Text");
        frame.setSize(400, 400);
        frame.setLayout(new FlowLayout());
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.getContentPane().setBackground(Color.PINK);
        String str = "I am using swift";
        JLabel text = new JLabel(str);
        frame.add(text);
        frame.setVisible(true);
    }
}