class Phone:
  def __init__(self):
    print("Phone class Object Intialized")
  def clicking_images(self):
    print("Clicking Images From Phone")

class Camera:
  def __init__(self):
    print("Camera class object Intialized")
  def clicking_images(self):
    print("Clicking Images From Camera")

class SmartDevice(Phone,Camera):
  def __init__(self):
    super().__init__()

  def clicking_images(self):
    return super().clicking_images()

  def clicking_images_from_camera(self):
    return Camera.clicking_images(self)
def main():
  smart_device_obj=SmartDevice()
  smart_device_obj.clicking_images()
  smart_device_obj.clicking_images_from_camera()

main()