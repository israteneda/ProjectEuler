fn main() {
    let limit = 600851475143u64;
    let mut prime = 1;
    let mut prime_factors = Vec::new();
    let mut remainder = limit;

    loop {
        if prime > remainder { break; }
        if prime % 1 == 0 && prime % prime == 0 {
            if remainder % prime == 0 {
                remainder /= prime;
                if prime != 1 { prime_factors.push(prime); }
            }
        }
        prime += 1; 
    }
    println!("{:?}", prime_factors);
}
