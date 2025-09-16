
function counter() {
    let cnt = 0;
    return function () {
        return cnt += 1;
    };
}
const increment = counter(); function addData() {
    let fname = document.getElementById("fName").value.trim();
    let lname = document.getElementById("lName").value.trim();
    let uEmail = document.getElementById("email").value.trim();
    let dob = document.getElementById("uDOB").value;

    let errorMsg = document.getElementById("errorMsg");
    let table = document.getElementById("employeeTable");
    let newRow = table.insertRow(table.rows.length);
    let data= document.getElementById("p1");

    if (!fname || !lname || !uEmail || !dob) {
        errorMsg.textContent = "All fields are required!";
        table.style.display = "none";
        return;
    }

    newRow.insertCell(0).innerHTML = fname;
    newRow.insertCell(1).innerHTML = lname;
    newRow.insertCell(2).innerHTML = uEmail;
    newRow.insertCell(3).innerHTML = dob;
    newRow.insertCell(4).innerHTML =
        '<button onclick="editData(this)">Edit</button>' +
        '<button onclick="deleteData(this)">Delete</button>';



    errorMsg.textContent = "";
    table.style.display = "table";
    data.style.visibility="visible";


    clearInput();

    document.getElementById("p1").innerHTML = increment();
}

function clearInput() {
    document.getElementById("fName").value = "";
    document.getElementById("lName").value = "";
    document.getElementById("email").value = "";
    document.getElementById("uDOB").value = "";
}

function editData(button) {
    let row = button.parentNode.parentNode;

    let fnameCell = row.cells[0];
    let lnameCell = row.cells[1];
    let emailCell = row.cells[2];
    let dobCell = row.cells[3];

    let fnameInput = prompt("Enter updated First Name: ", fnameCell.innerHTML);
    let lnameInput = prompt("Enter updated Last Name: ", lnameCell.innerHTML);
    let emailInput = prompt("Enter updated Email-iD: ", emailCell.innerHTML);
    let dobInput = prompt("Enter updated DOB: ", dobCell.innerHTML);

    fnameCell.innerHTML = fnameInput;
    lnameCell.innerHTML = lnameInput
    emailCell.innerHTML = emailInput
    dobCell.innerHTML = dobInput
}
function deleteData(button) {


    let row = button.parentNode.parentNode;

    row.parentNode.removeChild(row);
}
