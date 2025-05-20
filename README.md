# NVX Barbershop Console Application

This is a C++ console application for managing customer orders at NVX Barbershop. The program allows users to select services for adults, children, and color/highlight packages, input their data, and save order information to text files. It also provides features for searching, sorting, and managing customer data.

## Features

- **Service Categories:**
  - Adult (Dewasa)
  - Child (Anak)
  - Colour/Highlight
- **Order Input:**
  - Collects customer name, phone number, and address
  - Confirms order details before saving
- **Data Management:**
  - Saves order data to text files by category
  - Displays and deletes saved data
- **Search & Sort:**
  - Binary search and bubble sort for color/highlight options
- **User Interface:**
  - Console-based menu navigation
  - Input validation and error handling

## How to Run

1. **Compile the Program:**
   - Use a C++ compiler (e.g., g++, Visual Studio) to compile `mainan - Copy.cpp`.
   - Example (on Windows):
     ```
     g++ "mainan - Copy.cpp" -o nvx-barbershop.exe
     ```
   - Example (on macOS/Linux):
     ```
     g++ "mainan - Copy.cpp" -o nvx-barbershop
     ```
2. **Run the Program:**
   - On Windows:
     ```
     nvx-barbershop.exe
     ```
   - On macOS/Linux:
     ```
     ./nvx-barbershop
     ```

## Notes

- The program uses text files to store order data:
  - `Data Kategori Dewasa.txt`
  - `Data Kategori Anak.txt`
  - `Data Kategori Colour.txt`
- Some Windows-specific headers (e.g., `<conio.h>`, `<windows.h>`) are used. For cross-platform compatibility, you may need to adjust or remove these includes.
- The application is written in Indonesian.

## Authors

- Satria Nur Saputro (19102296)
- M. Aldi Yudhi Pradana (19102252)

---

_This project is for educational purposes and demonstrates basic file handling, sorting, searching, and menu-driven programming in C++._

## Contributing

We welcome contributions! To contribute:

1. Fork the repository.
2. Create a feature branch:
   ```bash
   git checkout -b feature/your-feature
   ```
3. Commit your changes:
   ```bash
   git commit -m "Describe your feature"
   ```
4. Push your branch:
   ```bash
   git push origin feature/your-feature
   ```
5. Open a pull request.

## License

This project is licensed under the [MIT License](https://opensource.org/license/mit). See the LICENSE file for details.

## Contact

For questions, suggestions, or feedback, please contact:

- Satria Nur Saputro  
  [satrianursaputro06@gmail.com](mailto:satrianursaputro06@gmail.com)
