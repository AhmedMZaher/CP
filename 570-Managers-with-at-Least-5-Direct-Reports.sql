# Write your MySQL query statement below

SELECT name
FROM Employee AS E
WHERE (SELECT COUNT(id) FROM Employee AS EE WHERE E.id = EE.managerId) >= 5;