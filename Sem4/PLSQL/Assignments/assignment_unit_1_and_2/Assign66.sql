begin
   dbms_output.put_line('All possible combinations of 1,2 and 3 : ');
   for i in 1..3 loop
      for j in 1..3 loop
         for k in 1..3 loop
            dbms_output.put_line(i
                                 || ' '
                                 || j
                                 || ' '
                                 || k);
         end loop;
      end loop;
   end loop;

end;
/