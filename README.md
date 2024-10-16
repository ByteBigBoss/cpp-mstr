####  **Environment Setup in VS Code:**

  

1.  **Install C++ Compiler:**

 - For **Windows**, install **MinGW** (Minimalist GNU for Windows).

 - Download from [MinGW](https://www.msys2.org/). [Direct Link](https://github.com/msys2/msys2-installer/releases/download/2024-01-13/msys2-x86_64-20240113.exe)

 - Read Documentation. [VS Code Docs](https://code.visualstudio.com/docs/cpp/config-mingw)

 - When complete, ensure the **Run MSYS2 now** box is checked and select **Finish**. This will open a MSYS2 terminal window for you.
 - In this terminal, install the MinGW-w64 toolchain by running the following command:
 - `pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
`
 - Accept the default number of packages in the `toolchain` group by pressing **Enter**.
 - Enter  `Y`  when prompted whether to proceed with the installation.
 ---
 - For **Mac/Linux**, you can use **GCC** (usually pre-installed on Linux, but on Mac you can install it via Homebrew: `brew install gcc`).
 ---
2.  **Add the path of your MinGW-w64 `bin` folder to the Windows `PATH` environment variable by using the following steps**
-  In the Windows search bar, type  **Settings**  to open your Windows Settings.
-  Search for  **Edit environment variables for your account**.
-  In your  **User variables**, select the  `Path`  variable and then select  **Edit**.
-  Select  **New**  and add the MinGW-w64 destination folder you recorded during the installation process to the list. If you used the default settings above, then this will be the path:  `C:\msys64\ucrt64\bin`.
- Select  **OK**, and then select  **OK**  again in the  **Environment Variables**  window to update the  `PATH`  environment variable. You have to reopen any console windows for the updated  `PATH`  environment variable to be available.

3.  **Install VS Code Extensions:**

- Install the **C/C++ extension** by Microsoft. Go to the **Extensions** panel (on the sidebar) and search for **C/C++**. Install it.

- Install **Code Runner** for quick code execution.

4.  **Configure the Compiler:**

- Open VS Code, go to **Terminal** > **New Terminal**, and type:
```bash
g++ --version
```
or
```bash
gcc --version
```
If installed properly, the terminal should show the GCC version. If not, check if the compiler's path is set correctly.

5. **Confirm compiler pickup by vs code extension `C/C++`**
- Open Visual Studio Code
- In the command palatte choose the `C/C++: Select IntelliSense Configuration...`
- If you see `Use gcc.exe` from dropdown menu, then all set.
  

###  **Create Your First C++ Project in VS Code:**

1.  **Setting Up a C++ Project in VS Code:**

- Create a folder for your project, then open this folder in VS Code.

- Create a new file: `main.cpp`.  

 **Step 1: Write a Simple "Hello, World!" Program** in `main.cpp`:

```cpp
#include <iostream>
using namespace std;

int main() {

cout << "Hello, World!" << endl;

return 0;

}
```
 **Step 2: Compile and Run:**

1.  Open  `main.cpp`  so that it is the active file.
    
2.  Press the play button in the top right corner of the editor.

3. Choose **C/C++: g++.exe build and debug active file** from the list of detected compilers on your system.

4. After the build succeeds, your program's output will appear in the integrated **Terminal**.

or
- Open the terminal in VS Code and type:

```bash
g++ main.cpp -o main
```

`./main`

This will compile `main.cpp` and create an executable named `main`. Running `./main` will display "Hello, World!" in the terminal.
