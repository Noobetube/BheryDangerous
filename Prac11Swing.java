import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Prac11Swing {
    JLabel jlab;

    public Prac11Swing() {
        JFrame jfrm = new JFrame("keyboard event");
        jfrm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jfrm.setLayout(new FlowLayout());
        jfrm.setSize(300, 300);
        jfrm.setVisible(true);
        jfrm.addKeyListener(new KeyAdapter() {
            public void keyTyped(KeyEvent ke) {
                jlab.setText("Typed character is:" + ke.getKeyChar());

            }

            public void keyReleased(KeyEvent ke) {
                jlab.setText(" ");
            }
        });
        jlab = new JLabel("Press a key");
        jfrm.add(jlab);

    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new Prac11Swing();
            }
        });

    }

}
