declare
   input_number  number;
   result_number number := 1;
begin
   input_number := 5;
   while input_number > 0 loop
      result_number := result_number * input_number;
      input_number := input_number - 1;
   end loop;
   dbms_output.put_line('Factorial is ' || result_number);
end;
/