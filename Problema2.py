
def calcFibonacci(n, evenOrodds = 0):
    """
    Returns the Fibonacci result for n, being:
    - n: last possible value of the succesion
        Example: n = 5 -> 5*10^6

    - evenOrodds = 0: all preceding numbers
    - evenOrodds = 1: all even numbers
    - evenOrodds = 2: all odd numbers

    """
    output = [0, 1]  # Solve first 2 cases
    succ_serial = range(n)
    i=2
    while((output[i - 1] + output[i - 2])<(n)):
        output.append(output[i - 1] + output[i - 2])
        i+=1
    
    if evenOrodds == 0:
        return dict(zip(succ_serial, output))
    elif evenOrodds == 1:
        even_numbers = [num for num in output if num % 2 == 0]
        return dict(zip(range(len(even_numbers)), even_numbers))
    elif evenOrodds == 2:
        odd_numbers = [num for num in output if num % 2 != 0]
        return dict(zip(range(len(odd_numbers)), odd_numbers))

if __name__ == "__main__":

    calcFibonacci(4000000, evenOrodds=1)
    


        

