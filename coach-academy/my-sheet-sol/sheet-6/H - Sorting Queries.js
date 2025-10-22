class PriorityQueue {
	constructor() {
		this.heap = [];
	}

	// Helper Methods
	getLeftChildIndex(parentIndex) {
		return 2 * parentIndex + 1;
	}

	getRightChildIndex(parentIndex) {
		return 2 * parentIndex + 2;
	}

	getParentIndex(childIndex) {
		return Math.floor((childIndex - 1) / 2);
	}

	hasLeftChild(index) {
		return this.getLeftChildIndex(index) < this.heap.length;
	}

	hasRightChild(index) {
		return this.getRightChildIndex(index) < this.heap.length;
	}

	hasParent(index) {
		return this.getParentIndex(index) >= 0;
	}

	leftChild(index) {
		return this.heap[this.getLeftChildIndex(index)];
	}

	rightChild(index) {
		return this.heap[this.getRightChildIndex(index)];
	}

	parent(index) {
		return this.heap[this.getParentIndex(index)];
	}

	swap(indexOne, indexTwo) {
		const temp = this.heap[indexOne];
		this.heap[indexOne] = this.heap[indexTwo];
		this.heap[indexTwo] = temp;
	}

	remove() {
		if (this.heap.length === 0) {
			return null;
		}
		const item = this.heap[0];
		this.heap[0] = this.heap[this.heap.length - 1];
		this.heap.pop();
		this.heapifyDown();
		return item;
	}

	add(item) {
		this.heap.push(item);
		this.heapifyUp();
	}

	heapifyUp() {
		let index = this.heap.length - 1;
		while (this.hasParent(index) && this.parent(index) > this.heap[index]) {
			this.swap(this.getParentIndex(index), index);
			index = this.getParentIndex(index);
		}
	}

	heapifyDown() {
		let index = 0;
		while (this.hasLeftChild(index)) {
			let smallerChildIndex = this.getLeftChildIndex(index);
			if (
				this.hasRightChild(index) &&
				this.rightChild(index) < this.leftChild(index)
			) {
				smallerChildIndex = this.getRightChildIndex(index);
			}
			if (this.heap[index] < this.heap[smallerChildIndex]) {
				break;
			} else {
				this.swap(index, smallerChildIndex);
			}
			index = smallerChildIndex;
		}
	}

	getSize() {
		return this.heap.length;
	}
}

class Queue {
	constructor() {
		this.data = [];
		this.head = 0; // points to front
		this.tail = 0; // points to next insertion
	}

	enqueue(item) {
		this.data[this.tail++] = item;
	}

	dequeue() {
		if (this.isEmpty()) return undefined;
		const item = this.data[this.head++];
		// Optional memory optimization
		if (this.head > 10000 && this.head * 2 > this.tail) {
			this.data = this.data.slice(this.head);
			this.tail -= this.head;
			this.head = 0;
		}
		return item;
	}

	isEmpty() {
		return this.head === this.tail;
	}

	size() {
		return this.tail - this.head;
	}

	front() {
		return this.data[this.head];
	}
}

const fs = require("fs");
const input = fs
	.readFileSync(0, "utf8")
	.trim()
	.split("\n")
	.splice(1)
	.map((item) => item.split(" "));

let q = new Queue();
const pq = new PriorityQueue();

for (const [op, num] of input) {
	if (op === "1") {
		const number = Number(num);
		q.enqueue(number);
	} else if (op === "2") {
		if (pq.getSize() !== 0) console.log(pq.remove());
		else console.log(q.dequeue());
	} else while (!q.isEmpty()) pq.add(q.dequeue());
}
