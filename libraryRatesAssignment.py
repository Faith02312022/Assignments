#lets get the user input and make it a callable function
def getUserInput():
    print("please give the: Book Id, due date and return date")
    #make the variables accessible outside the function by making them global using the keyword global
    global bookID
    global dueDate
    global returnDate
    bookID = int(input("Enter the Book ID: \n >>"))
    dueDate = int(input("Enter the Due Date: \n >>"))
    returnDate = int(input("Enter the Return Date: \n >>"))
    
#call the function    
getUserInput()

#calculate the days overdue
daysOverdue = returnDate - dueDate

# make a function to print the values of the 
def printValues():
    print(f"""Okay, here are your values:
    Book ID: {bookID}
    Due date: {dueDate}
    Return date: {returnDate}
    Days overdue: {daysOverdue}
    Fine rate: {rate}
    Fine amount: {fine}
    """)

if(daysOverdue <= 7):
    rate = 20
    fine = daysOverdue * rate
    #rate = fine / daysOverdue
    print(f"Your fine is:{fine}")
    printValues()
    
elif(daysOverdue >= 8 and daysOverdue <= 14):
    rate = 50
    fine = daysOverdue * rate
    #rate = fine / daysOverdue
    print(f"Your fine is:{fine}")
    printValues()
    
elif(daysOverdue >= 15):
    rate = 100
    fine = daysOverdue * rate
    #rate = fine / daysOverdue
    print(f"Your fine is:{fine}")
    printValues()

else:
    getUserInput()
    
