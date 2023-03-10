class Flight():
    def __init__(self, capacity):
        self.capacity = capacity
        self.passenger = []
    def add_passenger(self, name):
        if self.open_seats() == 0:
            return False
        self.passenger.append(name)
        return True
    def open_seats(self):
        return self.capacity - len(self.passenger)

flight = Flight(4)
people = ["Hassan", "Awanzi", "Munene", "Lawrence", "Omondi"]

for person in people:
    success = flight.add_passenger(person)
    if success:
        print("Added {} to flight successfully.".format(person))
    else:
        print("No available sits for {}".format(person))
