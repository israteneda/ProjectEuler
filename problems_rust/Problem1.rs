use std::io::{self, Write};

fn main() {

    // Print instructions
    println!("Programa que calcula la suma de los multiplos de 3 y 5");
    print!("Ingrese un número: ");
    if let Err(err) = io::stdout().flush() {
        println!("Could not flush, {}", err);
    }

    // Read the number
    let mut input = String::new();
    match io::stdin().read_line(&mut input) {
        Ok(_) => (),
        Err(err) => println!("Could not parse input: {}", err),
    }
    let n: i32 = input.trim().parse().unwrap();

    // Loop the number and get multiples
    let mut sum: i32 = 0;
    for number in 0..n {
        if number % 3 == 0 || number % 5 == 0 {
            sum += number;
        }
    }

    println!("La suma es: {}", sum);
}

