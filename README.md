# bank
This is a simple project of bank.
Author : Umesh

# Simple Banking System

This is a simple C program (`bank.c`) that simulates a basic banking system, allowing users to deposit, withdraw, and check their balance. It's a text-based interface.

## Getting Started

To run this program, you need a C compiler installed on your system. You can compile and run it using the following commands:

```bash
gcc -o bank bank.c
./bank
<ul>
 <li>Usage </ul> </li>
When you run the program, you'll be greeted with a welcome message.

You can then choose from the following options:

1: Deposit
2: Check Available Balance
3: Withdraw
0: Exit
If you choose 1, you'll be prompted to enter the amount to deposit. Make sure it's a positive number.

If you choose 3, you'll be prompted to enter the amount to withdraw. Ensure that you have sufficient balance for the withdrawal.

Choosing 2 will display your current available balance.

Choosing 0 will exit the program with a thank you message.