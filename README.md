# 📦 CMakeTemplate

[![Build](https://img.shields.io/badge/build-passing-brightgreen)]()
[![Tests](https://img.shields.io/badge/tests-passing-brightgreen)]()
[![CMake](https://img.shields.io/badge/CMake-3.10+-blue)]()
[![Language](https://img.shields.io/badge/language-C%2B%2B-blue)]()
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

- A simple and reusable repository for setting up C++ projects with CMake.
- Automatically fetches [Catch2](https://github.com/catchorg/Catch2) for testing support.
- Provides a basic `.gitingore` file which handles all major build environments.

## ✅ Requirements

- CMake (>= 3.10).
- A working C++ compiler.

## 📁 Project Structure

```text
📦 CMakeTemplate
├── 📂 include             # Public headers
│   └── foo.hpp 
├── 📂 src                 # Library / Executable Code
│   ├── foo.cpp
│   ├── main.cpp
│   └── CMakeLists.txt
├── 📂 tests               # Unit Tests (Catch2)
│   ├── test_foo.cpp
│   └── CMakeLists.txt
├── 🙈 .gitignore          # Build artifacts, editor junk, etc.
├── ⚙️ CMakeLists.txt      # Root build config
└── 📖 README.md           # You are here
```

## 🛠️ Using the Template

### 1. Clone the Repository

```bash
git clone --depth 1 https://github.com/DarkiCraft/CMakeTemplate.git <project-name>
cd <project-name>
```
Replace `<project-name>` with your own.

### 2. Reinitialize Git

```bash
rm -rf .git

git init
git add .
git commit -m "Initial commit based on DarkiCraft/CMakeTemplate"
```

### 3. Push to GitHub

```bash
git remote add origin https://github.com/<your-username>/<project-name>.git
git push -u origin main
```
Replace `<your-username>` and `<project-name>` with your own.

**Note:** You might be prompted to enter your **GitHub username** and **PAT (Personal Access Token)**. Make sure you have either set up [HTTPS PAT](https://github.com/settings/tokens) or [SSH Keys](https://docs.github.com/en/authentication/connecting-to-github-with-ssh).

## 🧱 Building the Project

### 1. Initialize Build

```bash
mkdir build
cmake -S . -B build
```

### 2. Build Application

```bash
cmake --build build
```

### 3. Run Application / Tests

```bash
./build/bin/App           # Run the application  
ctest --test-dir build    # Run tests (Catch2)
```

## 📝 License

This project is distributed under the [MIT License](LICENSE).