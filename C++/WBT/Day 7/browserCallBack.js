

function moveBall() {
  const ball = document.getElementById("ball");
  let pos = 0;
  const id = setInterval(() => {
    if (pos >= 350) {
      clearInterval(id);
    } else {
      pos++;
      ball.style.top = pos + "px";
      ball.style.left = pos + "px";
    }
  }, 5);
}

moveBall();



