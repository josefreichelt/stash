fn main() {
    println!("Hello there");
    let mut args = std::env::args().skip(1);
    let key = args.next().unwrap();
    let value = args.next().unwrap();

    println!("Prvni argument je {} and the value is {}", key, value);
    let contents =  format!("{}\t{}\n",key,value);
    std::fs::write("kv.db",contents);
}
