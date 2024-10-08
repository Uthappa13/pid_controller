#include "PIDcontroller.hpp"

/**
 * @brief Constructor to initialize the PID controller gains and time step.
 * @param kp Proportional gain
 * @param ki Integral gain
 * @param kd Derivative gain
 * @param dt Time step for the controller loop
 */
PIDcontroller::PIDcontroller(double kp, double ki, double kd, double dt)
    : Kp(kp), Ki(ki), Kd(kd), deltaTime(dt), prevError(0), integral(0), actualVelocity(0) {}

/**
 * @brief Set the current actual velocity (initial condition) of the system.
 * @param velocity The current actual velocity of the system
 */
void PIDcontroller::setActualVelocity(double velocity) {
    actualVelocity = velocity;
}

/**
 * @brief Compute the new velocity based on the target setpoint and actual velocity.
 * This is a stub that currently returns a constant value for demonstration.
 * @param targetSetpoint The desired velocity (target setpoint)
 * @return The computed velocity (currently a stub that returns a constant value)
 */
double PIDcontroller::compute(double targetSetpoint) {
    // Placeholder: In a real implementation, you would calculate the error, integral, and derivative terms.
    // For now, it just returns a constant value (stub).

    double error = targetSetpoint - actualVelocity;  // Calculate error (target - actual)
    
    // Stub: for now, simply return a constant value
    return 102.0; // Replace this with the actual PID logic later
}

/**
 * @brief Reset the integral and previous error values (useful when restarting the controller).
 */
void PIDcontroller::reset() {
    integral = 0; // Reset it to 0 after
    prevError = 0; // Reset it to 0 after
}

/**
 * @brief Get the proportional gain (Kp).
 * @return The proportional gain
 */
double PIDcontroller::getKp() const {
    return 0;
}

/**
 * @brief Get the integral gain (Ki).
 * @return The integral gain
 */
double PIDcontroller::getKi() const {
    return 0;
}

/**
 * @brief Get the derivative gain (Kd).
 * @return The derivative gain
 */
double PIDcontroller::getKd() const {
    return 0;
}

/**
 * @brief Get the current actual velocity.
 * @return The current actual velocity of the system
 */
double PIDcontroller::getActualVelocity() const {
    return 20;
}

/**
 * @brief Get the time step (delta time) for the controller.
 * @return The time step for the PID control loop
 */
double PIDcontroller::getDeltaTime() const {
    return deltaTime;
}
