declare
   fact      number;
   sumoffact number := 0;
   ran       number;
begin
   ran := &&enter_range_;
   for i in 1..ran loop
      fact := 1;
      for j in 1..i loop
         fact := fact * j;
      end loop;
      sumoffact := sumoffact + fact;
   end loop;

   dbms_output.put_line('Sum of factorial : ' || sumoffact);
end;
/