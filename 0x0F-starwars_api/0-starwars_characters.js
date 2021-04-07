#!/usr/bin/node

let request = require('request');
if (!process.argv[2]){
	return;
}
let id = process.argv[2];
let url = `https://swapi-api.hbtn.io/api/films/${id}/`;
request(url, async function(err, res, body){
	let json = JSON.parse(body);
	for (let char of json.characters) {
		const name = await new Promise((resolve, reject) => {
			request(char, function(err, res, body){
				resolve(JSON.parse(body).name);
			});
		});
		console.log(name);
	}
})
