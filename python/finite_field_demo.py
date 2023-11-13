import matplotlib.pyplot as plt
import numpy as np

# Define the range for x
x = x = np.arange(0, 100, 1) # 400 points between 0 and 10

# Compute f(x) for each x in the range
f_x = (x**2 + 60 * x + 100) % 97

# Create the plot
plt.figure(figsize=(10, 6))
plt.scatter(x, f_x, label='f(x) = x^2 + 60 * x + 100')

# Add title and labels
plt.title('Plot of f(x) = x**2 + 60 * x + 100 over Z_97')
plt.xlabel('x')
plt.ylabel('f(x)')


# Add a legend
plt.legend()

plt.savefig('discrete.png', format='png')