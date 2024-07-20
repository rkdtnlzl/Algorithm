import Foundation

// 최대 공약수를 구하는 함수
func gcd(_ a: Int, _ b: Int) -> Int {
    var x = a
    var y = b
    while y != 0 {
        let temp = y
        y = x % y
        x = temp
    }
    return x
}

func lcm(_ a: Int, _ b: Int) -> Int {
    return a * b / gcd(a, b)
}

let input = readLine()!
let numbers = input.split(separator: " ").map { Int($0)! }
let a = numbers[0]
let b = numbers[1]

print(gcd(a, b))
print(lcm(a, b))