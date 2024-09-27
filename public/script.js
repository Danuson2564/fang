document.getElementById('run-button').addEventListener('click', async () => {
    const code = document.getElementById('code').value;
    const input = document.getElementById('input').value;

    const response = await fetch('/execute', {
        method: 'POST',
        headers: {
            'Content-Type': 'application/json',
        },
        body: JSON.stringify({ code, input }),
    });

    const result = await response.json();
    displayOutput(result);
});

function displayOutput(result) {
    const outputElement = document.getElementById('output');
    if (result.error) {
        outputElement.textContent = `Error: ${result.error}`;
    } else {
        outputElement.textContent = `${result.output}`;
        if (result.expected) {
            outputElement.textContent += `\nExpected Output:\n${result.expected}`;
        }
    }
}
