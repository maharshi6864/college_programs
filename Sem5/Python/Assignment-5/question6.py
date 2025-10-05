import tkinter as tk
from tkinter import messagebox

root=tk.Tk()
root.geometry("1200x1200")

but1=tk.Button(root,text="Red",background="red")
but2=tk.Button(root,text="Yellow",background="yellow")
but3=tk.Button(root,text="Pink",background="pink")
but4=tk.Button(root,text="Green",background="green")
but5=tk.Button(root,text="Purple",background="purple")
but6=tk.Button(root,text="Orange",background="orange")
but7=tk.Button(root,text="Blue",background="blue")

but1.pack()
but2.pack()
but3.pack()
but4.pack()
but5.pack()
but6.pack()
but7.pack()


root.mainloop()
