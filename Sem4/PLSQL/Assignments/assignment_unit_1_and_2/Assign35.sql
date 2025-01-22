declare
   sumoffact double precision := 0;
   ran       number;
begin
   ran := &&enter_range_;
   for i in 1..ran loop
      sumoffact := sumoffact + ( 1 / i );
   end loop;

   dbms_output.put_line('Sum of factorial : ' || sumoffact);
end;
/