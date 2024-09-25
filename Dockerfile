# ใช้ base image
FROM gcc:latest

# ตั้ง working directory
WORKDIR /app

# คัดลอกไฟล์ C code ไปยัง container
COPY code.c .

# คอมไพล์ C code
RUN gcc -o a.out code.c

# ตั้งค่าคำสั่งเริ่มต้น
CMD ["./a.out"]
