import javax.swing.*;
import java.awt.event.*;

public class KeyboardExample extends JFrame implements KeyListener {
    JTextArea textArea;
    JLabel label = new JLabel("None");

    public KeyboardExample() {
        super("KeyboardExample");
        setLayout(null);
        textArea = new JTextArea();
        textArea.addKeyListener(this);
        textArea.setBounds(0, 0, 200, 200);
        label.setBounds(0, 200, 200, 100);
        add(textArea);
        add(label);
        setSize(200, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    @Override
    public void keyTyped(KeyEvent e) {
        label.setText(e.getKeyChar() + " typed");
    }

    @Override
    public void keyPressed(KeyEvent e) {
        label.setText(e.getKeyChar() + " pressed");
    }

    @Override
    public void keyReleased(KeyEvent e) {
        label.setText(e.getKeyChar() + " released");
    }

    public static void main(String[] args) {
        KeyboardExample keyboardExample = new KeyboardExample();
    }
}
