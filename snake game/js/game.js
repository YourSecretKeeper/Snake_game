import { Snake } from "./snake.js";
import { createFood } from "./food.js";

export class Game {

    constructor() {

        this.rows = 20;
        this.columns = 20;

        this.snake = new Snake();

        this.speed = 300;

        this.direction = "RIGHT";
        this.nextDirection = "RIGHT";

        this.running = true;

        this.food = createFood(
            this.snake.getBody(),
            this.rows,
            this.columns
        );

    }

    setDirection(direction) {

        const opposite = {

            UP: "DOWN",
            DOWN: "UP",
            LEFT: "RIGHT",
            RIGHT: "LEFT"

        };

        // Don't allow the snake to immediately reverse
        if (opposite[this.direction] === direction) {
            return;
        }

        this.nextDirection = direction;

    }

    update() {

        if (!this.running) {
            return;
        }

        // Apply the new direction
        this.direction = this.nextDirection;

        const movement = {

            UP: {
                x: 0,
                y: -1
            },

            DOWN: {
                x: 0,
                y: 1
            },

            LEFT: {
                x: -1,
                y: 0
            },

            RIGHT: {
                x: 1,
                y: 0
            }

        };

        const head = this.snake.getHead();

        const newHead = {

            x: head.x + movement[this.direction].x,

            y: head.y + movement[this.direction].y

        };


        // Wall collision
        if (
            newHead.x < 0 ||
            newHead.x >= this.columns ||
            newHead.y < 0 ||
            newHead.y >= this.rows
        ) {

            this.running = false;
            return;

        }


        // Self collision
        const hitSnake = this.snake
            .getBody()
            .some(segment =>
                segment.x === newHead.x &&
                segment.y === newHead.y
            );

        if (hitSnake) {

            this.running = false;
            return;

        }


        // Move snake
        this.snake.move(newHead);


        // Check if food is eaten
        if (
            newHead.x === this.food.x &&
            newHead.y === this.food.y
        ) {

            // Grow snake
            // Don't remove tail

            this.food = createFood(
                this.snake.getBody(),
                this.rows,
                this.columns
            );

        } else {

            // Normal movement
            this.snake.removeTail();

        }

    }

}