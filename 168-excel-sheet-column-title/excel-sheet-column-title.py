class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        out = []
        while columnNumber > 0:
            columnNumber -= 1
            out.append(self.letter(columnNumber % 26 + 1))
            columnNumber //= 26
        return ''.join(out[::-1])

    def letter(self, n: int) -> str:
        return chr(n + 64)
