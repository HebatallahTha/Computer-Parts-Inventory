# Computer Parts Inventory System in C 💻🖥️

## 📌 Description

This **C program** reads data for different computer components (CPU, RAM, and Motherboard) from external text files and displays it in a formatted manner. The program is designed to read and process data about various parts such as:

- **CPU**: Includes the name, ID, model number, price, and speed.
- **RAM**: Includes memory size, speed, and price.
- **Motherboard**: Includes the name, ID, model number, and price.

The program utilizes structured data and file handling to read and display the details of 5 components for each type. The data is read from files `cpu.txt`, `ram.txt`, and `motherboard.txt`.

## ✨ Features

- **File Input**: The program reads component data from text files for CPUs, RAM, and Motherboards.
- **Data Structures**: Uses `struct` to store and organize data for CPUs, RAM, and Motherboards.
- **File Error Handling**: If the program encounters an error opening any file, it terminates with an error message.
- **Formatted Output**: After reading the data, it displays the information in a readable format.

## 📂 File Structure

- `computer_parts_inventory.c`: The C source code file that contains the logic for reading data from files and displaying component information.
- `cpu.txt`: Contains data about CPUs (name, ID, model number, price, speed).
- `ram.txt`: Contains data about RAM (memory size, speed, price).
- `motherboard.txt`: Contains data about Motherboards (name, ID, model number, price).
- `README.md`: This file, containing details about the project.

## 🛠️ How to Run

1. **Clone the repository:**
    ```bash
    git clone <repository_url>
    ```

2. **Navigate into the project directory:**
    ```bash
    cd computer-parts-inventory
    ```

3. **Ensure you have the input files** (`cpu.txt`, `ram.txt`, `motherboard.txt`) in the same directory as the source code.

4. **Compile the C program:**
    ```bash
    gcc computer_parts_inventory.c -o computer_parts_inventory
    ```

5. **Run the program:**
    ```bash
    ./computer_parts_inventory
    ```

## 🔧 Dependencies

- **C Standard Library**: The program uses standard input/output, string handling, and basic file operations from the C Standard Library.

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details. 📝

## 💡 How the Program Works

1. The program first reads the CPU data from `cpu.txt`.
2. It then reads RAM data from `ram.txt`.
3. Finally, it reads the motherboard data from `motherboard.txt`.
4. After reading the data, the program displays all the details for CPUs, RAM, and Motherboards in a structured format.

---

### Example Data Format for Input Files:

**cpu.txt**
```plaintext
Intel Core i9,1,1001,499.99,3.6
AMD Ryzen 7,2,1002,399.99,3.4
Intel Core i7,3,1003,299.99,3.8
AMD Ryzen 5,4,1004,249.99,3.0
Intel Core i5,5,1005,199.99,3.4
...

**ram.txt**
```plaintext
16,3200,80.99
8,2400,45.50
32,3600,150.75
16,2666,65.20
8,2133,35.00

...

**motherboard.txt**
```plaintext
ASUS ROG,1,2001,249.99
MSI B450,2,2002,139.99
Gigabyte Z390,3,2003,179.99
ASRock B550,4,2004,129.99
MSI MAG,5,2005,119.99


...

