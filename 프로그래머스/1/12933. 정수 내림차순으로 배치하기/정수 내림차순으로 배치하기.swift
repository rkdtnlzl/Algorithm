func solution(_ n:Int64) -> Int64 {
    let str = String(n)
    let sorted = String(str.sorted(by: >))
    
    return Int64(sorted)!
}