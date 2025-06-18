# Smart-Guard: AI-powered Home Security System

Smart-Guard is an AI-powered IoT-based home security system designed to enhance residential safety using facial recognition, access monitoring, and real-time video processing. The system identifies and logs known housemates while detecting and reporting intruders via email alerts. A simple GUI built using Qt (C++) provides interactive control and monitoring.

---

## 🔧 Features

- Facial Detection & Recognition using Python
- Real-time video processing from webcam/CCTV
- Entry logging for known housemates
- Intruder detection with behavior analysis
- Email alerts with images via SMTP
- GUI with housemate management & secure profile access
- Voice responses on verification success/failure
- Integration with smart home devices

---

## 🧠 Methodology

### 📸 Face Detection
CCTV footage is continuously captured, and facial regions are identified using Python-based detection algorithms.

### 🧑‍🦰 Face Recognition
Extracted faces are matched against a preloaded housemate database using facial feature encodings and landmarks.

### 🔍 Classification

- **Housemates**: Verified and logged with timestamp.
- **Strangers**: Unrecognized faces staring >5 seconds trigger alerts.

### 📩 Report Generation & Notification
For strangers, a report (with image & timestamp) is sent to the homeowner via email using SMTP.

### 🔁 Continuous Learning & Smart Integration
The system adapts over time to improve recognition and integrates with smart home devices like locks or sensors.

---

## 💻 GUI Pipeline

### Step 1: Running the Application

Run the `.exe` file to launch the Smart-Guard application.

### Step 2: User Verification

Click the **‘Verify’** button to begin the verification process.

![Main page of Graphical User Interface](images/Main_page_of_Graphical_User_Interface.jpg)

### Step 3: Terminal Background Operations

Behind the scenes:
- Virtual environment is activated
- `face_recognition.py` script is executed

### Step 4: Load Housemate Images

Face encodings of housemates are preloaded for comparison.

![Loading Housemates' Faces](images/Loading_Housemates_Faces.jpg)

### Step 5: Real-time Video Capture

Webcam captures real-time frames, which are processed for recognition.

### Step 6: Face Comparison & Classification

Each frame is checked to determine if the face matches a known housemate.

### Step 7: GUI Output

- **Housemate**: Green screen with a voice greeting.

![Verification Successful - Entry Successful](images/Verification_Successful_-_Entry_Successful.jpg)

- **Stranger**: Red screen with a warning message and voice alert.

![Entry denied – Verification Denied](images/Entry_denied_–_Verification_Denied.jpg)

### Step 8: Email Alert to Homeowner

An email with intruder image and timestamp is sent to the registered email.

![Intruder email notification](images/Intruder_email_notification.jpg)

---

## 👤 House Owner’s Profile

### Profile Access

Click the **Profile** button on the top-right corner of the main GUI screen.

![Profile button in Main page](images/Profile_button_in_Main_page.jpg)

### Password Authentication

- Correct password grants access
- Incorrect password triggers a warning

![Password Authentication failed](images/Password_Authentication_failed.jpg)
![Password Authentication Successful](images/Password_Authentication_Successful.jpg)

### Entry & Exit Logs

Owners can view all housemate entry and exit records.

![Viewing Entry and Exit Details & Housemates page](images/Viewing_Entry_and_Exit_Details_&_Housemates_page.jpg)

### Add New Housemate

Owners can click a picture and register a new housemate via GUI.

![Adding a New Housemate](images/Adding_a_New_Housemate.jpg)

### Logout

House owner can securely log out to return to the main screen.

---

## 🧱 Project Architecture

The following block diagram shows the Smart-Guard's architecture:

![Block Diagram/Project Architecture](images/Block_Diagram_Project_Architecture.jpg)

---

## 📂 Technologies Used

- Python (`face_recognition`, `smtplib`, `cv2`, etc.)
- C++ with Qt Framework for GUI
- OpenCV for real-time video processing
- SMTP for email notifications
- Virtual Environment for dependency isolation

---

## 🚀 Getting Started

### Prerequisites

- Python 3.x
- C++ compiler with Qt installed
- Webcam enabled
- Valid SMTP credentials

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yaswantharao05/Smart-Guard-AI-powered-home-security-system.git
