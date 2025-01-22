declare
   n             number := &n;
   sum_factorial number := 0;
   fact          number;
begin
   for i in 1..n loop
      fact := 1;
      for j in 1..i loop
         fact := fact * j;
      end loop;
      sum_factorial := sum_factorial + 1 / fact;
   end loop;
   dbms_output.put_line('The sum of the series 1/1! + 1/2! + ... + 1/n! is: ' || sum_factorial);
end;
/