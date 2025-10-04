def create_employee_profile(name,salary=None):
  print("Employee Name : ",name)
  if salary == None:
    print("Employee Salary  : ",10000)
  else:
    print("Employee Salary  : ",salary)

create_employee_profile("Maharshi Patel",900000)
create_employee_profile("Raj Sharma")