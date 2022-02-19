package main

import (
	"fmt"
	"strings"
)

// Package level variables
const conferenceName string = "Go Conference"
const conferenceTickets = 50

var remainingTickets uint8 = 50
var bookings []string

func main() {

	greetUsers(conferenceTickets, remainingTickets)

	for remainingTickets > 0 && len(bookings) < 50 {
		firstName, lastName, email, userTickets := getUserInput()
		isValidName, isValidEmail, isValidTicketCount := validateUserInput(firstName, lastName, email, userTickets, remainingTickets)

		if isValidName && isValidEmail && isValidTicketCount {
			bookTicket(userTickets, firstName, lastName, email)
			firstNames := getFirstNames(bookings)
			fmt.Printf("📅 These are first names of bookings: %v\n", firstNames)

			if remainingTickets == 0 {
				// end program
				fmt.Println("Our converence is booked out. Come back next year.")
				break
			}
		} else {
			if !isValidName {
				fmt.Println("Please enter a valid first name")
			} else if !isValidEmail {
				fmt.Println("Please enter a valid email address")
			} else {
				fmt.Println("Please enter a ticket count")
			}
		}
	}

}

func greetUsers(conferenceTickets int, remainingTickets uint8) {
	fmt.Printf("\n👋 Welcome to %v booking application.\n", conferenceName)
	fmt.Printf("We have total of %v tickets and %v are still available.\n", conferenceTickets, remainingTickets)
	fmt.Println("Get your tickets here!")
	fmt.Println("_________________________")
}

func getFirstNames(bookings []string) []string {
	firstNames := []string{}
	for _, booking := range bookings {
		var names = strings.Fields(booking)
		firstNames = append(firstNames, names[0])
	}
	return firstNames
}

func validateUserInput(firstName string, lastName string, email string, userTickets uint8, remainingTickets uint8) (bool, bool, bool) {
	var isValidName bool = len(firstName) >= 2 && len(lastName) >= 2
	var isValidEmail bool = strings.Contains(email, "@")
	var isValidTicketCount bool = userTickets <= remainingTickets && userTickets > 0

	return isValidName, isValidEmail, isValidTicketCount
}

func getUserInput() (string, string, string, uint8) {
	var firstName string
	var lastName string
	var email string
	var userTickets uint8
	// ask for input
	fmt.Println("Enter your first name: ")
	fmt.Scan(&firstName)
	fmt.Println("Enter your last name: ")
	fmt.Scan(&lastName)
	fmt.Println("Enter your email: ")
	fmt.Scan(&email)
	fmt.Println("Enter amount of tickets: ")
	fmt.Scan(&userTickets)

	return firstName, lastName, email, userTickets
}

func bookTicket(userTickets uint8, firstName string, lastName string, email string) {
	bookings = append(bookings, firstName)
	remainingTickets = remainingTickets - userTickets

	fmt.Printf("Thank you %v %v for booking %v tickets. You will recieve a confirmation email at %v\n", firstName, lastName, userTickets, email)
	fmt.Printf("%v tickets remaining for %v\n", remainingTickets, conferenceName)

}
