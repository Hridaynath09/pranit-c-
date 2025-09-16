function counter(){
    let cnt = 0;
    return function(){
        return cnt+=1;
    };
}
const increment = counter();
function addData(){
    document.getElementById("formContainer").innerHTML=increment();
}