import tkinter as tk
from tkinter import messagebox

root=tk.Tk()

root.title("Question ------ 1")
root.geometry("1600x1300")
label=tk.Label(root,)
var=tk.Variable(root)

def button1_clicked():
  global var
  messagebox.showinfo(f"Message",f"You have Selected {var.get()}")
  label.config(text=f"You have selected : {var.get()}")

r1=tk.Radiobutton(root,value="Python",variable=var,text="Python",command=button1_clicked)
r2=tk.Radiobutton(root,value="PHP",variable=var,text="PHP",command=button1_clicked)
r3=tk.Radiobutton(root,value="JAVA",variable=var,text="JAVA",command=button1_clicked)
r4=tk.Radiobutton(root,value="C++",variable=var,text="C++",command=button1_clicked)
r5=tk.Radiobutton(root,value="C",variable=var,text="C",command=button1_clicked)



r1.pack()
r2.pack()
r3.pack()
r4.pack()
r5.pack()

label.pack()

root.mainloop()


