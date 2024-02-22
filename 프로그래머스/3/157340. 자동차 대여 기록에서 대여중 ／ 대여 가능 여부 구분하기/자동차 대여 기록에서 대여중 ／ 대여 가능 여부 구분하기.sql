-- 코드를 입력하세요
SELECT CAR_ID, max(if("2022-10-16" between START_DATE and END_DATE, "대여중", "대여 가능")) AS AVAILABILITY
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY

group by car_id

order by car_id desc;







