let dimensions = readLine()!.split(separator: " ").map { Int($0)! }
let rows = dimensions[0], columns = dimensions[1]
var chessBoard: [[Character]] = []

for _ in 0..<rows {
    chessBoard.append(Array(readLine()!))
}

var minimumRepaintCount = 64

for startY in 0...(rows - 8) {
    for startX in 0...(columns - 8) {
        var repaintCountForWhiteStart = 0
        var repaintCountForBlackStart = 0
        
        for y in startY..<startY + 8 {
            for x in startX..<startX + 8 {
                if (y + x) % 2 == 0 {
                    if chessBoard[y][x] == "B" {
                        repaintCountForWhiteStart += 1
                    } else {
                        repaintCountForBlackStart += 1
                    }
                } else {
                    if chessBoard[y][x] == "B" {
                        repaintCountForBlackStart += 1
                    } else {
                        repaintCountForWhiteStart += 1
                    }
                }
            }
        }
        minimumRepaintCount = min(minimumRepaintCount, repaintCountForWhiteStart, repaintCountForBlackStart)
    }
}

print(minimumRepaintCount)
