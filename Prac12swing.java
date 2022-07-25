import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Prac12swing {
    JLabel jlab;

    public Prac12swing() {
        JFrame jfrm = new JFrame("An Event Example");

        jfrm.setLayout(new FlowLayout());

        jfrm.setSize(300, 300);

        jfrm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jfrm.setVisible(true);
        JButton jbtnA = new JButton("A");
        JButton jbtnB = new JButton("B");

        jbtnA.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent ae) {
                jlab.setText("<html>George<br>BSc. HONS Computer Science<br>214059<br>SGGSCC</html>");

            }
        });

        jbtnB.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent ae) {
                jlab.setText("CGPA");
            }
        });

        jfrm.add(jbtnA);
        jfrm.add(jbtnB);

        jlab = new JLabel("Press a button to Display information");

        jfrm.add(jlab);

    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new Prac12swing();
            }

        });
    }
}
