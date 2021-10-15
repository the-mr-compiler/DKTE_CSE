import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
 * Calculator
 */
public class Calculator extends JFrame implements ActionListener {
    JTextField in;
    JLabel ans, op;
    public static String prevOp = "";
    public double value;
    public double prevValue;

    public Calculator() {
        super("MrCalculator");
        setLayout(null);
        JPanel p1 = new JPanel();
        p1.setBounds(5, 5, 390, 90);
        p1.setLayout(new GridLayout(2, 2));
        p1.add(new JLabel("Ans :"));
        ans = new JLabel("0");
        in = new JTextField();
        in.setEditable(false);
        p1.add(ans);
        op = new JLabel(prevOp);
        p1.add(op);
        p1.add(in);
        JPanel p2 = new JPanel();
        p2.setBounds(0, 100, 300, 250);
        p2.setLayout(new GridLayout(4, 4, 5, 10));
        for (int i = 1; i < 10; i++) {
            JButton btn = new JButton("" + i);
            btn.addActionListener(this);
            p2.add(btn);
        }
        JButton btn = new JButton("0");
        btn.addActionListener(this);
        p2.add(btn);
        btn = new JButton(".");
        btn.addActionListener(this);
        p2.add(btn);
        btn = new JButton("+");
        btn.addActionListener(this);
        p2.add(btn);
        JPanel p3 = new JPanel();
        p3.setBounds(305, 100, 100, 250);
        p3.setLayout(new GridLayout(4, 1, 10, 10));
        btn = new JButton("C");
        btn.addActionListener(this);
        p3.add(btn);
        btn = new JButton("-");
        btn.addActionListener(this);
        p3.add(btn);
        btn = new JButton("*");
        btn.addActionListener(this);
        p3.add(btn);
        btn = new JButton("/");
        btn.addActionListener(this);
        p3.add(btn);
        this.add(p1);
        this.add(p2);
        this.add(p3);
        setSize(425, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        double val;
        try {
            val = Double.parseDouble(in.getText());
        } catch (NumberFormatException ex) {
            val = 0;
        }

        switch (e.getActionCommand()) {
            case "C":
                prevValue = 0;
                prevOp = "";
                op.setText("");
                in.setText("");
                ans.setText("0");
                break;
            case "+":
            case "-":
            case "*":
            case "/":
                switch (prevOp) {
                    case "+":
                        val = prevValue + val;
                        break;
                    case "-":
                        val = prevValue - val;
                        break;
                    case "*":
                        val = prevValue * val;
                        break;
                    case "/":
                        val = prevValue / val;
                        break;
                    default:
                        break;
                }
                prevValue = val;
                prevOp = e.getActionCommand();
                op.setText(prevOp);
                value = val;
                ans.setText(value + "");
                in.setText("");
                break;
            case ".":
                if (in.getText().contains(".")) {
                    break;
                }
                if (in.getText().length() == 0) {
                    in.setText("0.");
                } else {
                    in.setText(in.getText() + e.getActionCommand());
                }
                break;
            default:
                in.setText(in.getText() + e.getActionCommand());
        }
    }

    public static void main(String[] args) {
        Calculator calculator = new Calculator();
    }
}