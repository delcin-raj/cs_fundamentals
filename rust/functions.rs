/**
 * u8, i8 -> both have 8 bits
 * Range of u8 = 0, 255
 * Range of i8 = -128, 127
 * Range of u16 = 0, 65535
 * Range of i16 = -32768, 32767
 * u32, i32, u64, i64, u128, i128,
 * 0 0 -> 0
 * 0 1 -> 1
 * 1 0 -> 2
 * 1 1 -> 3
 * 
 * 11111 -> 2^5 - 1
 * 
 * 
 */

fn g() -> u128 {
    return 1;
}

fn f() -> i8 {
    println!("f is called");
    -129
}

fn main() {
    println!("{}", g());
    println!("{}", f());
}
