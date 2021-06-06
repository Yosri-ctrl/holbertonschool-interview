#!/usr/bin/python3
""" rotate 2d matrix 90 degre
"""


def rotate_2d_matrix(matrix):
  """ rotate 2d matrix 
  """
  copy = matrix.copy()
  for col in range(len(matrix[0])):
    tmp = []
    for row in reversed(copy):
      tmp.append(row[col])
      matrix[col] = tmp
