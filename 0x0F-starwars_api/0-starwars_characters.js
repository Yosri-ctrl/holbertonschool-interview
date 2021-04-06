#!/usr/bin/node

let request = require('request');
let url = 'https://swapi-api.hbtn.io/api/films/'
request(url, function(err, res, body){
	let id = process.argv.slice(2)[0];
	let json = JSON.parse(body);
	for (let i = 0; i < json["count"]; i++) {
		if (json["results"][i]["episode_id"] == id){
			let char_len = json["results"][i]["characters"].length
			for (let j = 0; j < char_len - 1; j++) {
				let char_url = json["results"][i]["characters"][j];
				request(char_url, function(err, res, body){
					let char_json = JSON.parse(body);
					console.log(char_json["name"]);
				});
			}
		}
	}
})
