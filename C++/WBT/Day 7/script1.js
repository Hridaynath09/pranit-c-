

  const box1 = document.getElementById('box1');
  const box2 = document.getElementById('box2');

  let pos1 = 0;
  let pos2 = window.innerWidth;

  function animateBox1() {
    pos1 += 2;
    if (pos1 > window.innerWidth) pos1 = -50; 
    box1.style.left = pos1 + 'px';
  }

  function animateBox2() {
    pos2 -= 2;
    if (pos2 < -50) pos2 = window.innerWidth; 
    box2.style.left = pos2 + 'px';
  }

  setInterval(() => {
    animateBox1();
    animateBox2();
  }, 30);

