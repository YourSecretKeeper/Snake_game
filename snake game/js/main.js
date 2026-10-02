import { Game } from "./game.js";
import { setupInput } from "./input.js";

const board = document.getElementById("game-board");

let game;
let interval;


// Create 20 x 20 board

const createBoard = () => {

    board.innerHTML = "";

    for (let y = 0; y < game.rows; y++) {

        for (let x = 0; x < game.columns; x++) {

            const cell = document.createElement("div");

            cell.classList.add("cell");

            cell.dataset.x = x;
            cell.dataset.y = y;

            board.appendChild(cell);

        }

    }

};


// Render everything

const render = () => {

    const cells = board.children;


    // Clear previous rendering

    for (const cell of cells) {

        cell.classList.remove(
            "snake",
            "head",
            "food"
        );

    }


    // Render snake

    game.snake
        .getBody()
        .forEach((segment, index) => {

            const cell = board.querySelector(
                `[data-x="${segment.x}"][data-y="${segment.y}"]`
            );

            if (!cell) {
                return;
            }

            cell.classList.add("snake");


            // First segment = head

            if (index === 0) {

                cell.classList.add("head");

            }

        });


    // Render food

    const foodCell = board.querySelector(
        `[data-x="${game.food.x}"][data-y="${game.food.y}"]`
    );


    if (foodCell) {

        foodCell.classList.add("food");

    }

};


// Start game

const startGame = () => {

    clearInterval(interval);


    // Create game

    game = new Game();


    // Create board

    createBoard();


    // Initial render

    render();


    // Setup controls

    setupInput(direction => {

        game.setDirection(direction);

    });


    // Game loop

    interval = setInterval(() => {

        game.update();

        render();


        // Stop game when dead

        if (!game.running) {

            clearInterval(interval);

            alert("Game Over!");

        }

    }, game.speed);

};


startGame();