declare
   x                number;
   nn               number;
   term             number := 1;
   sum_of_factorial number := 0;
   factorial        number := 1;
begin
   x := &x;
   nn := &nn;
   for i in 1..nn loop
      if i > 1 then
         factorial := factorial * i;
      end if;
      term := power(
         x,
         i
      ) / factorial;
      sum_of_factorial := sum_of_factorial + term;
   end loop;
   dbms_output.put_line('output is : ' || sum_of_factorial);
end;
/