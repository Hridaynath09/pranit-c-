<input type="number" id="numInput">
<button onclick="generateTable()">Generate Table</button>
<table id="tableOutput"></table>

<script>
function generateTable() {
  const num = parseInt(document.getElementById("numInput").value);
  const table = document.getElementById("tableOutput");
  table.innerHTML = "";

  for (let i = 1; i <= 10; i++) {
    const row = table.insertRow();
    row.insertCell(0).innerText = `${num} x ${i}`;
    row.insertCell(1).innerText = num * i;
  }
}
</script>
