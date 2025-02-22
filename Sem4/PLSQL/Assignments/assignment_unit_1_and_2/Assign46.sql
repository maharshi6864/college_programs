DECLARE
   a NUMBER := &a;
   b NUMBER := &b;
   c NUMBER := &c;
   d NUMBER := &d;
BEGIN
   IF POWER(a, 3) + POWER(b, 3) = POWER(c, 3) + POWER(d, 3) THEN
      DBMS_OUTPUT.PUT_LINE('The numbers form a Ramanujan number.');
   ELSE
      DBMS_OUTPUT.PUT_LINE('The numbers do not form a Ramanujan number.');
   END IF;
END;