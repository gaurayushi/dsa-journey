
-- =====================================================
--  175. Combine Two Tables
--  Link: https://leetcode.com/problems/combine-two-tables/
--  Difficulty: Easy
--  Asked in: Wipro, Cognizant, Infosys
--  Roadmap topic: 07. JOIN Queries -> LEFT JOIN
-- =====================================================


-- We have Given Tables 
-----------------------------------------------------
-- TABLES
-- -----------------------------------------------------
-- Person(personId , lastName, firstName)
-- Address(addressId, personId, city, state)
--
-- Relation: Address.personId -> Person.personId


-- -----------------------------------------------------
-- PROBLEM (in short)
-- -----------------------------------------------------
-- Show firstName, lastName, city and state of EVERY person.
-- If a person has no address,
-- city and state should be NULL. ( which is the left table)



# Write your MySQL query statement below
Select Person.firstName,Person.lastName ,Address.city,Address.state
 from Person left join Address  on Person.personId=Address.personId;
