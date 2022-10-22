/**
 * 
 * @param {int} num 
 * @returns sum of factorial
 */
function factorial(num) {
  // If the number is less than 0, reject it.
  if (num < 0 || typeof(num) != "number") {
    return "invalid number !";
  }

  // If the number is 0, its factorial is 1.
  else if (num == 0) {
    return 1;
  }

  // Otherwise, call the recursive procedure again
  else {
    return num * factorial(num - 1);
  }
}

let sample = 5;
const result = factorial(sample);

console.log(result);
