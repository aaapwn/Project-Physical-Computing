# Smart Bin (ถังขยะอัจฉริยะ) 
   โครงการนี้เป็นการประดิษฐ์ ถังขยะอัจฉริยะ มีวัตถุประสงค์เพื่อศึกษาเกี่ยวกับไมโครคอนโทรลเลอร์ และอำนวยความสะดวกแก่คนที่มาทิ้งขยะไม่ต้องสัมผัสตัวถังขยะโดยตรง การประดิษฐ์ถังขยะอัจฉริยะใช้อุปกรณ์หลัก 2 อย่าง คือ เซนเซอร์ตรวจจับวัตถุ และ micro servo sg90 วิธีการเริ่มจากการต่อเซนเซอร์ตรวจจับวัตถุ และ micro servo sg90 เข้ากับบอร์ดArduino จากนั้นประกอบเข้ากับถังขยะ นำบอร์ดต่อเข้ากับโค้ดที่เขียนเตรียมไว้ 
ผลการดำเนินงานพบว่าสิ่งประดิษฐ์ ถังขยะอัจฉริยะ สามารถเปิดปิดฝาถังขยะได้อัตโนมัติ ช่วยลดการสัมผัสได้จริง สะดวกต่อการใช้งาน 
# Poster
<img src="https://github.com/aaapwn/Project-Physical-Computing/blob/main/Poster.png" width="full">

# อุปกรณ์
- Micro servo sg90
<img src="https://github.com/aaapwn/Project-Physical-Computing/blob/main/servo.jpg" width="150px">
- E18-D80NK
<img src="https://github.com/aaapwn/Project-Physical-Computing/blob/main/E18-D80NK.jpg" width="150px">
- Arduino UNO
<img src="https://github.com/aaapwn/Project-Physical-Computing/blob/main/Arduino%20UNO.jpg" width="150px">
- Jumper wire
<img src="https://github.com/aaapwn/Project-Physical-Computing/blob/main/Jumper%20wire.jpg" width="150px">
- ถังขยะ
<img src="https://github.com/aaapwn/Project-Physical-Computing/blob/main/ถังขยะ.jpg" width="150px">

# วิธีการทำงาน
1. เมื่อนำขยะเข้าใกล้เซนเซอร์ตรวจจับวัตถุ(E18-D80NK) เซนเซอร์จะทำงาน ขึ้น bit 1
2. เมื่อขึ้น bit 1 มอเตอร์จะหมุน75องศา เพื่อผลักให้ฝาถังขยะเปิด
3. ระบบจะค้าง (delay) 4วิ เผื่อเวลานำขยะทิ้ง
4. หลังจากนั้น ระบบจะขึ้น bit 0 และมอเตอร์จะหมุนกลับมา 0องศา เพื่อผลักฝาปิดกลับที่เดิม
<img src="https://github.com/aaapwn/Project-Physical-Computing/blob/main/circuit.png" width="full">

# Website
https://aaapwn.github.io/Project-Physical-Computing/

# VDO สาธิต
https://www.youtube.com/embed/pGg8_VedjBU?si=Ip7SB6kBgfwS4Jb7

# สมาชิกในกลุ่ม
1. นายชินาธิป หวู รหัส 65070052
2. นางสาวชุติกาญจน์ ใจคง รหัส 65070053
3. นายภูวิศ นุ่นปาน รหัส 65070185
4. นายสุเมธา ปานกลาง รหัส 65070243

