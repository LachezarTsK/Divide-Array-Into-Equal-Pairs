
/**
 * @param {number[]} input
 * @return {boolean}
 */
var divideArray = function (input) {

    const MIN_INPUT_VALUE = 1;
    const MAX_INPUT_VALUE = 500;

    const frequency = new Array(MAX_INPUT_VALUE + 1).fill(0);
    for (let n of input) {
        frequency[n]++;
    }
    for (let n of frequency) {
        if (n % 2 !== 0) {
            return false;
        }
    }
    return true;
};
