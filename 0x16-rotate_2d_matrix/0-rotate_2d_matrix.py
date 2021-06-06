#!/usr/bin/python3
""" rotate 2d matrix 90 degre
"""


def rotate_2d_matrix(matrix):
  """ rotate 2d matrix 
  """
  for i in range(len(matrix)):
    for j in range(i,len(matrix)):
      matrix[i][j], matrix[j][i] = matrix[j][i],matrix[i][j]
  
  for i in range (len(matrix)):
    k = len(matrix) - 1
    for j in range(0,k):
      matrix[i][j], matrix[i][k] = matrix[i][k], matrix[i][j]
      k -= 1
