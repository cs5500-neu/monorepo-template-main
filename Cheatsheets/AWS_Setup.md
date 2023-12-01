# Setting up EC2, ECR, IAM

## Configure EC2 for Docker

* Create a new EC2 instance (t2 micro-free tier eligible)
* Create a key pair (download and save the keypair to connect to EC2)
* Create security group and allow traffic from internet
* Launch instance
* * Modify the keypair to allow SSH access
```
chmod 400 <path to key pair>  
```
* Connect to instance via SSH
```
ssh -i <path to keypair> ec2-user@ec2-35-86-175-165.us-west-2.compute.amazonaws.com
```
If you can't connect on initial try, try rebooting your EC2 instance and reconnecting.


* Install Docker
```
sudo yum install -y yum-utils
sudo yum install docker
```

Start docker in background
```
sudo systemctl start docker.service
sudo systemctl enable docker.service
```

Add user to docker group so you don't have to use sudo all the time with docker commands

```
sudo groupadd docker
sudo usermod -aG docker $USER
newgrp docker
docker run hello-world
```

## Create an ECR repo to house your docker images

* Go to ECR
* Create a private repo with suffic `opp-app` (Note the ECR URI)



## Create Admin User on IAM
* Go to IAM
* Create a User and give it Administrator Access
* Create an access key and save the file somewhere safe

## Build and push your image to ECR
* If you haven't already, install `aws-cli`, run `aws configure`, and add your credentials from the previous step to the aws cli tool
* On your local machine, build an image from the root of your repo and note the name of the image
```
docker build --platform linux/amd64 -t <name of image> .
```

* Tag the image using the ECR URI
```
docker tag <image> <ECR URI>/<tag>
```

* Login in ECR
```
aws ecr get-login-password --region us-west-2 | docker login --username AWS --password-stdin <REPO_HOST>
```

* Push the tagged image to your ECR
```
docker push <ECR URI>:<tag>
```

## Pull image from ECR into EC2 instance

* SSH into your EC2 
* Run `aws configure` and add the user credentials from the previous step
* Log into ECR
* Pull the image from ECR
* Run the your container

## Final Step: Add custom port of your app to the EC2 instance 

* Your app is running on a custom port that you need to configure on EC2 in order to allow for incoming connections 
* Test your endpoint:

```
<ec2 public url>:<app port>/<path>
```
