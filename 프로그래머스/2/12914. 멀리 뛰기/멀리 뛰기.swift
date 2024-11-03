func solution(_ n:Int) -> Int {
    var first = 0
    var second = 1
    for i in 0..<n {
        let temp = first + second
        first = second
        second = temp % 1234567
    }
    return second
}