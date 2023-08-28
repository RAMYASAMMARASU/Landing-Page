<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Landing Page</title>
<style>
  body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
    background-color: #f5f5f5;
  }
  header {
    background-color: #333;
    color: white;
    text-align: center;
    padding: 10px;
  }
  .container {
    max-width: 1200px;
    margin: 0 auto;
    padding: 20px;
  }
  button {
    background-color: #007bff;
    color: white;
    border: none;
    padding: 10px 20px;
    cursor: pointer;
  }
  footer {
    background-color: #333;
    color: white;
    text-align: center;
    padding: 10px;
    position: absolute;
    bottom: 0;
    width: 100%;
  }
</style>
</head>
<body>
  <header>
    <h1>Welcome to Our Landing Page</h1>
    <p>Your One-Stop Destination</p>
  </header>
  <div class="container">
    <h2>Discover Amazing Features</h2>
    <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>
    <button id="changeTextButton">Click Me</button>
    <p id="changeText">I will change when you click the button!</p>
  </div>
  <footer>
    &copy; 2023 Landing Page. All rights reserved.
  </footer>
  <script>
    const button = document.getElementById('changeTextButton');
    const text = document.getElementById('changeText');

    button.addEventListener('click', () => {
      text.textContent = 'Text has changed!';
    });
  </script>
</body>
</html>

