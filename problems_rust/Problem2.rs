fn main() {
    println!("{}", even_fibonacci_numbers(4000000));
}

fn even_fibonacci_numbers(number: i32) -> i32 {
    let mut a: i32 = 1;
    let mut b: i32 = 1;
    let mut aux;
    let mut result: Vec<i32> = Vec::new();
    while b < number {
        if b % 2 == 0 {
            result.push(b);
        }
        aux = b;
        b = a + b;
        a = aux;
    }
    result.iter().sum()
}
