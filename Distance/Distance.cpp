
#include "Distance.h"

Distance::Distance() {      // default constructor
    feet = 0;
    inches = 0.0;
}

Distance::Distance(unsigned ft, double in) {
    feet = ft;
    inches = in;
    init();
}

Distance::Distance(double in) {
    feet = 0;
    inches = in;
    init();

}

unsigned Distance::getFeet() const {        // returns feet
    return feet;
}

double Distance::getInches() const {        // returns inches
    return inches;
}

double Distance::distanceInInches() const {         // returns total distance in inches
    double in;
    in = inches + (feet * 12.0);
    return in;
}

double Distance::distanceInFeet() const {           // returns total distance in feet
    double ft;
    ft = inches / 12.0;
    ft = (double)feet + ft;
    return ft;
}

double Distance::distanceInMeters() const {         // returns total distance in meters
    double in;
    double meters;
    in = inches + (feet * 12.0);
    meters = in * 0.0254;
    return meters;
}

Distance Distance::operator+(const Distance &rhs) const {           // addition operator
    return Distance(distanceInInches() + rhs.distanceInInches());
}

Distance Distance::operator-(const Distance &rhs) const {           // subtraction operator
    return Distance(distanceInInches() - rhs.distanceInInches());
}

ostream & operator<<(ostream &out, const Distance &rhs) {
    out << rhs.getFeet() << "\'" << " " << rhs.getInches() << "\"";
    return out;
}

void Distance::init() {
    int inToFt;
    if (inches < 0) {
        inches = inches * -1;
    }
    if (inches >= 12) {
        inToFt = (inches / 12);
        feet = feet + inToFt;
        inches = inches - (12 * inToFt);
    }
}
