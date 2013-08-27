function clearForms()
{
  var i;
  for (i = 0; (i < document.forms.length); i++) {
    document.forms[i].reset();
  }
}

function speople()
{
	if (document.getElementById("q").value == "" || document.getElementById("q").value == " ") {
	goTo('http://www.uni.edu/directory');
//	goTo('http://www.uni.edu/directory');	
	}
	else {
	document.radio_form.method="get";
	document.radio_form.q.name= "lastName";
	document.radio_form.action="https://java.access.uni.edu/ed/faces/searchAll.jsp?lastName="+ document.radio_form.q.value;
//	document.radio_form.action="https://espresso.uni.edu/PhoneBook/servlet/pb_pack.pbDispatcher?task=mainSearch";	
	document.radio_form.submit();
}}

function spages()
{
	if (document.getElementById("q").value == "" || document.getElementById("q").value == " ") {
	goTo('https://www.uni.edu/search/');
	}
	else{
	document.radio_form.action="http://www.uni.edu/search/search_results.html";
	document.radio_form.id="searchbox_011098738754097199461:oywhsfqqr2s";
	document.radio_form.submit();
}}

function checkEnter(e){
var characterCode;

if(e && e.which){
	e = e
	characterCode = e.which;
}
else{
e = event;
characterCode = e.keyCode;
}

if(characterCode == 13){ 
	spages();
	return false 
}
else{return true}

}

function goTo(to)
{
	document.fwd.action=to;
	document.fwd.submit();
}