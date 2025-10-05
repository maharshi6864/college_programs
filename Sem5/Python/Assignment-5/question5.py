import tkinter as tk

root = tk.Tk()
root.geometry("1200x1200")

l=tk.Label(root,text="PLease Select...")
l1=tk.Label(root)
var1=tk.Variable(root)

def show_value():
  if var1.get()=="Male":
    l1.config(text="You have Choosed Male as your Gender !")  
  else:
    l1.config(text="You have Choosed Female as your Gender !")


def close_program():
  exit()


r1=tk.Radiobutton(root,text="Male",variable=var1,value="Male")
r2=tk.Radiobutton(root,text="Female",variable=var1,value="Female")
but=tk.Button(root,text="Show",command=show_value)
but1=tk.Button(root,command=close_program,text="Close")


l.pack()
r1.pack()
r2.pack()
l1.pack()
but.pack()
but1.pack()

root.mainloop()


