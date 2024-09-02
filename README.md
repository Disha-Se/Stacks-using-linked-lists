Overview

This C++ program implements a stack-based request management system using a linked list. It allows users to add requests to a stack, process (remove) the top request, view the top request, and display all requests in the stack. The stack follows the Last In, First Out (LIFO) principle.

Features

- Add Request: Add a new request to the top of the stack.
- Process Request: Remove and process the request at the top of the stack.
- View Top Request: View the description of the request currently at the top of the stack.
- Display All Requests: Display all requests in the stack from top to bottom.
- Exit Program: Exit the application.

Usage

Upon running the program, you'll be presented with a menu with the following options:

1. Add Request
   - Prompts you to enter a description for the request.
   - The request is added to the top of the stack.

2. Process Request
   - Processes and removes the request at the top of the stack.
   - If the stack is empty, you'll receive a notification.

3. View Top Request
   - Displays the description of the request currently at the top of the stack without removing it.

4. Display All Requests
   - Lists all requests in the stack from top to bottom.

5. Exit
   - Exits the program.

Example Interaction

Menu:
1. Add Request
2. Process Request
3. View Top Request
4. Display All Requests
5. Exit

Enter your choice: 1

Enter request description: Request 1

Request added: Request 1

Menu:
1. Add Request
2. Process Request
3. View Top Request
4. Display All Requests
5. Exit

Enter your choice: 3

Top request is: Request 1

Menu:
1. Add Request
2. Process Request
3. View Top Request
4. Display All Requests
5. Exit

Enter your choice: 4

Current requests in the stack: Request 1

Menu:
1. Add Request
2. Process Request
3. View Top Request
4. Display All Requests
5. Exit

Enter your choice: 2

Processing request: Request 1

Menu:
1. Add Request
2. Process Request
3. View Top Request
4. Display All Requests
5. Exit

Enter your choice: 5
Exiting program.

Memory Management

The program handles memory management by dynamically allocating memory for each request and ensuring all allocated memory is properly freed when the `RequestStack` object is destroyed. This helps to prevent memory leaks.

License

This program is provided under the MIT License. See the [LICENSE] file for more details.

---

Feel free to adjust the file paths, commands, and license details based on your specific requirements and environment.
