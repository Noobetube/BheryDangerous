import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Prac10Swing {
    JLabel jlab;

    public Prac10Swing() {
        JFrame jfrm = new JFrame("An Event Example");

        jfrm.setLayout(new FlowLayout());

        jfrm.setSize(300, 300);

        jfrm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JButton jbtnRed = new JButton("Red");
        JButton jbtnBlue = new JButton("Blue");

        jbtnRed.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent ae) {
                jfrm.getContentPane().setBackground(Color.red);
            }
        });

        jbtnBlue.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent ae) {
                jfrm.getContentPane().setBackground(Color.blue);
            }
        });

        jfrm.add(jbtnRed);
        jfrm.add(jbtnBlue);

        jlab = new JLabel("Press a button to change bacground color");

        jfrm.add(jlab);

        jfrm.setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new Prac10Swing();
            }

        });
    }
}
