import java.awt.*;
import java.awt.event.*;

public class Prac10 extends Frame implements ActionListener {
    String msg = "";
    Button red, blue;

    public Prac10() {

        setLayout(new FlowLayout());

        red = new Button("Red");
        blue = new Button("Blue");

        add(red);
        add(blue);

        red.addActionListener(this);
        blue.addActionListener(this);

        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                System.exit(0);
            }
        });
    }

    public void actionPerformed(ActionEvent ae) {
        String str = ae.getActionCommand();
        if (str.equals("Red")) {
            setBackground(Color.RED);
        } else if (str.equals("Blue")) {
            setBackground(Color.blue);
        }

        repaint();
    }

    public void paint(Graphics g) {
        g.drawString(msg, 20, 100);

    }

    public static void main(String[] args) {
        Prac10 obj = new Prac10();
        obj.setSize(new Dimension(250, 150));
        obj.setTitle("Color Buttons");
        obj.setVisible(true);
    }
}
