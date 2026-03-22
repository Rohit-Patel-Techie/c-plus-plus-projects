# 🎓 DU Smart SGPA Calculator (C++)

A clean, modular, and scalable **SGPA (Semester Grade Point Average) Calculator** built using **C++**, based on the **Delhi University (DU) CBCS grading system**.

This project is designed with a **professional multi-file architecture**, making it a great example of structured C++ development for beginners to intermediate learners.

---

## 📌 Features

- ✅ DU-based grading system (O, A+, A, B+, B, C, D, F)
- ✅ Accurate SGPA calculation
- ✅ Supports multi-word subject names (e.g., "Data Engineering")
- ✅ Input validation (credits & grades)
- ✅ Modular code structure (Header + Source files)
- ✅ Clean and readable terminal UI

---

## 🖼️ Preview

![SGPA Calculator Preview](/DU%20Smart%20SGPA%20Calculator/img-preview-01.png)

---

## 🏗️ Project Structure
```bash
DU-Smart-SGPA-Calculator/
│
├── main.cpp # Entry point of the program
├── Calculator.cpp # SGPA calculation logic
├── Calculator.h
├── GradeUtils.cpp # Grade → Grade Point conversion
├── GradeUtils.h
├── Subject.h # Subject data structure
├── img-preview-01.png # Project preview image
└── README.md


---

## ⚙️ How to Run

### ▶️ Compile (using g++)

```bash
g++ main.cpp Calculator.cpp GradeUtils.cpp -o sgpa

▶️ Run
./sgpa
```

## 🧠 How It Works
1. User inputs:
    1. Course names
    2. Credits
    3. Grades
2. Grades are converted into grade points using DU standards
3. SGPA is calculated using:
    1. SGPA = (Σ (Credit × Grade Point)) / (Total Credits)

## 📊 Grade Mapping (DU System)

| Grade  | Grade Point |
| ------------- |:-------------:|
| O    ` | 10    |
| A+     | 9     |
| A      | 8     |
| B+     | 7     |
| B      | 6     |
| C      | 5     |
| D      | 4     |
| F      | 0     |

## 🚀 Future Improvements
1. 📈 CGPA Calculator (multi-semester support)
2. 💾 Save results to file
3. 📂 Load previous records
4. 🖥️ GUI version (Qt / Web-based)
5. 🏫 Multi-university grading support

## 💡 What I Learned
1. Struct-based design in C++S
2. Header & source file separation
3. Modular programming
4. Input validation & error handling
5. Real-world project architecture



