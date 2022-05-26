use rand::Rng;
use std::cmp::Ordering;
use std::io;

fn main() {
    println!("Hello, and welcome to a guessing game");
    println!("Input your number to guess!");
    let secret_number = rand::thread_rng().gen_range(1..101);
    let mut guess = String::new();

    io::stdin()
        .read_line(&mut guess)
        .expect("Failed to read line");

    let guess: u32 = guess.trim().parse().expect("Please type a number!");

    println!("You guessed: {}", guess);
    println!("Secret number was: {}", secret_number);

    match guess.cmp(&secret_number) {
        Ordering::Less => println!("Guess too small"),
        Ordering::Greater => println!("Guess too big"),
        Ordering::Equal => println!("You win!"),
    }
}
