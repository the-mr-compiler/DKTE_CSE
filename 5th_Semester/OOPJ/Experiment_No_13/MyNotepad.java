
import java.awt.*;
import java.awt.datatransfer.*;
import java.awt.event.*;
import java.io.*;
import javax.swing.*;
import javax.swing.event.ChangeEvent;
import javax.swing.event.ChangeListener;
import javax.swing.event.DocumentEvent;
import javax.swing.event.DocumentListener;

public class MyNotepad extends JFrame implements ActionListener, TextListener, DocumentListener {
    public static MyNotepad frame;
    public JTextArea textArea;
    public boolean isSaved;
    public String fileName = "";
    public File file = null;

    public MyNotepad() {
        super("Untitled - MyNotepad");
        isSaved = true;
        textArea = new JTextArea(10, 0);
        textArea.getDocument().addDocumentListener(this);
        JScrollPane scroll = new JScrollPane(textArea);
        this.add(scroll);
        init();

        this.setVisible(true);
        this.setSize(400, 400);
        this.setDefaultCloseOperation(2);
    }

    public static void main(String[] args) {
        frame = new MyNotepad();
    }

    public void init() {
        JMenuBar m = new JMenuBar();
        JMenu m1 = new JMenu("File");
        JMenuItem m11 = new JMenuItem("New");
        JMenuItem m12 = new JMenuItem("Open");
        JMenuItem m13 = new JMenuItem("Save");
        JMenuItem m14 = new JMenuItem("Save As..");
        m11.addActionListener(this);
        m12.addActionListener(this);
        m13.addActionListener(this);
        m14.addActionListener(this);
        m1.add(m11);
        m1.add(m12);
        m1.add(m13);
        m1.add(m14);
        m.add(m1);
        JMenu m2 = new JMenu("Edit");
        JMenuItem m21 = new JMenuItem("Copy");
        JMenuItem m22 = new JMenuItem("Cut");
        JMenuItem m23 = new JMenuItem("Paste");
        JCheckBoxMenuItem m24 = new JCheckBoxMenuItem("Word Wrap");
        m21.addActionListener(this);
        m22.addActionListener(this);
        m23.addActionListener(this);
        m24.addActionListener(this);
        m24.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textArea.setLineWrap(((JCheckBoxMenuItem) e.getSource()).getState());
            }
        });
        m2.add(m21);
        m2.add(m22);
        m2.add(m23);
        m2.add(m24);
        m.add(m2);
        setJMenuBar(m);

    }

    public void writeToFile() {
        try {
            FileOutputStream fos = new FileOutputStream(file);
            fos.write(textArea.getText().getBytes());
            fos.close();
        } catch (FileNotFoundException e) {
            try {
                file.createNewFile();
                writeToFile();
            } catch (IOException e1) {
                System.out.println(e1);
            }
        } catch (IOException e) {
            System.out.println(e);
        }
    }

    public void open() {
        if (!isSaved) {
            int i = JOptionPane.showConfirmDialog(this, "Do you want to save ?", "File Not Saved",
                    JOptionPane.YES_NO_OPTION);
            if (i == JOptionPane.YES_OPTION) {
                save();
            }
        }
        JFileChooser ch = new JFileChooser();
        int op = ch.showOpenDialog(this);
        if (op == JFileChooser.APPROVE_OPTION) {
            isSaved = true;
            file = ch.getSelectedFile();
            fileName = file.getName();

            readFromFile();
        }
        this.setTitle(fileName);

    }

    private void readFromFile() {
        try {
            FileInputStream fis = new FileInputStream(file);
            textArea.setText(new String(fis.readAllBytes()));
            fis.close();
        } catch (FileNotFoundException e) {
            System.out.println(e);
        } catch (IOException e) {
            System.out.println(e);
        }

    }

    public void save() {
        if (this.fileName.length() == 0) {
            JFileChooser ch = new JFileChooser();
            int op = ch.showSaveDialog(this);
            if (op == JFileChooser.APPROVE_OPTION) {
                isSaved = true;
                file = ch.getSelectedFile();
                fileName = file.getName();

                writeToFile();
            } else {
                isSaved = false;
            }
        }
        this.setTitle(fileName);

    }

    public void saveAs() {
        JFileChooser ch = new JFileChooser();
        int op = ch.showSaveDialog(this);
        if (op == JFileChooser.APPROVE_OPTION) {
            isSaved = true;
            file = ch.getSelectedFile();
            fileName = file.getName();

            writeToFile();
        } else {
            isSaved = false;
        }
        this.setTitle(fileName);
    }

    public void actionPerformed(ActionEvent ae) {
        switch (ae.getActionCommand()) {
            case "New":
                if (!isSaved) {
                    int i = JOptionPane.showConfirmDialog(this, "Do you want to save ?", "File Not Saved",
                            JOptionPane.YES_NO_OPTION);
                    if (i == JOptionPane.YES_OPTION) {
                        save();
                    }
                }
                this.textArea.setText("");
                break;

            case "Open":
                open();
                break;

            case "Save":
                save();
                break;

            case "Save As..":
                saveAs();
                break;
            case "Copy":
                String sl = textArea.getSelectedText();
                StringSelection stringSelection = new StringSelection(sl);
                Clipboard clipboard = Toolkit.getDefaultToolkit().getSystemClipboard();
                clipboard.setContents(stringSelection, null);
                break;
            case "Cut":
                String sl1 = textArea.getSelectedText();
                StringSelection ssl = new StringSelection(sl1);
                Clipboard cl = Toolkit.getDefaultToolkit().getSystemClipboard();
                cl.setContents(ssl, null);
                textArea.replaceSelection("");
                break;
            case "Paste":
                Clipboard cl2 = Toolkit.getDefaultToolkit().getSystemClipboard();
                try {
                    textArea.replaceSelection((String) cl2.getData(DataFlavor.stringFlavor));
                } catch (Exception e) {
                    System.out.println(e);
                }

                break;
        }
    }

    @Override
    public void insertUpdate(DocumentEvent e) {
        isSaved = false;
        this.setTitle(fileName + "*");

    }

    @Override
    public void removeUpdate(DocumentEvent e) {
        isSaved = false;
        this.setTitle(fileName + "*");

    }

    @Override
    public void changedUpdate(DocumentEvent e) {
        isSaved = false;
        this.setTitle(fileName + "*");
    }

    @Override
    public void textValueChanged(TextEvent e) {
        isSaved = false;
        this.setTitle(fileName + "*");
    }

}