$(document).ready(function(){
	var skill = "none";
	var zone = "westeros";
	var piege = false;

	$("#img_main").click(function(){
		var obj = document.getElementById("img_main");
		skill = "prendre";
		unSelect(obj, "left_banner");
		changeDialText("ouai bien vu parle a ma main!", "lol_banner");
	});

	$("#img_arrow").click(function(){
		var obj = document.getElementById("img_arrow");
		skill = "avancer";
		unSelect(obj, "left_banner");
	});

	$("#img_oeil").click(function(){
		var obj = document.getElementById("img_oeil");
		skill = "voir";
		unSelect(obj, "left_banner");
	});

	$("#img_outil").click(function(){
		var obj = document.getElementById("img_outil");
		skill = "outil";
		unSelect(obj, "left_banner");
		changeDialText("Non mais allo  quoi.... Pourquoi pas me dire<br /> 'gogo gadget o trouver des traces d'adn....'<br /><br /> Ringar!", "lol_banner")
	});

	$("#img_chat").click(function(){
		var obj = document.getElementById("img_chat");
		unSelect(obj, "left_banner");
		skill = "dial";
		changeDialText("en vrais je ne suis pas tres locasse <br /> je te parle si j'veux!", "lol_banner");
	});

	$("#button").click(function(){
		var rep = document.getElementById("box_text").value;
		if (rep == "bite"){
			changeDialText("Tu es un bon toi! tu vas alle loin <br /> tu n'as plus besoin de moi pour la suite j'imagine! <br /> Bon courrage l'artiste!", "lol_banner");
		} else if (rep == "oui"){
			changeDialText("Mais c'est genial! tu vas trop t'amuser!....", "lol_banner");
		} else {
			changeDialText("Perdu il falait dire oui! tu pensais pas non plus tomber sur un jeux ou tu avais beaucoup de choix a faire quand meme ?", "dial_text");
		}
	});

	$("#toi").click(function(){
		if (skill == "avancer" && zone == "westeros"){
			changeDialText("te voila sur le toi! <br /> tu peu finir le jeux d'une charmante facon et sauter si tu veux!", "lol_banner");
			changeImg("terasse.jpg", "la superbe terasse!");
			zone = "toi";
		} else if (skill == "avancer" && zone == "amphi"){
			changeDialText("Te voila de retour dans westeros. <br />il doit te rester plein de chose interessante a faire ici non ? :D", "lol_banner");
			changeImg("cluster.jpg", "Westeros");
			zone = "westeros";		
		} else if (zone == "end") {

		} else {
			changeDialText("Le jeux est nul mais! <br />le game design est grave soigne.... <br />pour que le jeux soit super dur (et chiant), <br /> tu dois pour faire ca passe en mode Avancer!!", "lol_banner");

		}
	});

	$("#end_story").click(function(){
		if (skill == "avancer" && zone == "toi"){
			changeImg("mort-pigeon.jpg", "rust in piece");
			changeDialText("Encore un joueur mort tan le jeux est profond <br/> et difficile. nous ne t'oublierons pas !(trop rapidement) <br /><g>Repose en piece!</g> <br /> <h1>Game over</h1>", "lol_banner");
			zone = "end";
		} else if (skill == "avancer" && zone == "amphi"){

		} else if (skill == "avancer"){
			changeDialText("en fait dans cette piece tu ne peu pas y aller ;x", "lol_banner");
		} else if (zone == "end") {
			changeDialText("en fait le jeux est fini la...", "lol_banner");
		} else {
			changeDialText("je pense que de tout les gars qui ont jouer a ce jeux <br />tu es le moin bon... <br />le prend pas mal hein, mais tu es quand meme super nul...","lol_banner");
		}
	});

	$("#amphi").click(function(){
		if (skill == "avancer" && zone == "westeros"){
			changeImg("amphi.jpg", "C'est le super Amphiteatre de 42!");
			changeDialText("Il y a une ordeur particuliaire <br/>sera tu eviter le piege de cette salle?", "lol_banner")
			zone = "amphi";
		} else if (skill == "avancer"){
			changeDialText("en fait dans cette piece tu ne peu pas y aller ;x", "lol_banner");
		} else {
			changeDialText("je pense que de tout les gars qui ont jouer a ce jeux <br />tu es le moin bon... <br />le prend pas mal hein, mais tu es quand meme super nul...","lol_banner");
		}
	});

	$("#Westeros").click(function(){
		if (skill == "avancer" && zone == "toi"){
			changeImg("cluster.jpg", "Westeros");
			changeDialText("Je trouve que tu etait bien mieu sur la terasse perso...", "lol_banner")
			zone = "westeros";		
		} else if (skill == "avancer") {
		} else {
			changeDialText("je pense que de tout les gars qui ont jouer a ce jeux <br />tu es le moin bon... <br />le prend pas mal hein, mais tu es quand meme super nul...","lol_banner");	
		}
	});

	$("#piege").click(function(){
		if (zone == "amphi" && skill == "voir"){
			piege = true;
			changeDialText("Toi tu vas avoir des problemes!! <br /> tu vas avoir des gros problemes!!", "lol_banner");
		}
	});

	$("#maybeFree").click(function(){
		if (skill == "avancer" && zone == "amphi"){
			if (piege){
				changeImg("end_prison.jpg", "tu as eu des problemes!");
				changeDialText("Je te l'ai dit tu as eu des problemes <br /> c'est pas bien d'etre curieux comme ca...<br /><br /><h1>Game over</h1>", "lol_banner");

			} else {
				changeImg("end_freedom.jpg", "Beau Gosse!!");
				changeDialText("le gars il dejou les pieges et fini le jeux! <br />On peu le dire tu es un beau Gosse! <br /><br /><h1>Game win!</h1>", "lol_banner");
			}
			zone = "end";
		}
	});

	$("#img_book").click(function(){
		changeDialText("en vrais c'est une piscine j'ai pas pu faire tout ce que je voulais gros", "lol_banner");
	});

	$("#brick").click(function(){
		changeDialText("en vrais c'est une piscine j'ai pas pu faire tout ce que je voulais gros", "lol_banner");
	});

	$("#img_towel").click(function(){
		changeDialText("en vrais c'est une piscine j'ai pas pu faire tout ce que je voulais gros", "lol_banner");
	});
});

function changeImg(imgName, title){
	var img = document.getElementById("img_cluster");
	img.title = title;
	img.src = "resources/" + imgName;
}

function unSelect(obj, target){
	var menu = document.getElementById(target);
	for (var i =0; i < menu.childElementCount;i++){
		menu.children[i].className = "";
	}
	obj.className = "selected";
}

function changeDialText(string, target){
	var dialBox = document.getElementById(target);
	while (dialBox.childElementCount > 0){
		dialBox.firstChild.remove();
	}
	dialBox.innerHTML = string;
}