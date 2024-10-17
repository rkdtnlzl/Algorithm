let n = Int(readLine()!)!
var queue: [Int] = []
var front = 0

for i in 1...n {
    queue.append(i)
}

while queue.count - front > 1 {
    front += 1
    queue.append(queue[front])
    front += 1
}

print(queue[front])