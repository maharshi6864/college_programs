declare
   tot number := 0;
   ran number := 0;
begin
   dbms_output.put_line('Program to find Number of digit in a number !!');
   ran := &ll;
   while ran > 0 loop
      tot := tot + 1;
      ran := floor(ran / 10);
   end loop;
   dbms_output.put_line('Number of digit in a number is : ' || tot);
end;
/