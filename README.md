# Sneaker's Point Online Shopping Console Application
Overview
This project is a console-based C application that simulates an online shopping experience at "Sneaker's Point," a fictional shoe store. The application allows users to browse and purchase various types of shoes, including casual shoes, slippers, and formal shoes, based on their selected size. The program provides an interactive shopping experience, including a cart system that tracks selected items and calculates the total cost.

## Features
- User Interaction:

The user is welcomed to the store and asked to provide their name and shoe size.
The user is presented with a menu to choose different categories of shoes: Casual, Slippers, and Formal.
For each category, the user can select specific shoe models and confirm their purchase.

- Shopping Cart:

The application maintains a shopping cart where selected items are added along with their quantities and costs.
The user can view the total cost of items in their cart at any point during the shopping session.
The cart can be reviewed before finalizing the purchase.

- Product Categories and Pricing:

Casual Shoes: Converse AllStar (Rs.2500), Vans (Rs.4500), Alexander McQueen (Rs.3500)
Slippers: Gucci (Rs.5000), Skechers (Rs.3000), Crocs (Rs.7000)
Formal Shoes: Loafer (Rs.7000), Blucher (Rs.4000), Derby (Rs.2000)

- Finalization:

The user can choose to continue shopping or finalize their purchase at any point.
Upon finalization, the application displays the items purchased, their quantities, and the total cost.
A thank you message is displayed, concluding the shopping session.

## How to Run

1. Compile the Program:

Use a C compiler like gcc to compile the code:
```
gcc -o Cproject Cproject.c
```
2. Run the Executable:

After compiling, run the executable to start the application:
```
./Cproject
```
3. Follow the On-Screen Prompts:

The program will guide you through the shopping process with on-screen prompts.
Enter your name and shoe size to begin.
Select categories and items to add to your cart.
Review your cart and finalize the purchase.

## Code Structure
- Main Functionality:

The entire shopping experience is managed within the main() function.
Different sections of code handle various aspects of the program, including user input, item selection, cart management, and final output.

- Data Structures:

The struct items is used to store the names of the selected items.
Arrays are used to manage costs, quantities, and the final cart summary.

## Dependencies

Standard C Libraries: The program relies on standard C libraries such as stdio.h, string.h, and others.
  
## Potential Enhancements

- Dynamic Array Allocation: To manage more items without predefined limits.
- Persistent Data Storage: Implementing file I/O to save and retrieve cart data between sessions.
- Improved User Interface: Adding more user-friendly prompts and error handling.
- Discounts and Offers: Adding features like discount codes or promotional offers.

## Conclusion
This project demonstrates the application of fundamental C programming concepts such as loops, conditionals, arrays, strings, and user input/output handling. It provides a basic yet interactive simulation of an online shopping experience, reinforcing the practical use of these concepts in a real-world scenario.
