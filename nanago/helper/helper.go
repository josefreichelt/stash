package helper

import "strings"

func ValidateUserInput(firstName string, lastName string, email string, userTickets uint8, remainingTickets uint8) (bool, bool, bool) {
	var isValidName bool = len(firstName) >= 2 && len(lastName) >= 2
	var isValidEmail bool = strings.Contains(email, "@")
	var isValidTicketCount bool = userTickets <= remainingTickets && userTickets > 0

	return isValidName, isValidEmail, isValidTicketCount
}