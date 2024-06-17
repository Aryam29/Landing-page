<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1'.0">
  <title>Enjoy the World</title>
  <link rel="stylesheet" href="styles.css">
</head>
<body>
  <header>


    <h1>Enjoy the World</h1>
    <nav>
      <ul>
        <li><a href="#about">About</a></li>
        <li><a href="#destinations">Destinations</a></li>
        <li><a href="#contact">Contact</a></li>  
      </ul>
    </nav>
  </header>

  <section id="about">
    <h2>About Us</h2>
    <p>Welcome to Enjoy the World! We're dedicated to helping you explore and experience the wonders of our planet.</p>
  </section>

  <section id="destinations">
    <h2>Popular Destinations</h2>
    <div class="destination">
      <img src="destination1.jpg" alt="Destination 1">
      <h3>Destination 1</h3>
      <p>Description of destination 1.</p>
    </div>
    <div class="destination">
      <img src="destination2.jpg" alt="Destination 2">
      <h3>Destination 2</h3>
      <p>Description of destination 2.</p>
    </div>
  </section>

  <section id="contact">
    <h2>Contact Us</h2>
    <form>
      <label for="name">Name:</label>
      <input type="text" id="name" name="name" required>
      <label for="email">Email:</label>
      <input type="email" id="email" name="email" required>
      <label for="message">Message:</label>
      <textarea id="message" name="message" required></textarea>
      <button type="submit">Send</button>
    </form>
  </section>

  <footer>
    <p>&copy; 2024 Enjoy the World. All rights reserved.</p>
  </footer>
</body>
</html>
