import java.awt.*;
import java.awt.event.*;

public class prac11 extends Frame {

    String msg = "";
    int X = 50, Y = 100;

    public prac11() {
        addKeyListener(new KeyAdapter() {
            public void keyTyped(KeyEvent ke) {
                msg += "Typed character is: " + ke.getKeyChar();
                repaint();

            }

            public void keyReleased(KeyEvent ke) {
                msg = "";
                repaint();
            }
        });
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                System.exit(0);
            }
        });
    }

    public void paint(Graphics g) {
        g.setColor(Color.black);
        g.drawString(msg, X, Y);
    }

    public static void main(String[] args) {
        prac11 obj = new prac11();

        obj.setSize(new Dimension(300, 300));
        obj.setTitle("Keyboard Events Demo using Adapter class");
        obj.setVisible(true);
    }
}
