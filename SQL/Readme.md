SQL Practice 🗄️

My SQL notes, practice queries and solved problems while preparing for Backend / SDE interviews. Structured according to the roadmap.sh SQL Roadmap. All queries are written and tested in MySQL (differences with other databases are noted where relevant).

SQL Roadmap: https://roadmap.sh/sql

📁 Repository Structure
sql-practice/
├── README.md
├── notes/
│   ├── 01-basics.md
│   ├── 02-basic-sql-syntax.sql
│   ├── 03-ddl.sql
│   ├── 04-dml.sql
│   ├── 05-aggregate-queries.sql
│   ├── 06-data-constraints.sql
│   ├── 07-joins.sql
│   ├── 08-subqueries.sql
│   ├── 09-advanced-functions.sql
│   ├── 10-views.sql
│   ├── 11-indexes.sql
│   ├── 12-transactions.sql
│   ├── 13-data-integrity-security.sql
│   ├── 14-stored-procedures-functions.sql
│   ├── 15-performance-optimization.md
│   └── 16-advanced-sql.sql
└── leetcode/
    ├── easy/
    ├── medium/
    └── hard/
🗺️ Roadmap Progress
01. Learn the Basics → notes
[x] What are Relational Databases?
[ ] RDBMS Benefits and Limitations
[ ] SQL vs NoSQL Databases
02. Basic SQL Syntax → notes
[ ] SQL Keywords
[ ] Data Types
[ ] Operators
[ ] Statements: SELECT, INSERT, UPDATE, DELETE
03. Data Definition Language (DDL) → notes
[x] Database commands: CREATE, IF NOT EXISTS, USE, RENAME, DROP, IF EXISTS
[x] Create Table
[x] Alter Table
[x] Drop Table
[x] Truncate Table
[x] Extra: Rename, Copy, Temporary Table, AUTO_INCREMENT, Sequences
04. Data Manipulation Language (DML) → notes
[ ] SELECT
[ ] FROM
[ ] WHERE
[ ] ORDER BY
[ ] GROUP BY
[ ] HAVING
[ ] JOINs (intro)
[ ] INSERT
[ ] UPDATE
[ ] DELETE
05. Aggregate Queries → notes
[ ] SUM
[ ] COUNT
[ ] AVG
[ ] MIN
[ ] MAX
[ ] GROUP BY
[ ] HAVING
06. Data Constraints → notes
[ ] Primary Key
[ ] Foreign Key
[ ] Unique
[ ] NOT NULL
[ ] CHECK
07. JOIN Queries → notes
[ ] INNER JOIN
[x] LEFT JOIN
[ ] RIGHT JOIN
[ ] FULL OUTER JOIN (not native in MySQL — LEFT JOIN UNION RIGHT JOIN)
[ ] Self Join
[ ] Cross Join
08. Subqueries → notes
[ ] Nested Subqueries
[ ] Correlated Subqueries
[ ] Types: Scalar, Column, Row, Table
09. Advanced Functions → notes
[ ] Numeric: FLOOR, ABS, MOD, ROUND, CEILING
[ ] Conditional: CASE, NULLIF, COALESCE
[ ] String: CONCAT, LENGTH, SUBSTRING, REPLACE, UPPER, LOWER
[ ] Date and Time: DATE, TIME, TIMESTAMP, DATEPART, DATEADD (MySQL: EXTRACT, DATE_ADD)
10. Views → notes
[ ] Creating Views
[ ] Modifying Views
[ ] Dropping Views
11. Indexes → notes
[ ] Managing Indexes
[ ] Query Optimization
12. Transactions → notes
[ ] ACID
[ ] BEGIN
[ ] COMMIT
[ ] ROLLBACK
[ ] SAVEPOINT
[ ] Transaction Isolation Levels
13. Data Integrity & Security → notes
[ ] Data Integrity Constraints
[ ] GRANT and REVOKE
[ ] DB Security Best Practices
14. Stored Procedures & Functions → notes
[ ] Stored Procedures
[ ] User-defined Functions
15. Performance Optimization → notes
[ ] Query Analysis Techniques (EXPLAIN)
[ ] Using Indexes
[ ] Optimizing Joins
[ ] Reducing Subqueries
[ ] Selective Projection
16. Advanced SQL → notes
[ ] Window Functions: ROW_NUMBER, RANK, DENSE_RANK, LEAD, LAG, FIRST_VALUE
[ ] Common Table Expressions (CTEs)
[ ] Recursive Queries
[ ] Pivot / Unpivot Operations (not native in MySQL — CASE + GROUP BY)
[ ] Dynamic SQL
🧩 LeetCode SQL Problems
#	Problem	Difficulty	Roadmap Topic	Concept
175	Combine Two Tables	Easy	07. JOIN Queries	LEFT JOIN
💡 Key Takeaways
CREATE ... IF NOT EXISTS and DROP ... IF EXISTS make scripts safe to re-run.
MySQL has no direct command to rename a database; tables are moved with RENAME TABLE.
DELETE removes selected rows, TRUNCATE removes all rows but keeps the table, DROP removes the table itself.
CREATE TABLE ... AS SELECT copies data but not keys or indexes; CREATE TABLE ... LIKE copies the full structure.
INNER JOIN returns only matching rows; LEFT JOIN keeps all rows from the left table.
