declare
   binary_string  varchar2(1000) := '11 ';
   decimal_result number := 0;
begin
   for i in 1..length(binary_string) loop
      decimal_result := decimal_result * 2 + to_number ( substr(
         binary_string,
         i,
         1
      ) );
   end loop;

   dbms_output.put_line('Decimal representation of '
                        || binary_string
                        || ' is '
                        || decimal_result);
end;
/