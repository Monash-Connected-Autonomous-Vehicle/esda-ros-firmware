#include <chrono>
#include <memory>
#include <future>
#include <map>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <esda_ros_interface/serial.h>

#include "rclcpp_components/register_node_macro.hpp"
// #include "esda_ros_interface/robot_hardware_interface_system.hpp"

class SerialNode : public rclcpp::Node
{
public:
    SerialNode()
    : Node("serial_node")
    {
        // Initialize serial port
        serial_port_.setPort("/dev/ttyUSB0");
        serial_port_.setBaudrate(115200);
        serial::Timeout timeout = serial::Timeout::simpleTimeout(1000);
        serial_port_.setTimeout(timeout);

        try
        {
            serial_port_.open();
        }
        catch (serial::IOException &e)
        {
            RCLCPP_ERROR(this->get_logger(), "Unable to open serial port.");
            return;
        }

        publisher_ = this->create_publisher<std_msgs::msg::String>("serial_data", 10);

        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100),
            [this]() { this->timer_callback(); }
        );
    }

private:
    void timer_callback()
    {
        if (serial_port_.available())
        {
            std_msgs::msg::String msg;
            msg.data = serial_port_.read(serial_port_.available());
            publisher_->publish(msg);
        }
    }

    serial::Serial serial_port_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};


int main(int argc, char** argv){
    // Initialize the ROS 2 system
    rclcpp::init(argc, argv);

    // Create a ROS 2 node instance 
    
    // Create a ROS 2 node
    auto node = rclcpp::Node::make_shared("hello_world_node");

    // Print "Hello, World!" to the terminal
    RCLCPP_INFO(node->get_logger(), "Hello, World!ddawdawdaw");

    // Optionally, keep the node running to allow for callbacks
    rclcpp::spin_some(node);

    // Shutdown the ROS 2 system
    rclcpp::shutdown();

    return 0;
}