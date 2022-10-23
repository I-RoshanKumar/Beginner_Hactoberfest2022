# Python program for the above approach
def square(n) :
	return n * n

def solveWordWrapUtil(words, n, length,
					wordIndex, remLength, memo) :

	# base case for last word
	if (wordIndex == n - 1) :
		memo[wordIndex][remLength] = 0 if (words[wordIndex] < remLength) else square(remLength)
		return memo[wordIndex][remLength]
	

	currWord = words[wordIndex]
	# if word can fit in the remaining line
	if (currWord < remLength) :
		return min(solveWordWrapUsingMemo(
					words, n, length, wordIndex + 1,
					remLength - currWord if (remLength == length) else remLength - currWord - 1,
					memo),

				square(remLength)
					+ solveWordWrapUsingMemo(
						words, n, length, wordIndex + 1,
						length - currWord, memo))
	
	else :
		# if word is kept on next line
		return (square(remLength)
			+ solveWordWrapUsingMemo(
				words, n, length, wordIndex + 1,
				length - currWord, memo))
	
def solveWordWrapUsingMemo(words, n, length,
						wordIndex, remLength, memo) :
								
	if (memo[wordIndex][remLength] != -1) :
		return memo[wordIndex][remLength]
	
	memo[wordIndex][remLength] = (solveWordWrapUtil(
		words, n, length, wordIndex, remLength, memo))
	return memo[wordIndex][remLength]

def solveWordWrap(words, n, k) :
	memo = [[10]* (k + 1)]* n
	return solveWordWrapUsingMemo(words, n, k, 0, k, memo)

# Driver Code
if __name__ == "__main__":

	words = [ 3, 2, 2, 5 ]
	n = len(words)
	k = 6

	print(solveWordWrap(words, n, k))
	

