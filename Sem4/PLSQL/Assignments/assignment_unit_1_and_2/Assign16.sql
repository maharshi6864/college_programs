declare
   ran  number := 6;
   num1 number := 0;
   num2 number := 1;
   num3 number := 1;
begin
   dbms_output.put_line('Program to get fibonacci series till range !!');
   while ran - 3 > 0 loop
      num1 := num2;
      num2 := num3;
      num3 := num1 + num2;
      ran := ran - 1;
   end loop;
   dbms_output.put_line(num3 || ' end number in series !!');
end;
/