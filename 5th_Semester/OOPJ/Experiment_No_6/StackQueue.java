public class StackQueue implements StackInterface<Integer>, QueueInterface<Integer> {
    private int stack[];
    private int queue[];
    private int stackPointer = -1;
    private int front = -1;
    private int rear = -1;

    public StackQueue(int size) {
        stack = new int[size];
        queue = new int[size];
    }

    @Override
    public int enqueue(Integer item) {
        if (rear < queue.length - 1) {
            queue[++rear] = item;
            if (front == -1)
                front = 0;
            return 1;
        }
        return 0;
    }

    @Override
    public Integer dequeue() {

        if (front <= rear && front != -1) {
            int temp = front++;
            if (rear < front)
                rear = front = -1;
            return queue[temp];
        } else
            return -1;
    }

    @Override
    public int push(Integer value) {
        if (stackPointer < stack.length - 1) {
            stack[++stackPointer] = value;
            return stackPointer;
        }
        return -1;
    }

    @Override
    public Integer pop() {
        if (stackPointer >= 0) {
            int data = stack[stackPointer--];
            return data;
        }
        return -1;
    }

    @Override
    public Integer peek() {
        if (stackPointer >= 0)
            return stack[stackPointer];
        return -1;
    }

    @Override
    public void display() {
        StringBuffer s = new StringBuffer("Stack :");
        for (int i = 0; i <= stackPointer; i++) {
            s.append(" " + stack[i]);
        }
        s.append("\nQueue :");
        for (int i = front; i <= rear && i != -1; i++) {
            s.append(" " + queue[i]);
        }
        System.out.println(s);
    }

}
