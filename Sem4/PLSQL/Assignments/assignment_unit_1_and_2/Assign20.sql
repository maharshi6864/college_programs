declare
   input_number  number;
   binary_result varchar2(1000) := '';
begin
   input_number := 123;
   if input_number = 0 then
      binary_result := '0';
   else
      while input_number > 0 loop
         binary_result := mod(
            input_number,
            8
         )
                          || binary_result;
         input_number := trunc(input_number / 8);
      end loop;
   end if;
   dbms_output.put_line('Octal representation of number is ' || binary_result);
end;
/