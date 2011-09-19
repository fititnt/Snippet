function id(id){
    return document.getElementById(id);
}

function addEvent(el, evt, fn)
{
   if (typeof elem.addEventListener !== 'undefined')
   {
      // w3c event wire up here
   }
   else if (typeof elem.attachEvent !== 'undefined')
   {
      // ie event wire up here...
   }
}





//dump...

function id(id){
    return document.getElementById(id);
}
function addEvent(el, evt, fn)
{
   if (typeof elem.addEventListener !== 'undefined')
   {
      // w3c event wire up here
   }
   else if (typeof elem.attachEvent !== 'undefined')
   {
      // ie event wire up here...
   }
}


campoCep = document.getElementById('pmf_cep$sufixo');

campoCep.addEvent;

if ( typeofvcampoCep.addEventListener !== 'undefined'){
  campoCep.addEventListener('click', TESTE(), false);
} else if (campoCep.attachEvent){
  campoCep.attachEvent('onclick', TESTE());
}

function TESTE(){
    alert('teste');
}
  

function obtemEndereco( cep )
{
    if(cep.length < 2) return null;
    //cep = cep.replace('-','');
    console.log( cep );
    procuraEndereco( cep );
    return;
}