Chương trình Quản Lý Sách (C)
📌 Giới thiệu
Đây là chương trình quản lý sách viết bằng ngôn ngữ C, sử dụng struct và các hàm để nhập và xuất thông tin của nhiều cuốn sách.
Chương trình phù hợp cho sinh viên học và thực hành:
Struct trong C
Hàm và truyền tham số
Mảng
Nhập / xuất dữ liệu cơ bản
🧱 Cấu trúc dữ liệu
Mỗi cuốn sách được lưu trữ bằng cấu trúc SACH với các thông tin sau:
Mã sách
Tiêu đề
Tác giả
Năm xuất bản
Giá bán
Số trang
Nhà xuất bản
Loại sách
🔧 Chức năng
Nhập thông tin cho n cuốn sách
Xuất danh sách các cuốn sách ra màn hình
Tách chương trình thành các hàm rõ ràng, dễ hiểu
🛠️ Các hàm sử dụng
Hàm	Chức năng
nhap1Sach()	Nhập thông tin cho 1 cuốn sách
xuat1Sach()	Xuất thông tin 1 cuốn sách
nhapNSach()	Nhập danh sách n cuốn sách
xuatNSach()	Xuất danh sách n cuốn sách
main()	Hàm chính của chương trình
▶️ Biên dịch và chạy chương trình
Biên dịch
gcc main.c -o quanlysach
Chạy chương trình
./quanlysach
🖥️ Cách sử dụng
Nhập số lượng sách cần quản lý
Nhập lần lượt thông tin cho từng cuốn sách theo hướng dẫn
Sau khi nhập xong, chương trình sẽ hiển thị toàn bộ danh sách sách
⚠️ Lưu ý
Chương trình có sử dụng hàm gets() (không an toàn và đã bị loại bỏ trong C chuẩn mới).
👉 Khuyến nghị thay thế bằng fgets().
Số lượng sách tối đa: 100 cuốn
Chương trình chạy trên môi trường console/terminal
🚀 Hướng phát triển
Thêm chức năng tìm kiếm sách theo tên hoặc tác giả
Sắp xếp sách theo giá bán hoặc năm xuất bản
Lưu và đọc dữ liệu từ file
Chỉnh sửa hoặc xóa thông tin sách
📂 Cấu trúc thư mục
├── main.c
└── README.md
👨‍💻 Tác giả
lê thái hồ
