SELECT 
    user_id,
    CONCAT(
        UPPER(LEFT(name,1)),        -- first letter uppercase
        LOWER(SUBSTRING(name,2))    -- rest lowercase
    ) AS name
FROM Users
ORDER BY user_id ASC;
