#include <Link.hpp>
#include <iostream>
#include <fstream>

int main() {
	Link::Server server;
	server.SetPort(3000);

  	// 404 Page
  	server.Error(404, [](Link::Request* req, Link::Response* res) {
  		res->SetStatus(404)->SetBody("404 Not Found");
	});
  
  	// Landing Page
  	server.Get("/", [](Link::Request* req, Link::Response* res) {
    	res->SetHeader("Content-Type", "text/html; charset=UTF-8");
		std::ifstream file("www/index.html");
		std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
		res->SetBody(content);
  	});

  	server.Get("/css/index.css", [](Link::Request* req, Link::Response* res) {
   		res->SetHeader("Content-Type", "text/css; charset=UTF-8");
		std::ifstream file("www/index.html");
		std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
		res->SetBody(content);
  	});

	// Generate cert and key first
	// server.EnableSSL("cert.pem", "key.pem");

	server.EnableMultiThreading();

	std::cout << "website started on port 3000." << std::endl;
  	server.Start();
}
