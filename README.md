# Search-and-Rescue-Alex-Bot

Alex is a remotely operated Search-and-Rescue robot that can assist disaster rescue teams in gathering data of the environment and locate victims within the disater-stricken area. A remote operator can control Alex by transmitting commands to and receiving information from the Raspberry Pi on Alex. The Pi communicates with an Arduino also on Alex through the Universal Synchronous/Asynchronous Receiver Transmitter (USART). 

Alex is also equipped with a LiDAR sensor in order to form a map of its surroundings. The transfer of information between Alex and the operator works via Robotic Operating System (ROS) which uses a message broadcast and subscription model for communication between machines. We then use Hector SLAM as a visualisation package to draw out a map from the scans made by the LiDAR. Additionally, Alex also has colour, ultrasonic, gas, flame, and sound sensors as my team felt that these were essential on a Search-and-Rescue robot.

Have a look at our report [here](https://github.com/ashrafjfr/Search-and-Rescue-Alex-Bot/blob/main/B03-6A%20Final%20Report.pdf) to understand how we have built and programmed Alex!
