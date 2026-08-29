const arr = [34, 45, 78, 89, 32];

let start = 0;
let end = 4;

while (start < end) {

    // swap elements
    let temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
    end--;
}

// print array
for (let i = 0; i < 5; i++) {
    console.log(arr[i]);
}