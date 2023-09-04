function diagonalDifference(arr) {
  let primaryDiagonalSum = 0;
  let secondaryDiagonalSum = 0;
  let aux = arr.length - 1;

  for (const i in arr) {
    for (const j in arr) {
      if (i == j) {
        primaryDiagonalSum += arr[i][j]
      }

      if (j == aux && aux >= 0) {
        secondaryDiagonalSum += arr[i][aux];
        aux--;
      }
    }
  }

  return Math.abs(primaryDiagonalSum - secondaryDiagonalSum);
}

// Test

arr = [[11, 2, 4], [4, 5, 6], [10, 8, -12]]

console.log(diagonalDifference(arr))