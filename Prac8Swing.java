import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Prac8Swing {
   
    public Prac8Swing() {
        JFrame jfrm = new JFrame("An Event Example");
        jfrm.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jfrm.setLayout(new FlowLayout());
        jfrm.setSize(300, 300);
     

        // Add a MouseListener to the JButton
        jfrm.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                jfrm.setSize(new Dimension(300, 300));
            }

            @Override
            public void mouseEntered(MouseEvent e) {

                jfrm.setSize(new Dimension(300 * 3, 300 * 3));
            }

            @Override
            public void mouseExited(MouseEvent e) {

                System.exit(0);
            }


        });
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new Prac8Swing();
            }
        });

    }
}