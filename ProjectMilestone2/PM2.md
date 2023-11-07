# Project Milestone 2: Development

Effective completion of the previous stages is a key factor in the success of the Development phase. The Development phase consists of:

* Translating the detailed requirements and design into system components
* Testing individual elements (units) for usability
* Preparing for integration and testing of the IT system.

The development stage is the part where developers actually write code and build the application according to the earlier design documents and outlined specifications.

Product program code is built per the design document specifications. In theory, all of the prior planning and outlined should make the actual development phase relatively straightforward.

Developers will follow any coding guidelines as defined by the organization and utilize different tools such as compilers, debuggers, and interpreters.

Programming languages can include staples such as C++, Python, PHP, and more. Developers will choose the right programming code to use based on the project specifications and requirements.

# Resources

Example of ReST API service: https://github.com/cs5500-neu/todo_api

Sqlite3: https://www.sqlite.org/index.html

Uvicorn: https://www.uvicorn.org/

Gunicorn: https://gunicorn.org/

Web Server Gateway Interface (WSGI)
* https://docs.python-guide.org/scenarios/web/

* https://docs.python-guide.org/scenarios/web/#wsgi-servers

# Deliverables

You should have a working backend prototype that you can run locally on your machine. 

Your team needs to create the following:

* 3-4 public-facing ReST API's 
  * Should use one or all HTTP Methods: Create, Read, Update, Delete
  * If you're already ahead, feel free to implement all your public-facing ReST API's
* Database to support persistence. You can use any type of database. For simplicity and portability, we recommend Sqlite3.
* Web Server Gateway Interface (WSGI) to serve up your ReST API's to the public (The demo example uses Uvicorn, but you can whatever is best for your team)

NOTE: You do NOT need to create the frontend. The deliverable only requires the backend to be created.

NOTE2: This phase is ongoing. Development will continue for Project Mileston 3, which is the front-end. So if you need to make changes to the backend that is OK and expected.   

**On Canvas, submit the GitHub link to your backend repo (i.e. opp-api). Only one team member should submit it on behalf of the team.**  
