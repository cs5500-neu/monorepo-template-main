# Project Milestone 3: Testing


In this phase, the software undergoes comprehensive testing to confirm it meets all requirements and is free from defects.

The testing effort encompasses system testing, integration testing, and user acceptance testing (UAT).

In our online payment platform scenario, the testing phase kicks off with comprehensive system testing, where every feature, 
from credit card charges to card validation and balance checks, undergoes rigorous scrutiny.

Subsequently, your team will delve into integration testing to ensure seamless collaboration with the bank’s other systems.



# Resources

Writing tests for FastAPI: https://fastapi.tiangolo.com/tutorial/testing/

Pytest framework: https://docs.pytest.org/en/7.4.x/


# Deliverables

You should have a working backend prototype that you can run locally on your machine. 

Your team needs to create the following:

* Successfully call and handle all responses from third-party API
  * Validate card API: validate_card(card_number) => { 'success': <bool>, 'msg': <str> }
    * URL: https://c3jkkrjnzlvl5lxof74vldwug40pxsqo.lambda-url.us-west-2.on.aws
    * Example: `curl https://c3jkkrjnzlvl5lxof74vldwug40pxsqo.lambda-url.us-west-2.on.aws -d '{"card_number": "4147202464191053"}' -H 'content-type: application/json'`
    * Response: `{"success": "true", "msg": "card number is valid."}`
  * Check funds and fraud API: check_funds_and_fraud(card_number, amt) => { 'success': <bool>, 'msg': <str> }
      * URL: https://223didiouo3hh4krxhm4n4gv7y0pfzxk.lambda-url.us-west-2.on.aws
    * Example: `curl https://223didiouo3hh4krxhm4n4gv7y0pfzxk.lambda-url.us-west-2.on.aws -d '{"card_number": "4147202464191053", "amt": 100.00}' -H 'content-type: application/json'`
    * Response: `{"success": "true", "msg": "card number has sufficient funds and is not fradulent"}`
* Write tests for your ReST API's
* Write unit tests for any helper modules or classes
 

NOTE1: For the frontend, I will be changing the requirements. You have two options to create a frontend:

1. Use the builtin Swagger UI provided by FastAPI: https://fastapi.tiangolo.com/how-to/configure-swagger-ui/
2. If you are up for a challenge or want to learn how to build a frontend, create a separate frontend on your `opp-ui` repo. You can use any web framework (e.g. React) or build a simple UI using vanilla HTML, CSS, and Javascript (highly recommended).

NOTE2: This phase is ongoing. Development will continue throughout the remaining semester. Changes to the backend can occur at anytime during the SDLC and that is OK and expected.   

**On Canvas, submit the GitHub link to your backend repo (i.e. opp-api). If your has chosen to build a separate UI, also include the link to `opp-ui`. Only one team member should submit it on behalf of the team.**  
