declare
   n           number := &n;
   sum_special number := 0;
   fact        number;
begin
   for i in 1..n loop
      fact := 1;
      for j in 1..i loop
         fact := fact * j;
      end loop;
      sum_special := sum_special + i / fact;
   end loop;
   dbms_output.put_line('The sum of the series 1/1! + 2/2! + ... + n/n! is: ' || sum_special);
end;
/