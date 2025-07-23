document.getElementById("loginButton").addEventListener("click", function ()
{    
    const username = document.getElementById("username").value;
    const password = document.getElementById("password").value;
  
    console.log("Username:", username);
    console.log("Password:", password);
  
    document.getElementById("username").value = "";
    document.getElementById("password").value = "";
  });