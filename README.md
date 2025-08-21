# Employee Net Salary Calculator

A **C++ payroll program** that calculates the **Net Salary** of employees based on their daily rate and number of days worked. The program accounts for **allowances** and **deductions** to compute **Basic Salary**, **Gross Salary**, and **Net Salary**.

---

## 📌 Features
- Calculates **Basic Salary** (Days × Daily Rate)
- Adds **Allowances**:
  - Fuel Allowance → 15% of Basic Salary
  - Rent Allowance → 20% of Basic Salary
- Applies **Deductions**:
  - Tax → 12% of Basic Salary
  - Social Security (SSNIT) → 14% of Basic Salary
- Computes salaries:
  - **Gross Salary** = Basic Salary + Allowances
  - **Net Salary** = Gross Salary – Deductions
- Supports **multiple employee entries** in a single run

---

## 🧮 Salary Formula

```
Basic Salary     = Number of Days × Daily Rate
Fuel Allowance   = 15% of Basic Salary
Rent Allowance   = 20% of Basic Salary
Tax              = 12% of Basic Salary
Social Security  = 14% of Basic Salary

Gross Salary     = Basic Salary + Fuel Allowance + Rent Allowance
Net Salary       = Gross Salary – (Tax + Social Security)
```

---

## 🚀 How to Run the Program

1. Save the code in a file named `payroll.cpp`.
2. Open a terminal/command prompt and navigate to the file’s directory.
3. Compile the program:
   ```bash
   g++ payroll.cpp -o payroll
   ```
4. Run the program:
   ```bash
   ./payroll
   ```

---

## 🖥️ Sample Output

```
Enter number of employees: 2

Enter employee name: John Doe
Enter number of days worked: 22
Enter daily rate: 100

--- Salary Details for John Doe ---
Basic Salary:      2200.00
Fuel Allowance:    330.00
Rent Allowance:    440.00
Gross Salary:      2970.00
Tax:               264.00
Social Security:   308.00
Net Salary:        2398.00

Enter employee name: Jane Smith
Enter number of days worked: 18
Enter daily rate: 120

--- Salary Details for Jane Smith ---
Basic Salary:      2160.00
Fuel Allowance:    324.00
Rent Allowance:    432.00
Gross Salary:      2916.00
Tax:               259.20
Social Security:   302.40
Net Salary:        2354.40

--- All calculations complete. ---
```

---

## 👤 Author

Kweku Nartey Ablakwa

---

## 📄 License

This project is open source and free to use.
