declare
   principal         number;
   rate              number;
   time              number;
   compound_interest number;
begin
   principal := 10000;
   rate := 5;
   time := 2;
   compound_interest := principal * power(
      (1 + rate / 100),
      time
   ) - principal;


   dbms_output.put_line('Principal Amount: ' || principal);
   dbms_output.put_line('Rate of Interest: '
                        || rate
                        || '%');
   dbms_output.put_line('Time (in years): ' || time);
   dbms_output.put_line('Compound Interest: ' || compound_interest);
end;
/