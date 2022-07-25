import java.awt.*;
import java.awt.event.*;

public class Prac12 extends Frame implements ActionListener {
    String msg1 = "";
    String msg2 = "";
    String msg3 = "";
    String msg4 = "";
    Button a, b;

    public Prac12() {
        setLayout(new FlowLayout());
        a = new Button("A");
        b = new Button("B");

        add(a);
        add(b);

        a.addActionListener(this);
        b.addActionListener(this);
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                System.exit(0);
            }
        });
    }

    @Override
    public void actionPerformed(ActionEvent ae) {
        String str = ae.getActionCommand();

        if (str.equals("A")) {
            msg1 = "George";
            msg2 = "BSc. HONS Computer Science";
            msg3 = "214059";
            msg4 = "SGGSCC";
            repaint();

        } else {

            msg1 = "CGPA";
            msg2 = "";
            msg3 = "";
            msg4 = "";
            repaint();
        }

    }

    public void paint(Graphics g) {
        g.drawString(msg1, 20, 100);
        g.drawString(msg2, 20, 150);
        g.drawString(msg3, 20, 200);
        g.drawString(msg4, 20, 250);

    }

    public static void main(String[] args) {
        Prac12 obj = new Prac12();
        obj.setSize(new Dimension(300, 300));
        obj.setTitle("Info Buttons");
        obj.setVisible(true);
    }
}
