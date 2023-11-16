# Project Milestone 4A: Deployment


The deployment phase is where your software finally becomes available to end users. It's essential to ensure that the deployment process is smooth and efficient, as any issues during this phase can impact the user experience and overall perception of the software.

The Deployment Phase follows the Testing phase in SDLC. This is where the software solution, having passed rigorous testing and quality checks, is finally made available to the end-users.

The Deployment Phase signifies the moment of truth for any software development project. It's here where the software becomes accessible to its users for the very first time.

A successful deployment ensures that the software runs seamlessly in the live environment, providing value to the users and achieving the objectives outlined in the planning phase.

A well-executed deployment phase helps to avoid downtime, minimize risks, and ensure a positive user experience.

For this phase, we will cover Deployment in two parts: Containernization and Cloud. 
PM4A will focus on Containerization. PM4B will focus on Cloud. 

## Containerization 

To support deployment, we will use containerization, which allows us to easily package our application and deploy it in a consistent and repeatable manner. 
Containerization also allows us to scale our app as demand for our app grows. 

For more on the virtues of containerization, read [this article](https://dev.to/netdevops_/the-benefits-of-docker-containerization-for-application-deployment-54dh0) and [this one](https://aws.amazon.com/what-is/containerization/). 

# Resources

Installing Docker: https://docs.docker.com/engine/install/

Build a Docker image: https://docs.docker.com/engine/reference/commandline/build/

Run a Container from a Docker image: https://docs.docker.com/engine/reference/commandline/run/

FastAPI and Docker: https://fastapi.tiangolo.com/deployment/docker/



# Deliverables

At this stage, it is assumed that you now have a working version of your app that you can run locally. At the minimum, all your public-facing ReST API's should be implemented and can be
called from the command line, a browser, or Postman or Swagger UI. If you are using the FastAPI framework, you should have your SwaggerUI working and all your ReST API's published there.  

To accomplish the following deliverables, you should install Docker on your machine. See Resources section above for installation instructions.

Your team needs to create the following:

* Create a Dockerfile and save it in the root level of your `opp-api` repo
* Create an image from a Dockerfile
* Run a container from the image
* Test the app while the container is running
* Document all your Docker-related commands in README.md
 
**On Canvas, submit the GitHub link to your backend repo (i.e. opp-api). If your has chosen to build a separate UI, also include the link to `opp-ui`. Only one team member should submit it on behalf of the team.**  
