
/**
 * Runtime: 168 ms
 */

const twoSum = function (nums, target) {
  for (let i = 0; i < (nums.length - 1); ++i) {
    for (let j = i + 1; j < nums.length; ++j) {
      if ((nums[i] + nums[j]) === target) return [i, j]
    }
  }
};

/**
 * Runtime: 52 ms
 */

const twoSum2 = function (nums, target) {
  const comp = {};
  for (let i = 0; i < nums.length; i++) {
    if (comp[nums[i]] >= 0) {
      return [comp[nums[i]], i]
    }
    comp[target - nums[i]] = i
  }
};

console.log(twoSum([2, 5, 5, 11], 10))