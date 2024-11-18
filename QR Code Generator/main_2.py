import qrcode
from PIL import Image
qr=qrcode.QRCode(version=1, error_correction=qrcode.constants.ERROR_CORRECT_H, box_size=10, border=10)
qr.add_data("https://sites.google.com/d/1_YJPf2y5KWjRYVi0jjLPjpYYbHBZTRa2/p/1dNaEHRi9ur6Vo7IxFHPrKbOiTFchFQZR/edit?pli=1")
qr.make(fit=True)
img=qr.make_image(fill_colour="red", back_colour="blue")
img.save("wscube_web.png")
