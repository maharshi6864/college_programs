declare
   tot number := 0;
   ran number := 0;
   rm  number := 0;
begin
   dbms_output.put_line('Program to find Total of digit in a number !!');
   ran := &ll;
   while ran > 0 loop
      rm := mod(
         ran,
         10
      );
      tot := ( tot * 10 ) + rm;
      ran := floor(ran / 10);
   end loop;
   dbms_output.put_line('Total of digit in a number is : ' || tot);
end;
/