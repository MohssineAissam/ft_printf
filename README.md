# ft_printf - My First `printf`

![C Language](https://img.shields.io/badge/Language-C-blue.svg?style=for-the-badge&logo=c)
![42 School](https://img.shields.io/badge/42/1337-BornToCode-black?style=for-the-badge&logo=42)

This project is the second major assignment in the 42/1337 curriculum. The goal is to recode the C standard library's `printf` function.

This project was a deep dive into **variadic functions** (handling an unknown number of arguments) and the complexities of parsing a format string. It's a key project for understanding how I/O functions work under the hood.

This library is built upon my `libft` project.

---

## 📚 Table of Contents

* [About the Project](#about-the-project)
* [Features Implemented](#features-implemented)
* [How to Use](#how-to-use)

---

## 🎯 About the Project

`ft_printf` is a function that takes a format string and a variable number of arguments, and writes a formatted string to the standard output. The function must return the total number of characters written.

My implementation aims to replicate the behavior of the original `printf`, including:
* **Parsing** the format string (the part after the `%`).
* **Fetching** the correct argument using `va_start`, `va_arg`, and `va_end`.
* **Handling** various flags, widths, and precisions.
* **Printing** the final formatted output.

---

## 🛠 Features Implemented

This `ft_printf` handles the following conversions and features:

### Mandatory Conversions

| Specifier | Output |
| :--- | :--- |
| `%c` | A single character. |
| `%s` | A string of characters. |
| `%p` | The memory address of a pointer, in hexadecimal. |
| `%d` | A decimal number (base 10). |
| `%i` | An integer in base 10 (same as `%d`). |
| `%u` | An unsigned decimal number. |
| `%x` | A hexadecimal number (base 16), lowercase. |
| `%X` | A hexadecimal number (base 16), uppercase. |
| `%%` | A literal percent sign. |

### Bonus Features

*(You can delete any of these you didn't implement!)*

| Feature | Description |
| :--- | :--- |
| **Flags** | |
| `-` | Left-justify the output within the field width. |
| `0` | Pad with zeroes (instead of spaces) when a width is specified. |
| `.` | Precision: specifies a maximum number of digits for `d, i, u, x, X` or a maximum number of characters for `s`. |
| `#` | The "hash" flag: prepends `0x` or `0X` for `%x` and `%X` (if not zero). |
| ` ` | The "space" flag: prepends a space if the number is positive. |
| `+` | The "plus" flag: prepends a `+` sign if the number is positive (overrides the space flag). |
| **Width** | |
| `[number]` | Specifies a minimum field width. The output is padded with spaces (or zeroes) to reach this width. |

---

## 🚀 How to Use

### 1. Prerequisite

This project requires the `libft.a` library. The included `Makefile` is configured to find and compile your `libft` library if it's placed in a `libft/` directory at the root of this project.

### 2. Compile the Library

Run `make` to compile all the source files and create the static library `libftprintf.a`.

```bash
# Clone the repository
git clone [https://github.com/YOUR_USERNAME/YOUR_REPO_NAME.git](https://github.com/YOUR_USERNAME/YOUR_REPO_NAME.git)
cd YOUR_REPO_NAME

# (Optional) If your libft is a submodule or separate:
# git submodule add [URL_TO_YOUR_LIBFT] libft
# Or just copy your libft folder into the root

# Compile
make

