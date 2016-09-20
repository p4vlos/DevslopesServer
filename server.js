var express = require('express');
var bodyParser = require('body-parser');
var app = express();

app.all('/*', function(req, res, next) {
	res.header("Access-Control-Allow-Origin", "*");
	res.header("Access-Control-Allow-Headers", "X-Requested-With", "Content-Type, Accept");
	res.header("Access-Control-Allow-Methods", "POST, GET");
	next();
});

app.use(bodyParser.json());
app.use(bodyParser.urlencoded({extended: false}));


var tutorials = [
	{
		id: 1,
		title: "Android Studio Tutorial For Beginners",
		description: "Learn how to install Android Studio and then go through this tutorial to build you very first app",
		iframe: '<iframe width="560" height="315" src="https://www.youtube.com/embed/F-k5gwz_91o" frameborder="0" allowfullscreen></iframe>',
		thumbnail: "http://imgur.com/a/48gcc"
	},
	{
		id: 2,
		title: "Android Studi 2.2 Tutorial",
		description: "Learn how to install Android Studio 2.2",
		iframe: '<iframe width="560" height="315" src="https://www.youtube.com/embed/CTYf1qwrXuw" frameborder="0" allowfullscreen></iframe>',
		thumbnail: "http://imgur.com/a/gti7B"
	}
];

app.get('/tutorials', function(req,res) {
	console.log("GET from server");
	res.send(tutorials);
});

app.listen(6069);