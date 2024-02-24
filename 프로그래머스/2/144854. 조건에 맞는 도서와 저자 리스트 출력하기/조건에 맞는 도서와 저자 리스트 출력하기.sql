-- 코드를 입력하세요
SELECT book_id,author_name, DATE_FORMAT(published_date,"%Y-%m-%d") as PUBLISHED_DATE
FROM BOOK AS b
JOIN AUTHOR AS a
ON b.AUTHOR_ID = a.AUTHOR_ID
WHERE CATEGORY = "경제"
ORDER BY published_date