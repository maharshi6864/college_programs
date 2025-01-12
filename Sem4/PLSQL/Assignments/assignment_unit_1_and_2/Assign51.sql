declare
   numm number;
   num1 number;
   num2 number;
begin
   numm := 23;
   num1 := mod(
      numm,
      10
   );
   num2 := floor(numm / 10);
   dbms_output.put_line(' Addition is ' ||(num2 + num1));
end;
/