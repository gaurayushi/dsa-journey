# 197. Rising Temperature

**Platform:** LeetCode  
**Difficulty:** Easy  
**Topic:** SQL  
**Companies:** Infosys, Bloomberg, Groww  
**Problem Link:** https://leetcode.com/problems/rising-temperature/

## Problem Statement

Find the IDs of all dates where the temperature is higher than the previous calendar day (yesterday).

Return the result in any order.

## Table Schema

**Table: Weather**

| Column | Type | Description |
|---|---|---|
| id | INT | Unique ID |
| recordDate | DATE | Date of temperature record |
| temperature | INT | Recorded temperature |

## Example

**Input:**

| id | recordDate | temperature |
|---:|---|---:|
| 1 | 2015-01-01 | 10 |
| 2 | 2015-01-02 | 25 |
| 3 | 2015-01-03 | 20 |
| 4 | 2015-01-04 | 30 |

**Output:**

| id |
|---:|
| 2 |
| 4 |


# Write your MySQL query statement below
select w1.id
from Weather w1
join Weather w2
on w1.recordDate=DATE_ADD(w2.recordDate,Interval 1 Day)
where w1.temperature>w2.temperature;




Input
Weather =
| id | recordDate | temperature |
| -- | ---------- | ----------- |
| 1  | 2015-01-01 | 10          |
| 2  | 2015-01-02 | 25          |
| 3  | 2015-01-03 | 20          |
| 4  | 2015-01-04 | 30          |
Output
| id |
| -- |
| 2  |
| 4  |
Expected
| Id |
| -- |
| 2  |
| 4  |




## Approach

1. Use SELF JOIN to join the Weather table with itself.
2. Use DATE_ADD() to match the current date with the previous calendar date.
3. Compare the current day's temperature with the previous day's temperature.
4. Return the current day's ID if its temperature is higher.

## SQL Concepts Learned

- SELECT
- FROM
- SELF JOIN
- Table Aliases
- DATE_ADD()
- INTERVAL
- WHERE
- Comparison Operators

## Complexity

Depends on the database execution plan and available indexes.

## Learning Notes

A SELF JOIN allows us to compare records from the same table.

`w1` represents the current day, and `w2` represents the previous day.  

