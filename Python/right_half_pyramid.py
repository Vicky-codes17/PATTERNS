#Printing Star Pattern right_half
num_rows = int(input("Enter the number of rows :"))

#Function to print right_half_pyramid
def right_half_pyramid(rows):
    #Loop to print rows
    for i in range(1, rows + 1):
        print("* "*i)

#Call the function
right_half_pyramid(num_rows)