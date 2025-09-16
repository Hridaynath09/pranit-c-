setInterval(myFun, 1000)
function myFun() {
    let a = new Date();
    document.getElementById("timer").innerHTML =
        a.getHours() + ":" +
        a.getMinutes() + ":" +
        a.getSeconds();
}