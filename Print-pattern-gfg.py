def print_sequence(N):
    current = N
    step = -5

    while current != N or step < 5:
        print(current, end=" ")
        
        if current <= 0 and step < 5:
            step = 5
        current += step

# Example usage
n = int(input("Enter the value of N: "))
print_sequence(n)
