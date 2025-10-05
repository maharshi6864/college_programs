import tkinter as tk
from tkinter import messagebox

root=tk.Tk()

root.title("Question ------ 1")
root.geometry("1600x1300")
label=tk.Label(root)
label.pack()

def button1_clicked():
  label.config(text="Button was clicked !!")
  messagebox.showinfo("Information", "This is an informational message box!")

button=tk.Button(root,text="Click me !!",command=button1_clicked)

button.pack()
root.mainloop()
