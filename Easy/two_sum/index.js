const twoSum = function (nums, target) {
  for (let i = 0; i < (nums.length - 1); i++) {
    let soma = nums[i] + nums[i + 1]
    if (soma === target) return [i, i + 1]
  }
};

console.log(twoSum([2, 7, 11, 15], 9))