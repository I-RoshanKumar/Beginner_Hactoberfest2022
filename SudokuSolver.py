'''
Taken help from: - https://www.youtube.com/watch?v=tvP_FZ-D9Ng&t=793s (Kylie Ying)
Here i am tring to solve a sudoku with the help of programming

0: - means that its a blank
'''


import numpy as np

class Solve_sudoku:
    #this perticular function will take argument as list and then convert it as numpy array
    #did not return anything
    def __init__(self, matrix: list) -> None:
        self.Array = np.array(matrix)#converted the simple list to numpy array
    
    def blank(self):
        array = self.Array
        row_count = len(array)#this will get the numbe of rows

        col_count = len(array[0])#this will get the number of columns

        for i in range(row_count):
            for k in range(col_count):#trancversing the elements of array
                if array[i][k] == 0:
                    return i, k #and return the the coordinates in the location
        else:
            return None, None #else return the none none

    def is_valid(self, number: int, row: int, col: int) -> bool:
        #our array
        array = self.Array
        #row
        if number in array[row]:#if gussed number is present in the row
            return False
        
        if number in array.transpose()[col]:#if the number in the column------------------>review once 
            return False
        
        #now we have to check in 3 X 3 matrix
        #step 1 is tho find the starting point of row and column
        
        row_start, col_start = (row // 3) * 3, (col // 3) * 3#this will help us in knowing in which set of rows are matrix is

        for i in range(row_start, row_start + 3):
            for k in range(col_start, col_start + 3):
                if array[i][k] == number:
                    return False
        
        return True#if all above conditions are false
        

    def solve(self):
        array = self.Array #this is the array that we have to solve

        #Task 1 to find blans in the problem

        row, column = self.blank()#the coordinates of the blank in the matrix (row, column)

        if row is None:
            return True, array
        
        for guess in range(1, 10):
                
            if self.is_valid(guess ,row, column):#if the number is valid for the plave then just mutate it in the list
                array[row][column] = guess

                if self.solve()[0]:
                    return True, array

            array[row][column] = 0
        return False, array  

grid = Solve_sudoku([ 
         [7, 2, 0, 5, 0, 0, 0, 0, 0], 
         [5, 0, 0, 0, 4, 0, 6, 0, 0], 
         [0, 8, 0, 1, 0, 0, 0, 0, 0], 
         [0, 0, 0, 0, 0, 3, 0, 0, 9], 
         [0, 4, 3, 0, 0, 0, 0, 0, 0], 
         [0, 0, 0, 0, 0, 6, 0, 5, 0], 
         [0, 0, 1, 6, 0, 0, 4, 0, 7], 
         [0, 0, 0, 0, 0, 9, 0, 0, 0], 
         [0, 9, 0, 0, 0, 0, 0, 2, 0]
          ])#sudoku
print(grid.solve()[1])