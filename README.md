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

![Main page of Graphical User Interface](images/Main%20page%20of%20GUI.jpg)

### Step 3: Terminal Background Operations

Behind the scenes:
- Virtual environment is activated
- `face%20recognition.py` script is executed

### Step 4: Load Housemate Images

Face encodings of housemates are preloaded for comparison.

![Loading Housemates' Faces](images/Loading%20Housemates'%20Faces.jpg)

### Step 5: Real-time Video Capture

Webcam captures real-time frames, which are processed for recognition.

### Step 6: Face Comparison & Classification

Each frame is checked to determine if the face matches a known housemate.

### Step 7: GUI Output

- **Housemate**: Green screen with a voice greeting.

![Verification Successful - Entry Successful](images/Verification%20Successful%20-%20Entry%20Successful.jpg)

- **Stranger**: Red screen with a warning message and voice alert.

![Entry denied – Verification Denied](images/Entry%20denied%20–%20Verification%20Denied.jpg)

### Step 8: Email Alert to Homeowner

An email with intruder image and timestamp is sent to the registered email.

![Intruder email notification](images/Intruder%20email%20notification.jpg)

---

## 🔐 House Owner Profile

### 1. Access & Authentication

- Click on the profile icon (top-right corner).

![Profile Button](images/Profile%20button%20in%20Main%20page.jpg)

- Enter password for authentication.

![Password Auth](images/Profile%20Password%20Authentication.jpg)

- If the password is correct:

![Auth Success](images/Password%20Authentication%20Successful.jpg)

- If the password is wrong:

![Auth Failed](images/Password%20Authentication%20failed.jpg)

### 2. View Entry/Exit Logs

- Display logs of people who entered or exited.
- View all current housemates.

![Entry/Exit & Housemates](images/Viewing%20Entry%20and%20Exit%20Details%20&%20Housemates%20page.jpg)

### 3. Add New Housemate

- Capture image, input name, and confirm to update the database.

![Add Housemate](images/Adding%20a%20New%20Housemate.jpg)

### Logout

House owner can securely log out to return to the main screen.

---

## 🧱 Project Architecture

The following block diagram shows the Smart-Guard's architecture:

![Block Diagram/Project Architecture](images/Block%20Diagram-Project%20Architecture.jpg)

---

## 📂 Technologies Used

- Python (`face%20recognition`, `smtplib`, `cv2`, etc.)
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
