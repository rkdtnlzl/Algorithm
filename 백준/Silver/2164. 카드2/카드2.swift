struct QueuePointer<T> {
    private var elements: [T] = []
    private var front = 0
    
    var isEmpty: Bool {
        elements.count < front + 1
    }
    
    var count: Int {
        elements.count - front
    }
    
    func peek() -> T? {
        front < elements.count ? elements[front] : nil
    }
    
    mutating func enqueue(with element: T) {
        elements.append(element)
    }
    
    @discardableResult
    mutating func dequeue() -> T? {
        if !isEmpty {
            defer { front += 1 }
            return elements[front]
        } else {
            return nil
        }
    }
}

var queue = QueuePointer<Int>()
let n = Int(readLine()!)!

for i in 1...n {
    queue.enqueue(with: i)
}

while queue.count > 1 {
    queue.dequeue()
    queue.enqueue(with: queue.dequeue()!)
}

print(queue.peek()!)