import java.awt.event.*;
import java.awt.*;

public class prac9 extends Frame {
    String msg = "Hello";
    int X = 250, Y = 250;
    public prac9() {
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });
    }
    public void paint(Graphics g) 
	{
		g.setColor(Color.black);
		g.drawString(msg, X, Y);
	}

    public static void main(String[] args) {
        prac9 obj = new prac9();
        obj.setSize(new Dimension(500, 500));
        obj.setVisible(true);
        obj.setBackground(Color.pink);
    }
}
