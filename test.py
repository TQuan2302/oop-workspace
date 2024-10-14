import numpy as np

# Define the matrix
A = np.array([[1, 0, 0],
              [2, 1, 2],
              [-1, -2, 5]])

# Calculate the eigenvalues and eigenvectors
eigenvalues, eigenvectors = np.linalg.eig(A)
eigenvalues, eigenvectors
