class EmptyFile(Exception):

  def __init__(self, *args):
    super().__init__(*args)

class InvalidFieFormat(Exception):

  def __init__(self, *args):
    super().__init__(*args)

def main():

  try :
    with open("data.csv","r") as file:
      lines=file.readlines()
      if len(lines) == 0:
        raise EmptyFile("File is empty !!")
      else:
        no_columns=len(lines[0].split(" "))

        for line in lines:
          if no_columns != len(line.split(" ")) : 
            raise InvalidFieFormat("Invalid File Format !!")
        for line in lines:
          print(" | ".join(line.split(" ")),end="")
          

  except EmptyFile as e:
    print(e)
  except InvalidFieFormat as e:
    print(e)
  except Exception as e:
    print("File not Found !!")

main()