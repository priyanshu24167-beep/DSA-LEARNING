const arr = [100, 200, 300, 400, 500];
const target = 500;

let found = false;

for (let i = 0; i < arr.length; i++) {
    if (arr[i] === target) {
        console.log(`Found at index ${i}`);
        found = true;
        break;
    }
}

if (!found) {
    console.log("Element not found");
}