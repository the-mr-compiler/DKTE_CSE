public interface QueueInterface<T> {
    public int enqueue(T item);

    public T dequeue();

    public void display();
}
