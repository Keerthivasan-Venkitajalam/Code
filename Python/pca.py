import cv2
import numpy as np
import os
import zipfile
from io import BytesIO

def read_images_from_zip(zip_file):
    images = []
    with zipfile.ZipFile(zip_file, "r") as zip_ref:
        for file_info in zip_ref.infolist():
            if file_info.filename.endswith(".jpg") or file_info.filename.endswith(".png"):
                with zip_ref.open(file_info.filename) as file:
                    img_data = file.read()
                    img_np = cv2.imdecode(np.frombuffer(img_data, np.uint8), cv2.IMREAD_GRAYSCALE)
                    if img_np is not None:
                        images.append(img_np)
    return images

def compute_average_face(images):
    if not images:
        return None

    height, width = images[0].shape
    num_images = len(images)
    sum_matrix = np.zeros((height, width), dtype=np.float32)

    for img in images:
        sum_matrix += img.astype(np.float32)

    average_face = sum_matrix / num_images
    return average_face

def main():
    zip_file_path = "Python\archive.zip"  # Change this to the actual path of your zip file
    images = read_images_from_zip(zip_file_path)

    if not images:
        print("No images found in the specified zip file.")
        return

    average_face = compute_average_face(images)

    if average_face is not None:
        print("Average face matrix:")
        print(average_face)

if __name__ == "__main__":
    main()
