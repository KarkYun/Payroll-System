# Employee Net Salary Calculator

A **C++ payroll program** that calculates the **Net Salary** of employees based on their daily rate and number of days worked.  
The program accounts for **allowances** and **deductions** to compute **Basic Salary**, **Gross Salary**, and **Net Salary**.  

---

## 📌 Features
- ✅ Calculates **Basic Salary** (Days × Daily Rate).  
- ✅ Adds **Allowances**:  
  - Fuel Allowance → 15% of Basic Salary  
  - Rent Allowance → 20% of Basic Salary  
- ✅ Applies **Deductions**:  
  - Tax → 12% of Basic Salary  
  - Social Security (SSNIT) → 14% of Basic Salary  
- ✅ Computes salaries:  
  - **Gross Salary** = Basic Salary + Allowances  
  - **Net Salary** = Gross Salary – Deductions  
- ✅ Supports **multiple employee entries** in a single run.  

---

## 🧮 Salary Formula
```text
Basic Salary     = Number of Days × Daily Rate
Fuel Allowance   = 15% of Basic Salary
Rent Allowance   = 20% of Basic Salary
Tax              = 12% of Basic Salary
Social Security  = 14% of Basic Salary

Gross Salary     = Basic Salary + Fuel Allowance + Rent Allowance
Net Salary       = Gross Salary – (Tax + Social Security)

## 🚀 How to Run the Program
1. Save the code in a file named `salary.cpp`.
2. Open a terminal/command prompt and navigate to the file’s directory.
3. Compile the program:
   ```bash
   g++ salary.cpp -o salary
