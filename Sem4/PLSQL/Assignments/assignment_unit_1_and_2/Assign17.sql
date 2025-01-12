declare
   input_number  number;
   binary_result varchar2(1000) := '';
begin
   input_number := 3;
   if input_number = 0 then
      binary_result := '0';
   else
      while input_number > 0 loop
         binary_result := mod(
            input_number,
            2
         )
                          || binary_result;
         input_number := trunc(input_number / 2);
      end loop;
   end if;
   dbms_output.put_line('Binary representation of number is ' || binary_result);
end;
/