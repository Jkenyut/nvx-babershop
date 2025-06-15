# NVX Barbershop Console Application

<h3 align="center">✂️ A C++ Console Application for Barbershop Order Management ✂️</h3>

<p align="center">
  A console-based application for managing customer orders, featuring service selection, data persistence to text files, and search/sort functionalities.
</p>

<p align="center">
  <!-- Badges/Shields -->
  <img src="https://img.shields.io/badge/license-MIT-blue.svg" alt="License">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue.svg?logo=c%2B%2B" alt="C++">
  <img src="https://img.shields.io/badge/Platform-Console-lightgrey.svg" alt="Console Application">
</p>

---

## About The Project

**NVX Barbershop Console Application** is a C++ program designed to manage customer orders for a barbershop. It provides a menu-driven interface for users to select services, input customer data, and save order information to text files. The application also includes features for viewing, deleting, searching, and sorting customer data, making it a complete, self-contained management tool for educational purposes.

_This project demonstrates basic file handling, sorting, searching, and menu-driven programming in C++._

## ✨ Features

-   **Service Categories:** Organize orders into three distinct categories:
    -   Adult (Dewasa)
    -   Child (Anak)
    -   Colour/Highlight Packages
-   **Order Management:**
    -   Collects customer name, phone number, and address.
    -   Confirms order details before saving to ensure accuracy.
-   **Data Persistence:**
    -   Saves order data to separate text files for each category.
    -   Provides functionality to display and delete saved records.
-   **Search & Sort:**
    -   Implements **binary search** for finding specific options.
    -   Uses **bubble sort** for organizing data.
-   **User-Friendly Console UI:**
    -   Clear, menu-based navigation.
    -   Includes input validation and error handling for a smoother experience.

## 🚀 How to Run

### 1. Prerequisites
- A C++ compiler (e.g., g++, MinGW, or the compiler included with Visual Studio).

### 2. Compile the Program
Open a terminal or command prompt and use a C++ compiler to compile the source code.

-   **On Windows (using g++):**
    ```bash
    g++ main.cpp -o nvx-barbershop.exe
    ```
-   **On macOS/Linux:**
    ```bash
    g++ main.cpp -o nvx-barbershop
    ```

### 3. Run the Executable
-   **On Windows:**
    ```bash
    .\nvx-barbershop.exe
    ```
-   **On macOS/Linux:**
    ```bash
    ./nvx-barbershop
    ```

## 📝 Notes

-   The program uses the following text files to store data, which will be created in the same directory as the executable:
    -   `Data Kategori Dewasa.txt`
    -   `Data Kategori Anak.txt`
    -   `Data Kategori Colour.txt`
-   The application is written in **Indonesian**.
-   **Cross-Platform Compatibility:** The code uses some Windows-specific headers (`<conio.h>`, `<windows.h>`). For seamless compilation on macOS or Linux, these headers and their related function calls (like `system("cls")` or `getch()`) may need to be replaced with platform-agnostic alternatives.


## 👨‍💻 Authors

-   **Satria Nur Saputro** (19102296)
-   **M. Aldi Yudhi Pradana** (19102252)

## 🙏 Acknowledgements

A special thank you to [Nafi Ilham Hamami](https://id.linkedin.com/in/nafi-ilham-ha) for the guidance and support provided throughout the development of this project.

## 🤝 Contributing

Contributions are welcome! If you have ideas for improvements:

1.  **Fork** the repository.
2.  Create your **Feature Branch** (`git checkout -b feature/YourAmazingFeature`).
3.  **Commit** your changes (`git commit -m 'feat: Add YourAmazingFeature'`).
4.  **Push** to the Branch (`git push origin feature/YourAmazingFeature`).
5.  Open a **Pull Request**.

## 📄 License

This project is licensed under the [MIT License](https://opensource.org/license/mit). See the `LICENSE` file for details.

## 📬 Contact

**Satria Nur Saputro**
- Email: [satrianursaputro06@gmail.com](mailto:satrianursaputro06@gmail.com)