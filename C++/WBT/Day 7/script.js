function handleClick() {
    const firstName = document.getElementById('firstName').value.trim();
    const lastName = document.getElementById('lastName').value.trim();
    const age = document.getElementById('age').value.trim();

    const userObj = {
        firstName,
        lastName,
        age
    };
    const userJSON = JSON.stringify(userObj);
// by default first ocurance of that element 
    const tableBody = document.querySelector('#dataTable tbody');
    /*
    tableBody.innerHTML = `
    <tr>
      <td>${firstName}</td>
      <td>${lastName}</td>
      <td>${age}</td>
    </tr>
  `;*/

    const newRow = document.createElement('tr')

    const firstNameCell = document.createElement('td')
    firstNameCell.textContent = firstName
    newRow.appendChild(firstNameCell)

    const lastNameCell = document.createElement('td')
    lastNameCell.textContent = lastName
    newRow.appendChild(lastNameCell)

    const ageCell = document.createElement('td')
    ageCell.textContent = age
    newRow.appendChild(ageCell)

    tableBody.appendChild(newRow)

    const userName = firstName.slice(0, 2).toLowerCase() +
        lastName.slice(-2).toLowerCase() +
        age;
    document.getElementById('username').textContent = `Username: ${userName}`
}
