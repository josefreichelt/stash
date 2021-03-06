package main

import (
	"fmt"
	"nanago/helper"
	"sync"
	"time"
)

// Package level variables
const conferenceName string = "Go Conference"
const conferenceTickets = 50

var remainingTickets uint8 = 50
var bookings = make([]UserData, 0)

type UserData struct {
	firstName       string
	lastName        string
	email           string
	numberOfTickets uint8
}

var wg = sync.WaitGroup{}

func main() {

	greetUsers(conferenceTickets, remainingTickets)

	for remainingTickets > 0 && len(bookings) < 50 {
		firstName, lastName, email, userTickets := getUserInput()
		isValidName, isValidEmail, isValidTicketCount := helper.ValidateUserInput(firstName, lastName, email, userTickets, remainingTickets)

		if isValidName && isValidEmail && isValidTicketCount {
			bookTicket(userTickets, firstName, lastName, email)

			wg.Add(1)
			go sendTicket(userTickets, firstName, lastName, email)

			firstNames := getFirstNames()
			fmt.Printf("š These are first names of bookings: %v\n", firstNames)

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

	wg.Wait()
}

func greetUsers(conferenceTickets int, remainingTickets uint8) {
	fmt.Printf("\nš Welcome to %v booking application.\n", conferenceName)
	fmt.Printf("We have total of %v tickets and %v are still available.\n", conferenceTickets, remainingTickets)
	fmt.Println("Get your tickets here!")
	fmt.Println("_________________________")
}

func getFirstNames() []string {
	firstNames := []string{}
	for _, booking := range bookings {
		firstNames = append(firstNames, booking.firstName)
	}
	return firstNames
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
	remainingTickets = remainingTickets - userTickets

	// create a map for a user
	var userData = UserData{
		firstName:       firstName,
		lastName:        lastName,
		email:           email,
		numberOfTickets: userTickets,
	}

	bookings = append(bookings, userData)
	fmt.Printf("%v\n", userData)

	fmt.Printf("Thank you %v %v for booking %v tickets. You will recieve a confirmation email at %v\n", firstName, lastName, userTickets, email)
	fmt.Printf("%v tickets remaining for %v\n", remainingTickets, conferenceName)

}

func sendTicket(userTickets uint8, firstName string, lastName string, email string) {
	time.Sleep(10 * time.Second)
	var ticket = fmt.Sprintf("%v tickets for %v %v", userTickets, firstName, lastName)
	fmt.Println("š¤")
	fmt.Printf("Sending ticket:\n%v to email address %v\n", ticket, email)
	fmt.Println("______")
	wg.Done()
}
