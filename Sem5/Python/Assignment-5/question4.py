import tkinter as tk
from tkinter import messagebox

root=tk.Tk()
root.geometry("1200x1200")
l=tk.Label(root)

var1=tk.Variable()

def age_group_selected():
  global var1
  if var1.get() == "yes":
    l.config(text="You are eligible for voting.")
  else:
    l.config(text="You are not eligible for voting.")
    
r1=tk.Radiobutton(root,text="Less Than 18",value="no",variable=var1,command=age_group_selected)
r2=tk.Radiobutton(root,text="Greater Than 18",value="yes",variable=var1,command=age_group_selected)

r1.pack()
r2.pack()

l.pack()
















root.mainloop()