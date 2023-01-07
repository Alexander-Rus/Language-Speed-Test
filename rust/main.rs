
fn main() {

    // Create an array of 10,000 integers
    let mut _values: std::vec::Vec<i32> = (0..10000).collect();

    // Reverse the array of integers
    _values.reverse();

    // Start timing
    let start = std::time::Instant::now();

    // Perfrom the bubble sort on the array
    for i in 0.._values.len() - 1 {
        for j in 0.._values.len() - i - 1 {
            if _values[j] > _values[j + 1] {
                _values.swap(j, j + 1);
            }
        }
    }

    // Stop timing
    let elapsed = start.elapsed();
    
    // Print results of the timing
    println!("RUST Time elapsed: {}ms", elapsed.as_millis());

}
