# LAB 2 - GROUP 1 - CRN: 74026

## Contributors 

- Harsh Tamakuwala - ID: 100824220
- Syed Nasir Hussain Naqvi - ID: 100809447
- David Hanna - ID: 100828635

## Overview
`myshell` is a basic command-line interpreter designed to replicate fundamental Unix shell functionalities. This README offers comprehensive guidance for users to effectively navigate and utilize `myshell`.

## Key Features
`myshell` offers several internal commands:
1. `cd <directory>`: Changes the current default directory to `<directory>`. If `<directory>` is unspecified, the current directory is displayed. An appropriate error message is shown if `<directory>` does not exist. This command also updates the `PWD` environment variable.
2. `clr`: Clears the screen.
3. `dir <directory>`: Lists the contents of directory `<directory>`.
4. `environ`: Displays all environment strings.
5. `echo <comment>`: Shows `<comment>` on the display followed by a new line. Multiple spaces/tabs are reduced to a single space.
6. `help`: Exhibits the user manual using the more filter.
7. `pause`: Halts operation of the shell until 'Enter' is pressed.
8. `quit`: Exits the shell.

`myshell` also supports external commands through the fork and exec method:
- If the command is recognized as an internal command, it is executed directly.
- If it's not an internal command, the shell forks a child process.
- In the child process, the parent environment variable is set using the `setenv` function.
- The external command is then executed using `execvp`.
- The parent process waits for the child process to finish using `wait(NULL)`.

Try these commands to explore:
1. `pwd`: Displays the current working directory.
2. `ls`: Lists the contents of the current directory.
3. `echo`: Prints a message.
4. `date`: Shows the current date and time.

Additionally, `myshell` is capable of taking command line input from a file. 

To test this functionality:
- Create a simple batch file named `batchfile` with desired commands.
- Run the shell in batch mode using:
  `./myshell batchfile`

# Installation & Usage
To install `myshell`, follow these steps:
1. Clone the repository to your local machine.
   ```bash
   git clone OS_LAB2-MyShell
2. Navigate to the directory containing the source code.
   ```bash
   cd myshell
3. Compile the source code using the provided Makefile.
    ```bash
   make
4. Run the compiled executable file.
   ```bash
   ./myshell

## I/O Redirection
`myshell` supports I/O redirection using the following symbols:
- `<`: Redirects input from a file.
- `>`: Redirects output to a file.
- `>>`: Appends output to a file.

## Exiting `myshell`
To exit `myshell`, simply type the `quit` command or press `Ctrl + C`.
