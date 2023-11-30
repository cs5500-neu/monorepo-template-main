# Project Milestone 4B: Deployment

Now that you can run your app on a container, you can easily deploy your app to the Cloud. Using containers makes your app portable and easily to deploy in any environment. Moreover, you can use container orchestration (e.g. Kubernetes) to scale your app as you get more and more traffic.

You are free to use any Cloud provider to deploy your app. For those who prefer AWS, I will demonstrate how to deploy your app using Docker and a simple Cloud architecture.  

## Cloud Deployment

There are many Cloud architectures to support deploying an app to AWS. One simple example requires the following resources:

* EC2 - compute
* ECR - store Docker images
* Security Group

NOTE: Typically, we will also create a separate compute instance (i.e. RDS, DynamoDB) to house the database. But it is not required 
for this course; instead we will be using a file (i.e. Sqlite file) to store data. However, you can easily switch to a different database and create an AWS database resource such as RDS and make it part of 
your Cloud architecture and deployment. 

To setup your Cloud resources, create an EC2 instance (use the free version, i.e. T2 micro). .
On that instance, install Docker and use it to pull your app's image and to run your service 

To easily pull your image on EC2, push your image to ECR. 

Once your container is running on EC2, ensure that your instance allows inbound traffic by configuring your EC2 instance to accept all outbound traffic. 
Create and configure a Security Group for your EC2. 

# Resources

* Making Release Notes in Github
  * https://docs.github.com/en/repositories/releasing-projects-on-github/managing-releases-in-a-repository
  * https://docs.github.com/en/repositories/releasing-projects-on-github/automatically-generated-release-notes

* [How to Document Releases and Share Release Notes](https://confluence.atlassian.com/doc/blog/2015/10/how-to-document-releases-and-share-release-notes/)

* Makefile Tutorials
  * https://makefiletutorial.com/#getting-started
  * https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
  * https://www.gnu.org/software/make/

* [Semantic Versioning](https://semver.org/)

# Deliverables

* Deploy your final version of your app to the Cloud
  * Include your public-facing URL in your README.md
* Create a Makefile that contains all the scripts needed to build and deploy your app
  * Save this Makefile in the root of your repo 
* Create a release candidate
  * From your master branch, create a release branch named `release-v1.0`
* From your release branch, create a tag named 'v1.0'
* Create Release Notes for 'v1.0'

**On Canvas, submit the GitHub link to your backend repo (i.e. opp-api). If your has chosen to build a separate UI, also include the link to `opp-ui`. Only one team member should submit it on behalf of the team.**  
