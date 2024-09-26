<?php

// ฟังก์ชันสำหรับแสดงหน้าและรวมส่วนประกอบ
function load_view($view) {
    include 'views/header.php';  // รวมส่วน header
    include 'views/navbar.php';  // รวมส่วน navbar
    include 'views/sitebar.php'; // รวมส่วน sidebar (แก้ไขเป็น sidebar ถ้าเขียนผิด)
    include 'views/' . $view . '.php'; // รวมเนื้อหาของหน้า
    include 'views/footer.php';  // รวมส่วน footer
}

// รับ path จาก URL
$path = parse_url($_SERVER['REQUEST_URI'], PHP_URL_PATH);

// Routing แบบง่าย
switch ($path) {
    case '/':
        load_view('home'); // รวมไฟล์ home.php ที่อยู่ในโฟลเดอร์ views
        break;
    // case '/about':
    //     load_view('about');
    //     break;
    // case '/contact':
    //     load_view('contact');
    //     break;
    default:
        http_response_code(404);
        echo "404 Page Not Found";
        break;
}
