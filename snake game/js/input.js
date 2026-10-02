export function setupInput(changeDirection) {

    const keyMap = {

        ArrowUp: "UP",
        ArrowDown: "DOWN",
        ArrowLeft: "LEFT",
        ArrowRight: "RIGHT",

        w: "UP",
        W: "UP",

        s: "DOWN",
        S: "DOWN",

        a: "LEFT",
        A: "LEFT",

        d: "RIGHT",
        D: "RIGHT"

    };


    // Keyboard controls

    document.addEventListener("keydown", event => {

        const direction = keyMap[event.key];

        if (direction) {

            changeDirection(direction);

        }

    });


    // Button controls

    const buttons =
        document.querySelectorAll("[data-direction]");


    buttons.forEach(button => {

        button.addEventListener("click", () => {

            changeDirection(
                button.dataset.direction
            );

        });

    });

}