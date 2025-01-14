declare
   num1 number;
   num2 number;
   dupl number;
begin
   num1 := &num11;
   num2 := &num22;
   dupl := num1;
   for i in 1..num2 - 1 loop
      num1 := num1 * dupl;
   end loop;
   dbms_output.put_line('Raised number is :  ' || num1);
end;
/