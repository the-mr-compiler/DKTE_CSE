import javax.swing.*;
import java.awt.event.*;

public class MouseEventExample extends JFrame implements MouseListener, MouseMotionListener {
    JLabel label = new JLabel("None");

    public MouseEventExample() {
        super("MouseEventExample");
        setLayout(null);
        addMouseListener(this);
        addMouseMotionListener(this);
        label.setBounds(0, 0, 400, 100);
        add(label);
        setSize(1200, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    public static void main(String[] args) {
        MouseEventExample MouseEventExample = new MouseEventExample();
    }

    @Override
    public void mouseDragged(MouseEvent e) {
        label.setBounds(e.getX(), e.getY(), 400, 100);
        label.setText("Mouse Dragged to " + e.getX() + ", " + e.getY());
    }

    @Override
    public void mouseMoved(MouseEvent e) {
        label.setBounds(e.getX(), e.getY(), 400, 100);
        label.setText("Mouse moved to " + e.getX() + ", " + e.getY());

    }

    @Override
    public void mouseClicked(MouseEvent e) {
        String cl = "";
        switch (e.getButton()) {
            case MouseEvent.BUTTON1:
                cl = "Left";
                break;
            case MouseEvent.BUTTON2:
                cl = "Wheel";
                break;
            case MouseEvent.BUTTON3:
                cl = "Left";
                break;
        }
        label.setText("Mouse " + cl + " button clicked at " + e.getX() + ", " + e.getY());

    }

    @Override
    public void mousePressed(MouseEvent e) {
        label.setText("Mouse pressed at " + e.getX() + ", " + e.getY());

    }

    @Override
    public void mouseReleased(MouseEvent e) {
        label.setBounds(e.getX(), e.getY(), 400, 100);
        label.setText("Mouse released at " + e.getX() + ", " + e.getY());
    }

    @Override
    public void mouseEntered(MouseEvent e) {
        label.setText("Mouse entered to window");

    }

    @Override
    public void mouseExited(MouseEvent e) {
        label.setText("Mouse exited from window");

    }
}
