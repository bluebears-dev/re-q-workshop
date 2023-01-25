use std::env;
use std::process::exit;

fn main() {
    if let Some(text) = env::args().nth(1) {
        println!("{} lmao", text);
    } else {
        println!("> lol try harder");
        exit(1);
    }
}
