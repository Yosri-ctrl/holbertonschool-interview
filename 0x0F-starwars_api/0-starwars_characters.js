#!/usr/bin/node

let request = require('request');
if (!process.argv[2]){
	return;
}
let id = process.argv[2];
let url = `https://swapi-api.hbtn.io/api/films/${id}/`;
request(url, function(err, res, body){
	let json = JSON.parse(body);
	//console.log(json);
	//let char_len = json["results"][i]["characters"].length
	for (let char of json.characters) {
		request(char, function(err, res, body){
			console.log(JSON.parse(body).name);
		});
	}
})
