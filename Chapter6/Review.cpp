1.  What do we mean by "Programming is understanding"?
--> In the book, it is meant that if we understand the problem to be solved then program can be easily written.


2. The chapter details the creation of a calculator program. Write a short
       analysis of what the calculator should be able to do.
--> 1. Calculator should be able to do basic arithmetics as well as complex arithmetics.
    2. Should work with floating point numbers.
    3. Should prompt for appropriate errors if any.
    4. Should never stop receiving inputs.
    5. Should evaluate expression using fundamental mathematics rules.


3.  How do you break a problem into smaller manageable parts?
--> 1. By using external libraries which already solves the problem.
    2. Look for the parts of the solution that can be separately described.


4.  Why is creating a small, limited version of a program a good idea?
--> 1.It creates the structure on which we can build and modify other functionalities.
    2. We often get what's working and what's not.
    3. To bring out the problems in our understanding, ideas and tools.

5.  Why is feature creep a bad idea?
--> 1. Adds unnecessary complexity in the program.
    2. Distracts programmer from the main problem which program should solve and then spends more time wondering about all the other features.
    3. It might take so much time to get that feature to work.

6.  What are the three main phases of software development?
--> 1. Analysis 2. Design 3. Implementation

7.  What is a "use case"?
--> Use case is the demo/test example that we can use to test our program's logic or test the program itself.

8.  What is the purpose of testing?
--> To check if everything which is implemented until now works the way it should. 
    and nothing is essentially broken.

9. According to the online in the chapter, describe the difference between a
   Term, an Expression, a Number, and a Primary.
-->  Expression - Term, Expression + Term, Expression - Term
     Term	- Primary, Term * Primary, Term / Primary
     Primary	- Number, ( Expression )
     Number	- Floating point integer

10. In the chapter, an input was broken do\.vn intO ilS component Terms, Expressions,
Primarys, and Numbers. Do this for (17+4)/(5- 1).
--> (17 + 4) / (5 - 1)
    (Number + Number) / (Number - Number)
     Primary + Primary
     Term + Term  
     (Expression + Term) / (Expression - Term)
      (Expression) / (Expression)
       Primary / Primary
       Term / Primary
          Term
         Expression

II . Why does the program not have a function called number()?
--> Number should return just an floating point integer which we don't need to because
    it is already a data type in C++.

12. What is a token?
--> Token is a character representation of the single character from expression.
--> A Token is a sequence of characters that represents something we consider a unit,
    such as a number or an operator.

13. What is a grammar? A grammar rule?
--> Grammer is a specification or rules of language which specifies how the program should be written.
    Grammer rule is a set of rules which any program should be able to follow. otherwise compiler will generate an error.
    Usually compiler implements the grammer to check the syntax of the written program.
--> Grammer defines the syntax of the input and the rules are implemented by the program.

14. What is a class? What do we usc classes for?
--> Class is a user defined datatype. Most often we don't have all the types required in the programming language.
    So this programming language construct allows us to define real world objects. Which makes the programs modular
    and more understandable.

15. what is a constructor?
--> Constructor is a function with same name as a Class, which is used to initialize the object of that class.
    In other words, initializing data members of that class.

16. In the expression function, why is the default for the switch-statement to
"putback" the token?
--> putback() is given to check weather program is about to exit by checking for q.
    If it wouldn't have been put back in buffer we would have lost the read in instruction to quit
    the calculator and our calculator programm would never have finished. i.e keep running inside while loop.
    And also, to check if the expression now needs to be evaluated or not.

17. What is "look-ahead"?
--> Look ahead is sneakign ahead of in input stream for specific character.
    Oftentimes may be due to design desicision program might need to look-ahead
    inorder to perform some calculations.


18. What do es putbackO do and why is it useful?
--> Putback() keeps the input inside input stream. which means if something is read in
    we can keep it back in input buffer and read it again. It's useful because if we read in
    unwanted character and function/code currently executing is unable to handle that but 
    there exist other function or code which will handle it then putback is used to allow
    that to happen.


19. Why is the remainder (modulus) operation , %, difficult to implement in
the term?
--> Because it can not work with floating point numbers.


20. What do we lISC the two data members of the Token class for?
--> One for token type and one for actual token value. The numeric tokens
    have the value set into it. 


21. why do we (sometimes) split a class's members into private and public
members?
--> Because we don't want to expose the implementation details to users ot that program.


22. What happens in the Token_stream class when there is a token in the
    buffer and the getO function is called?
--> It return that token from the get function


23. Why wcre the '; ' and 'q' characters added to the switch-statement iIllhc
getO function of the Token_stream class?
--> Because if we receive those characters while inside get. We don;t want to ignore them but handle
    in order to exit the program. and evaluate the expression. If we don't handle then then either bad token
    error will be thrown or they will be lost while reading.


24. When should we start testing our program?
--> We should test our program incrementaly once smaller solutions start to manifest and


25. What is a "user-defmed type"? Why would we want one?
--> Because there are only limited datatypes in c++ language. we need something
    which allows us to create our own datatype based on real world entities.


26. What is the interface to a C++ "user-defined type"?
--> It is a access provided to that datatype.


27. Why do we want to rely a ll libraries of code?
--> Because we shouldn't reinvent will everytime. since it would help in focusing on actual problem at hand
    rather than other technical details.


