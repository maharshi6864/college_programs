declare
   input_number  number;
   result_number number := 1;
begin
   for i in 1..10 loop
      input_number := i;
      result_number := 1;
      while input_number > 0 loop
         result_number := result_number * input_number;
         input_number := input_number - 1;
      end loop;
      dbms_output.put_line('Factorial of '
                           || i
                           || ' is '
                           || result_number);
   end loop;
end;
/